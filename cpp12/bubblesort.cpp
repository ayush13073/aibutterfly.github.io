#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int a[10] = {7,45,9,74,24,54,11,99,37,63}; // array initialisation
int i, j, temp;
cout << "Sorting of array using bubble sort" << endl;
cout << endl;
cout << "Array in unsorted form is:" << endl;
cout << a[0];
for(i = 1; i <= 9; i++) // for printing numbers in unsorted form
{
cout<< "," << a[i];
}
for(i = 0; i <= 10; i++) //number of passes
{
for(j = i + 1; j <= 10; j++)
{
if (a[i] > a[j]) //for swapping numbers
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
cout << endl;
cout << endl << "Arrray in ascending order is:" << endl;
cout << a[0];
for (i = 1; i <= 9; i++)
{
cout << "," << a[i];

}
cout << endl;
cout << endl << "Array in decending order is:" << endl;
cout << a[9];
for(j = 8; j >= 0; j--)
{
cout << "," << a[j];
}
getch();
}
/* Output:-
Sorting of array using bubble sort

Array in unsorted form is:
7,45,9,74,24,54,11,99,37,63

Arrray in ascending order is:
7,9,11,24,37,45,54,63,74,99

Array in decending order is:
99,74,63,54,45,37,24,11,9,7
*/
