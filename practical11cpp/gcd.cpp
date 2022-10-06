#include<iostream.h>
#include<conio.h>

void main()
{
    int n1, n2;
    clrscr();
    cout << "Enter the two natural numbers : ";
    cin >> n1 >> n2;
    while (n1 != n2)
    {
        if(n1 > n2)
        {
           n1 = n1 - n2; 
        }
        if(n2 > n1)
        {
            n2 = n2 - n1;
        }
    }
    cout << "The GCD is : " << n1;
    getch();
}
/*
Output :
Enter the two natural numbers :
4                                                                               
6                                                                               
The GCD is : 2                                                                  
*/
