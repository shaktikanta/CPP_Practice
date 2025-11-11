#include <iostream>
#include <string.h>

using namespace std;

class stu{
    int id;
    char name[20];
    float fee;
    public:
    stu(int id, const char *name)   //Parameterzied constructor
    {
        this->id = id;
        strcpy(this->name, name);
        fee = 0;
    }
    stu(int id, const char *name, float fee):stu(id, name) // constructor inside another cosntructor calling example
    {
        this->fee = fee;
    }
    
    void show()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Fee : " << fee << endl; 
    }
};

 int main(){

    stu S1(10, "Shakti");
    stu S2(20, "Tanuja", 200);
    S1.show();
    S2.show();
    return 0;
 }