#include<iostream>
#include<fstream>

using namespace std;

class shopping
{
    private:
        int pcode;
        float price;
        float dis;
        string pname;

    public:
        void menu();
        void administrator();
        void buyer();
        void rem();
        void list();
        void receipt();

};

void shopping :: menu()
{
    int choice;
    string email;
    string password;

    cout <<""
}