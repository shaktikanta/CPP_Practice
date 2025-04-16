#include "class.h"
using namespace std;
void employee::get(){
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
}

void employee::set(int a, char str[20]){
    id = a; strcpy(name, str);
}

void employee::set_new(employee e){
    id = e.id;
    strcpy(name, e.name);
}

void student::show(){
    cout << name << endl;
}

void student::add(employee e){
        cout << "SUM: "<< e.num+num << endl;
}