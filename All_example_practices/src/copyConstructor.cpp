#include <iostream>

using namespace std;

class sample{
    int a, b;
    public:
    sample(int a, int b) //Parameterized constructor
    {
        this->a = a;
        this->b = b;
    }
    sample(sample &S) //copy constructor
    {
        a = S.a;
        b = S.b;
    }
    void show(){
        cout << "A: " << a << " B: " << b << endl; 
    }
    void change(int x, int y);
};

void sample::change(int x, int y){
    this->a = x;
    this->b = y;
}

int main(int argc, const char** argv) {
    
    sample S1(10, 20);
    S1.show();

    sample S2(S1);
    S1.show();
    S2.show();

    //deep copy example
    S2.change(25,35);

    S1.show();
    S2.show();
    
    return 0;
}