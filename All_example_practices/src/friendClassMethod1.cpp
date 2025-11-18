#include <iostream>

using namespace std;

class Test{     //container class
    int a, b;
    public:
    friend class Sample;
    void get(){
        cout << "Enter A & B";
        cin >> a>> b;
    }
};

class Sample{       //Contained class
    public:
    void put(Test T){
        cout << "A & B is :" << endl ;
        cout << T.a << " " << T.b << endl;
    }
};

int main(){
    Test T1;
    Sample S;
    T1.get();
    S.put(T1);
    return 0;
}