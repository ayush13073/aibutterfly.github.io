#include <iostream.h>
#include <conio.h>

void main() 
{
    int n;
    clrscr();
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Factorial of a negative number doesn't exist.";
    else 
    {
        for(int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    getch();
}
/*
Output :
Enter a positive integer: 4
Factorial of 4 = 24                                                             
*/