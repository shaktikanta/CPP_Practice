#include <iostream>
#include <cstring>

class student {
private:
    int id;
    char *name;
public:
    void get() {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
    void set(std::string n, int i) {
        name = new char[n.length() + 1];
        strcpy_s(name, n.length() + 1, n.c_str());
        id = i;
    }
};

int main()
{
    std::cout << "Hello World!\n";
    student S1, S2;
    //S1.get();
    S1.set("Shakti", 1);
    S1.get();
    S2.set("Tanuja", 2);
    S2.get();

    return 0;
}
