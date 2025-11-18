#include <iostream>

using namespace std;

class Author{   //container class
    char aname[20];
    friend class Book;
};

class Book{ //contained class
    char bname[20];
    float price;
    public:
    Author a;
    void get(){
        cout << "Enter Author name" ;
        cin >> a.aname;
        cout << "Enter Book name";
        cin >> bname;
        cout << "Enter Price";
        cin >> price;
    }
    void put(){
        cout << "Author and BOOK deatils with price " << endl;
        cout << a.aname << " " << bname << " " << price << endl;
    }
};

int main(){
    Book b;
    b.get();
    b.put();
    return 0;
}