int main() {

    //This demonstrates why order matters
    int i = 2;
    int j = 2;
    int b = i++; // b = 2, i = 3
    int a = ++j; // a = 3, j = 3
}