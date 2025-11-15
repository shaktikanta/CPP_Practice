#include <iostream>

using namespace std;

class Sample{
    int a, b, c;
    public:
    Sample(int x = 10, int y = 20, int z =30){ //constructor with default args
        a = x;
        b = y;
        c = z;
    }
    ~Sample(){  //Destructor
        cout << "Object Deleted from memory" << endl;
    }

    void show()
    {
        cout << "A : " << a << " B : " << b << " C : " << c << endl;
    }
};

int main()
{
    Sample S;
    S.show();
    Sample S2(1, 2, 3);
    S2.show();
    Sample S3(1, 2);
    S3.show();
    Sample S4(1);
    S4.show();
    return 0;
}