#include<iostream.h>
#include<conio.h>

void main()
{
    int a, b, i;
    clrscr();
    cout << "Enter two numbers : ";
    cin >> a >> b;
    int gcd = 0, min;
    if(a > b)
    {
	min = a;
    }
    else
    {
	min = b;
    }
   // for(i = 1; i <= min; i++)
   // {
	if(a % i == 0 && b % i == 0)
	{
	    gcd = i;
	}
	cout << "GCD = "<< gcd;
 //   }
    getch();
}
/*
Output :
*/