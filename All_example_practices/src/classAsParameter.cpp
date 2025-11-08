#include <iostream>
using namespace std;


class Sample{
    int num;
public:
    // initialize num to avoid printing garbage
    Sample(): num(0) {}

    void put() {
        cout << "Enter a num: ";
        cin >> num;
    }

    void get() const {
        cout << "Num is " << num << endl;
    }
    

    int big(Sample T){ 
        return num > T.num ? num : T.num;
    }
};


int main() {
    cout << "Hello, C++ in in VS Code!" << endl;
    Sample S1, S2;

    // Read values first, then print — avoid printing uninitialized memory
    S1.put();
    S2.put();

    S1.get();
    S2.get();

    cout << "Big is: " << S1.big(S2) << endl;
    return 0;
}