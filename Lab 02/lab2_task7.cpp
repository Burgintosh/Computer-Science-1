#include <iostream>

int main() {

    //TASK 7
  std::string yoyo;
  std::string yarn;
  std::cin >> yoyo >> yarn;
  std::string bigString = (yoyo + " " + yarn);
  bool check = bigString.size() > 0;
  std::cout << bigString << std::endl << check << std::endl;
}