class stack {
private:
    double arr[100];
    int length = 0;
public:
    bool push(stack a, float new_val);
    bool pop(stack a, float& val);
    double peek(stack a, float& val);
    bool is_empty(stack a);
    int member();
};