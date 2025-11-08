#include <iostream>

using namespace std;

class Test{
    int a, b;
    public:
    void show(int a, int b){
        this->a = a;
        this->b = b;
        cout << "object Address is : " << this << endl; // This pointer to get the object adress and till this point the object is not craeted so this point can only give the address when the object will be decalred
        cout << "A : " << this->a << " B : " << this->b << endl;
    }
}; //class declaration ended

int main() {
    Test T; //object created
    T.show(25, 35);
    return 0;
}