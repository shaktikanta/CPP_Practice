
#include <iostream>
#include <string.h>

using namespace std;

class employee{
    private:
        int id;
        char name[20];
    public:
        int num = 1;
        void get();
        void set(int x, char name[20]);
        void set_new(employee e);
};

class student{
    private:
        char *name = "HELLO";
        int num = 99;
    public:
        void show();
        void add(employee e);
};