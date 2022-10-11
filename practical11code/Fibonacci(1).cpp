#include<iostream.h>
#include<conio.h>

void main()
{
    int n;
    int f1, f2, f3;
    clrscr();
    cout << "Enter how many number series you need" << endl;
    cin >> n;
    f1 = 1;
    f2 = 2;
    cout << "F1 : " << endl;
    cout << "F2 : " << endl;
    int c = 2;      //acts as counter
    while (c < n)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        cout << "F3 : " << endl;
        c++;
    }
    getch();
}
/*
Output :
Enter how many number series you need
4                                                                               
F1 :
F2 :
F3 :
F3 :
*/