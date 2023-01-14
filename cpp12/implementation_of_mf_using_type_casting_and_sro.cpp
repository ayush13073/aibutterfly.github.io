// implementation_of_mf_using_type_casting_and_sro
#include <iostream.h>
#include <conio.h>

class ratio
{
    int num, den;               //by default access specifier is private
    double r1, r2;              //by default access specifier is private
    public:
        void assign(int num1, int den1) //member function defination inside the class
        {
            num = num1;
            den = den1;
        }
        void convert()          //member function defination inside the class
        {
            r1 = (double)num / den;     //typecasting to convert integer type value to double
        }
        void invert();                  //member function decalaration
        void print();                   //member function declaration
};
void ratio::invert()                    //member function declaration outside the class
{
    r2 = (double)den / num;
}
void ratio::print()
{
    cout << "Numerator is : " << num << endl;
    cout << "Denominator is : " << den << endl;
    cout << "Ratio is : " << r1 << endl;
    cout << "Inverse is : " << r2 << endl;
}

void main()
{
    clrscr();
    ratio R;
    int x, y;
    cout << "Enter two values for x and y : " << endl;
    cin >> x >> y;          
    R.assign(x, y);      //invokes assign function
    R.convert();         //invokes convert function
    R.invert();          //invokes invert function
    R.print();           //invokes print function
    getch();
}
/*
output
Enter two values for x and y :
50
100
Numerator is : 50
Denominator is : 100
Ratio is : 0.5
Inverse is : 2
*/