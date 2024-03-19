#include <iostream>
#include <string>

class Wrapper {
    public:
        Wrapper() = default;
        void print() {
            std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
        }
    private:
        int x{0};
        int y{0};
        int z{0};
        char *c{nullptr};
};

//* Size of the class object is the sum of the size of all the member variables. Generally. But size of the string is not the sum of the size of the characters.
//* because string have a pointer to the first character and that is the size of the string. A pointer. So the size of the string is 8 bytes. 
int main () {
    Wrapper w;
    w.print();
    Wrapper *c = &w;

    std::string s = "Hello of the world";

    std::cout << "Size of string: " << sizeof(s) << std::endl;
    std::cout << "Size of Wrapper: " << sizeof(Wrapper) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of wrapper ptr: " << sizeof(c) << std::endl;

    return 0;
}