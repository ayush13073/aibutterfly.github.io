#include<iostream.h>
#include<conio.h>

void main()
{
    int speed;
    clrscr();
    cout << "Enter 33, 45, 78" << endl;
    cin >> speed;
    switch (speed)
    {
        case 33:
            cout << "Speed 1\n";
            break;
        case 45:
	    cout << "Speed 2\n";
	    break;
	case 78:
	    cout << "Speed 3\n";
	    break;

	default:
	    cout << "Exit from switch \n";
	    break;
    }
    getch();
}
/*
Output :
Enter 33, 45, 78
33                                                                              
Speed 1                                                                         
*/