#include<iostream.h>
#include<conio.h>

void main()
{
    int a, b, c, big;
    clrscr();
    cout << "Enter three numbers : " << endl;
    cin >> a >> b >> c;
    big = (a > b) ? (a > c ? a : b) : (b > c ? b : c);
    cout << "Largst Number is : " << big << endl;
    getch();
}
/*
Output :
Enter three numbers :
4                                                                               
6                                                                               
7                                                                               
Largst Number is : 7                                                            
*/
