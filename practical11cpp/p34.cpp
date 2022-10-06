#include<iostream.h>
#include<conio.h>

class gcd
{
    int a, b;
    clrscr();
    public:
        void find();
};
void gcd::find (void)
{
    cout << "Enter the of a and b\n";
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
    cout << "The gcd is : " << a;
}
void main()
{
    gcd obj1;
    obj1.find();
    getch();
}
/*
Output :
*/