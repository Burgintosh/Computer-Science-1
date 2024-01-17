#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Item {
public: 
    Item(string name, string id, string description, string category, float price, unsigned int quantity)
    : name(name), id(id), description(description), category(category), price(price), quantity(quantity) {}
    string get_name() {
        return name;
    }
    string get_id() {
        return id;
    }
    string get_description() {
        return description;
    }
    string get_category() {
        return category;
    }
    int get_quantity() {
        return quantity;
    }
    void set_price(float num) {
        price = num;
    }
    void set_quantity(int num) {
        quantity = num;
    }
private:
    string name;
    string id;
    string description;
    string category;
    float price;
    unsigned int quantity;
};

class Inventory {
    Item list[100];
    int length;
public:
    void add(string name, string id, string description, string category, float price) {
        Item to_add(name, id, description, category, price, 0);
        list[length] = to_add;
        length++;
    }

    void restock(string id, unsigned int new_quantity) {
        for(int i = 0; i < length; i++) {
            if(list[i].get_id() == id) {
                list[i].set_quantity(new_quantity);
            }
        }
    }

    void oos() {
        cout << "Out of Stock:" << endl;
        for(int i = 0; i < length; i++) {
            if(list[i].get_quantity() == 0) {
                cout << list[i].get_name() << endl;
            }
        }
    }

    void set_price(string id, float new_price) {
        new_price = abs(new_price);
        for(int i = 0; i < length; i++) {
            if(list[i].get_id() == id) {
                list[i].set_price(new_price);
            }
        }
    }

    void get_categories() {
        string category_list[100];
        int category_length = 0;
        bool in_list = false;
        for(int i = 0; i < length; i++) {
            in_list = false;
            for(int j = 0; j < category_length; j++) {
                if(category_list[j] == list[i].get_category()) {
                    in_list = true;
                }
            }
            if(!in_list) {
                category_list[category_length] = list[i].get_category();
                category_length++;
            }
        }
        cout << "\nCategories:" << endl;
        for(int i = 0; i < category_length; i++) {
            cout << category_list[i] << endl;
        }
        
    }

    void get_items(string input_category) {
        cout << "Items:" << endl;
        for(int i = 0; i < length; i++) {
            if(list[i].get_category() == input_category) {
                cout << list[i].get_name() << endl;
            }
        }
    }

    bool sell(string id, unsigned int q) {
        for(int i; i < length; i++) {
            if(list[i].get_id() == id) {
                if(list[i].get_quantity() >= q){
                    list[i].set_quantity(list[i].get_quantity() - q);
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    
}