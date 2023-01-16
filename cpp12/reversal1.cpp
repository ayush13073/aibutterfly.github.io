#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void reverse(char a[]) // function defination
{
char b[50]; // string declaration
int i = 0, j = 0; // variable initialisation
while(a[i] != '\0')
i++;
while(--i >= 0)
{
b[j++] = a[i];
b[j] = '\0';
}
cout << "The reverse of string is :" << endl << b << endl;
}

void main()
{
clrscr();
char a[50];
cout << "Enter a string to be reversed:" << endl;
gets(a);
reverse(a); // function call
getch();
}
/* Output:
Enter a string to be reversed:
computers
The reverse of string is :
sretupmoc
*/
