#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
char a[30], b[30]; // array declaration
int i, j;
cout << "Enter the string which you want to reverse:" << endl;
cin.getline(a, 30); // read string
i = j = 0; // variable initialization
while (a[i] != '\0')
{
i++;
}
while(--i >= 0)
{
b[j++] = a[i]; //copy the last character at position and increment j
b[j] = '\0';
}
cout << "Reverse of string is:" << endl << b << endl;
getch();
}
/* Output:
Enter the string which you want to reverse:
mathematics
Reverse of string is:
scitamehtam
*/
