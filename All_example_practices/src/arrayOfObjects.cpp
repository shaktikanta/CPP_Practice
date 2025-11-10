#include <iostream>
#include <cstdlib>


using namespace std;

class stu{
    int id;
    char name[20];
    int S[6];
    public:
    void put();
    void get();
};

void stu::get(){
    cout << "Enter details" ;
    cin >> id;
    cin >> name;
    cout << "Enter 6 subject marks";
    for(int i=0; i < 6; i++){
        cin >> S[i];
    }
}
void stu::put(){
    int result = 0;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    for(int i=0; i<6; i++){
        cout << "Subject " << i+1 << " Mark " << S[i] << endl;
        result += S[i];
    }
    cout << "TOTAL: " << result << endl;
}

int main()
{
    int no; 
    cout << "Enter no of students";
    cin >> no;
    
    //Dynamic allocation though single pointer
    // stu *ptr = new stu[no];
    // for(int i = 0; i<no; i++){
    //     cout << "Enter " << i+1 << " no student details: ";
    //     ptr[i].get();
    // }
    //  system("clear");
    // for(int i = 0; i<no; i++){
    //     ptr[i].put();
    // }

    //Dynamic allocation through double pointer
    stu **ptr = new stu*[no];
    for(int i = 0; i<no; i++){
        cout << "Enter " << i+1 << " no student details: ";
        ptr[i] = new stu;
        ptr[i]->get();
    }
    system("clear");
    for(int i = 0; i<no; i++){
        ptr[i]->put();
    }
    return 0;
}