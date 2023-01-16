#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

void main()
{
clrscr();
cout << "Enter a string which you want to reverse:" << endl;
char s[30], temp, i; // variable declaration and array declaration
gets(s);
int len = strlen(s);
int l = len - 1;
for (i = 0; i < (len/2); i++)
{
temp = s[i];
s[i] = s[l];
s[l] = temp;
l--;
}
cout << endl << "Reverse of given string:" << endl << s << endl;
getch();
}

/* Output:

Enter a string which you want to reverse:
computer science

Reverse of given string:
ecneics retupmoc

*/
