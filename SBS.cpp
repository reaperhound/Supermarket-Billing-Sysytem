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
        void edit();
        void add();
        void remove();
        void list();
        void receipt();
};

void shopping :: menu()
{
    m: // goto identifier
    int choice;
    string email;
    string password;

    cout<<"\t\t\t+++++++++++++++++++++++++++++++++++++++++++\n"; //use 5 tabs after the usual 3 tabs to centralise the text
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t Supermarket Main Menu\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t+++++++++++++++++++++++++++++++++++++++++++\n"; 
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
    cout<<"\t\t\t\t\t\t\t\t |1) Administrator |\n";
    cout<<"\t\t\t\t\t\t\t\t |                 |\n";
    cout<<"\t\t\t\t\t\t\t\t |2) Buyer         |\n";
    cout<<"\t\t\t\t\t\t\t\t |                 |\n";
    cout<<"\t\t\t\t\t\t\t\t |3) Exit          |\n";
    cout<<"\nt\t\t\t\t\t\t\t Please Select : ";

    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\t\t\t Please Login\n";
            cout<<"\t\t\t Enter email : \n";
            cin>>email;
            cout<<"\t\t\t Enter Password : \n";
            cin>>password;

            if(email=="reaperhound69004@gmail.com" && password== "asdasd22")
            {
                administrator();
            }
            else
            {
                cout<<"Invalid email/password";
            }
            break;

        case 2:
            buyer();
            break ;

        case 3:
            exit(0);
            break;
        
        default:
            cout<<" Please select from the given options";

    }
    goto m;
}

void shopping :: administrator()
{
    
}
