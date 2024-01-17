//Stack
//Head

//Write a function that returns an array
//unheap - deallocate memory

//Memory that is allocated on the heap needs to be deallocated by the programmer using the delete operator when it is no longer needed
//A program that does not deallocate unused memory is said to have a memory leak
int* get_prt_bad() {
    int i = 10;
    return &i; // Not good I think
}
int* get_prt_good() {
    int i = 10;
    return i; // returns valid pointer to an integer that is allocated on the heap
}
int main() {
    int* ptr = get_ptr_bad();
    int ptr = get_ptr_good();
    std::cout << *ptr << std::endl;
    delete ptr; // Deallocate ptr | Needed to not have memory leak
}