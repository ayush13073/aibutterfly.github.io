#include <iostream.h>
#include <conio.h>

void main ()
{
    int NO;
    clrscr();
    cout << "Enter number : ";
    cin >> NO;
    if ((NO % 2) == 0)
    {
        cout << "\nGiven number is Even" << endl;
    }
    else 
    {
	cout << "Given number is Odd";
    }
    getch();
}
/*
Output :
Enter number : 4
                                                                                
Given number is Even                                                            
*/