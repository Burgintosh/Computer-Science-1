#include <iostream>
#include <queue>

class Node {
public:
    Node parent;
    Node left_child;
    Node right_child;


};

bool Breadth_First_Search(Node start, Node e) {
    bool check = false;
    std::queue<Node> q;
    q.push(start);
    while(!q.empty()) {
        if(q.front() != e) {
            q.push(q.front().left_child);
            q.push(q.front().right_child);
            q.pop();
        }
        else {
            return true;
        }
    }
    return false;
}

int main() {

}