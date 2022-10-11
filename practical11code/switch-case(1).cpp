#include<iostream.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();
    cout << "Enter a number between 1 to 7" << endl;
    cin >> n;
    switch (n)
    {
        case 1:
            cout << "1st day is Monday" << endl;
            break;
        case 2:
            cout << "2nd day is Tuesday" << endl;
            break;
        case 3:
            cout << "3rd day is Wednesday" << endl;
            break;
        case 4:
            cout << "4th day is Thursday" << endl;
            break;
        case 5:
            cout << "5th day is Friday" << endl;
            break;
        case 6:
            cout << "6th day is Saturday" << endl;
            break;
        case 7:
            cout << "7th day is Sunday" << endl;
            break;
        
        default:
            cout << "The day does not exist" << endl;
            break;
    }
}
/*
Output :
Enter a number between 1 to 7
4                                                                               
4th day is Thursday                                                             
*/