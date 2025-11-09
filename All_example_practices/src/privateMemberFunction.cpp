#include <iostream>

using namespace std;

class emp{
    int id;
    char name[20];
    long float sal;
    void get(){
        cout << "Enter id , Name & Salary:";
        cin >> id;
        cin >> name;
        cin >> sal;
    }
    public:
    void put(){
        get();
        cout << "Emp id, Name & salary is:";
        cout << id << endl << name << endl << sal << endl;
    }
};

int main(){
    emp E;
    E.put();
    return 0;
}