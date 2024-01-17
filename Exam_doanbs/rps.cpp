// Burgess Doan III

#include <iostream>
#include <time.h>
using namespace std;



class Shape {
public:
    enum class ShapeT {rock, paper, scissors};
    ShapeT shape;

    Shape() {
        int rand_num = rand() % 3 + 1;
        if(rand_num == 1)    shape = ShapeT::rock;
        else if(rand_num == 2)    shape = ShapeT::paper;
        else    shape = ShapeT::scissors;
    }
    Shape(ShapeT s){
        shape = s;
    }

    string to_string() {
        if(shape == ShapeT::rock)    return "rock";
        else if(shape == ShapeT::paper)    return "paper";
        else if(shape == ShapeT::scissors)    return "scissors";
        else    return "error";
    }
    bool operator==(const Shape& other) const {
        return shape == other.shape;
    }
    bool operator<(const Shape& other) const {
        if((shape == ShapeT::rock && other.shape == ShapeT::paper) ||
           (shape == ShapeT::paper && other.shape == ShapeT::scissors) ||
           (shape == ShapeT::scissors && other.shape == ShapeT::rock)) {
            return true;
        }
        else {
            return false;
        }
    }
    bool operator>(const Shape& other) const {
        if((shape == ShapeT::rock && other.shape == ShapeT::scissors) ||
           (shape == ShapeT::paper && other.shape == ShapeT::rock) ||
           (shape == ShapeT::scissors && other.shape == ShapeT::paper)) {
            return true;
        }
        else {
            return false;
        }
    }
};

class RockPaperScissors {
    unsigned int n_players;
    const string name;
public:
    RockPaperScissors(string player_name, unsigned int n_of_players) : name(player_name) {
        if(n_of_players < 2) {
            n_players = 2;
            cout << "Player count too low, changed to " << n_players <<endl;
        }
        else if(n_of_players > 6) {
            n_players = 6;
            cout << "Player count too high, changed to " << n_players << endl;
        }
        else{
            n_players = n_of_players;
            cout << "Player count set to " << n_players << endl;
        }
        srand((unsigned int) time(NULL) + (50 * time(NULL)));
    }

    void change_n_players(unsigned int n_of_players) {
        if(n_of_players < 2) {
            n_players = 2;
            cout << "Player count too low, changed to " << n_players <<endl;
        }
        else if(n_of_players > 6) {
            n_players = 6;
            cout << "Player count too high, changed to " << n_players << endl;
        }
        else{
            n_players = n_of_players;
            cout << "Player count set to " << n_players << endl;
        }
    }
    int play() {
        string choice;
        bool check = false;
        cout << "Choose your shape (rock, paper, scissors): " << endl;
        while(!check)
            cin >> choice;
            if(choice == "rock" || choice == "paper" || choice == "scissors") {
                Shape player_shape(Shape::ShapeT::rock);
                check = true;
                cout << name << "played " << player_shape.to_string() << endl;
            }
            else {
                cout << choice << " is not a valid shape, please try again! (rock, paper, scissors)" << endl;
            }
        Shape* npc_shapes = new Shape[n_players];
        for(int i = 0; i < n_players-1; i++) {
            cout << "Player " << i+2 << " played " << npc_shapes[i].to_string() << endl;
        }
        for(int i = 0; i < n_players-1; i++) {
            
        }
    }

};

int main() {
    RockPaperScissors rps("Jen", 3);
    rps.play();
}