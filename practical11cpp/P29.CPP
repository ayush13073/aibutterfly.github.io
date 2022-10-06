#include<iostream.h>
#include<conio.h>

void main()
{
    int n, num, digit, rev = 0;
    clrscr();
    cout << "\nEnter a number : ";
    cin >> num;
    n = num;
    do
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;          //same as num = num / 10;
    } 
    while (num != 0);
    cout << "\nReverse of number = " << rev << endl;
    if (n == rev)
    {
        cout << "\nThe number is a pelendrom\n";
    }
    else
    {
	cout << "\nThe number is not a palindrom" << endl;
    }
    getch();
}
/*
Output :

Enter a number : 4884                                                           
                                                                                
Reverse of number = 4884                                                        
                                                                                
The number is a pelendrom                                                       
                                                                                
*/