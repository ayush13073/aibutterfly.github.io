#include<iostream.h>
#include<conio.h>

void main()
{
    int num, total = 0;
    clrscr();
    do
    {
        cout << "Enter a number from 0 to 5" << endl;
        cin >> num;
        if (num ==  0)
        {
            cout << "End of data entry\n";
            break;      //terminates loop
        }
        if (num < 0)
        {
            cout << "Skipping this number\n";
            continue;   //skips next statement and transfer to start of loop
        }
	total += num;   //same as total = total + num;
    }
    while(1);
    cout << "\nTotal of all positive number is " << total << endl;
    getch();
}
/*
Output :
*/
