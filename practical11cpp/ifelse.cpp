#include<iostream.h>
#include<conio.h>

int main()
{
    int a, b, c;
    clrscr();
    cout << "Enter three numbers : " << endl;
    cin >> a >> b >> c;
    if(a > b)
    {
	if(a > c)
	{
	    cout << "Largest number is : " << a << endl;
	}
	else
	{
	   cout << "Largest number is : " << b << endl;
	}
	}
	else
	{
	    if(b > c)
	    {
		cout << "Largest number is : " << b << endl;
	    }
	    else
	    {
		cout << "Largest number is : " << c << endl;
	    }
	}

    getch();
    return 0;
}
/*
Output :
Enter three numbers :
4                                                                               
5                                                                               
6                                                                               
Largest number is : 6                                                           
*/
