// implementation_of_class
#include<iostream.h>
#include<conio.h>
#include<string.h>

class ratio
{
    public:
        ratio()   //default constructor
        {
            cout<<"Object is born"<<endl;
        }
    void ratiox()   //member function declaration
    {
        cout<<"Object is alive"<<endl;
    }
    ~ratio()  //destructor initialization
    {
        cout<<"Object dies"<<endl;
    }
};
void main()
{
    clrscr();
    ratio r1;   //constructor gets invoked
    r1.ratiox(); // member function gets invoked
    getch();
}

/*Output:
Object is born
Object is alive
Object dies

*/