#include <iostream>

using namespace std;

class Sample{
    int *a;
    public:
    Sample(int x){
        a = new int(x);
    }
    void print(){
        cout << "A " << a << endl;
    }
};

int main()
{

    Sample S(10);
    S.print();
    // Sample S2(20);
    // S.print();
    // S2.print();
    Sample S3 = S;
    S3.print();
    return 0;
}
