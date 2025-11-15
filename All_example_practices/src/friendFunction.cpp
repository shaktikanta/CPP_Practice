#include <iostream>

using namespace std;

class Sample; // Forward declaration of class Sample
class Test{
    int a;
    friend void big(Test, Sample);
    public:
    void geta(){
        cout << "Enter A :";
        cin >> a;
    }
};

class Sample{
    int b;
    friend void big(Test, Sample);
    public:
    void getb(){
        cout << "Enter B :";
        cin >> b;
    }
};

void big(Test T, Sample S){ // friend function defination
    if(T.a > S.b){
        cout << "Big is : T.a" << T.a << endl;
    } else if(T.a < S.b){
        cout << "Big is : S.b" << S.b << endl;
    } else {
        cout << "Both are equal" << endl;
    }
}

int main(){
    Sample S2;
    S2.getb();
    Test T2;
    T2.geta();
    big(T2, S2);
    return 0;
}