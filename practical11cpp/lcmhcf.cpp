#include<iostream.h>
#include<conio.h>

void main()
{
    int a, b, x, y, temp, hcf, lcm;
    clrscr();
    cout << "Enter two numbers : \n";
    cin >> x >> y;
    a = x;
    b = y;
    while(b != 0)
    {
            temp = b;
            b = a % b;
            a = temp;
    }
    hcf = a;
    lcm = (x * y) / hcf;
    cout << "HCF : " << hcf << endl;
    cout << "LCM : " << lcm << endl;
    getch();
}
/*
Output :
Enter two numbers :
24                                                                              
16                                                                              
HCF : 8                                                                         
LCM : 48                                                                        
*/
