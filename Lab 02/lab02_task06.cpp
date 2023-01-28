#include <iostream>

int main() {

    //TASK 6
   std::string word1;
   std::string word2;
   std::cin >> word1 >> word2;
   bool comp3 = (word1 == word2);
   int word1Size = word1.size();
   int word2Size = word2.size();
   //std::cout << word1.back() << std::endl;
   //std::cout << word2.back() << std::endl;
   std::cout << word1[word1Size-1] << std::endl;
   std::cout << word2[word2Size-1] << std::endl;
}