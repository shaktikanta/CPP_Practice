#include "class.h"
using namespace std;
int main()
{
    int id;
    char name[20];
    cout << "Enter ID and name"<< endl;
    cin >> id >> name;

    employee e, e2;
    e.set(id, name);
    e.get();

    e2.set(10, "Shakti");
    // e2.get();

    e.set_new(e2);
    e.get();

    student s;
    s.show();
    s.add(e);

    return 0;
}
