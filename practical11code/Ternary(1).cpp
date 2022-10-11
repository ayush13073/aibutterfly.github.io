#include<iostream.h>
#include<conio.h>

void main()
{
    int a, b, c, t, max;
    clrscr();
    cout << "Enter three numbers : " << endl;
    cin >> a >> b >> c;
    t = (a > b) ? a : b;
    max = (t > c) ? t : c;
    cout << "\nMax value is : " << max << endl;
    getch();
}
/*
Output :
Enter three numbers :
4                                                                               
5                                                                               
6                                                                               
                                                                                
Max value is : 6                                                                
*/