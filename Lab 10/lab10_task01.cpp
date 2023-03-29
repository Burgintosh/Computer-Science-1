#include <iostream>
using std::cout;
using std::endl;

int main();

class Person0 {
protected:
    void print() const {
        cout << "P0 -- Person" << endl;
    }
public:
    void show() const {
        print();
    }
    friend int main();
};

class Employee0 : public Person0 {
    friend int main();
};

class Person1 {
protected:
    void print() const {
        cout << "P1 - Person" << endl;
    }
public:
    void show() const {
        print();
    }
    friend int main();
};

class Employee1 : public Person1 {
protected:
    void print() const {
        cout << "El -- Employee" << endl;
        Person1::print();
    }
    friend int main();
};

class Person2 {
protected:
    virtual void print() const {
        cout << "P2 -- Person" << endl;
    }
public:
    void show() const {
        print();
    }
    friend int main();
};

class Employee2 : public Person2 {
protected:
    virtual void print() const {
        cout << "E2 --  Employee" << endl;
        Person2::print();
    }
    friend int main();
};

int main() {
    Person0 p0; p0.show(); cout << "print() ";
    p0.print(); cout << endl; Employee0 e0;
    e0.show(); cout << "print() "; e0.print(); cout << endl;

    Person1 p1; p1.show(); cout << "print() ";
    p1.print(); cout << endl; Employee1 e1;
    e1.show(); cout << "print() "; e1.print(); cout << endl;

    Person2 p2; p2.show(); cout << "print() ";
    p2.print(); cout << endl; Employee2 e2;
    e2.show(); cout << "print() "; e2.print(); cout << endl;
    return 0;
}