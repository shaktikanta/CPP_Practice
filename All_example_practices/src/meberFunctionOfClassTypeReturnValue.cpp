#include <iostream>

using namespace std;

class Test {
    int a, b;
    public:
    void get();
    void put();
    Test Sum(Test T);
};

void Test::get(){
    cout << "Enter a & b" ;
    cin >> a;
    cin >> b;
}

void Test::put(){
    cout << "A: " << a << endl << "B: " << b << endl;
}

Test Test::Sum(Test T){
    Test R; // result object
    R.a = a+T.a;
    R.b = b+T.b;
    cout << "SUM ::" << endl << "A: " << R.a << endl << "B: " << R.b << endl;
    return R;
}

int main(){
    Test t1, t2, t3;
    t1.get();
    t2.get();

    t1.put();
    t2.put();

    t3 = t1.Sum(t2);
    
    return 0;
}