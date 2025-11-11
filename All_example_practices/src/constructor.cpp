#include <iostream>

using namespace std;

class circle{
    float r;
    public:
    // A class can have many no of constructors. 
    circle() //Default constructor
    {
        r = 5;
    }
    circle(float r) //Parameterized constructor
    {
        this->r = r;
    }
    void showArea(){
        cout << "Radius is: " << r << endl;
        cout << "Area : " << 3.14*r*r << endl;
    }
};

int main()
{
    circle C1; // Default constructor will be invoked
    circle C2(10); // Paramterized constructor will be invoked
    C1.showArea();
    C2.showArea();
    return 0;
}