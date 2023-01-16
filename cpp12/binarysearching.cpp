Program:

#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int a[10] = {12,23,34,45,56,67,78,89,90,99}; //declaration of array or prototype
int item, mid, x, i; //variable declaration
int beg = 0, end = 9, n = 0; //variable initialisation
cout << "The array in sorted form is:" << endl;
for(i = 0; i <= 9; i++)
{
cout << a[i] << ",";
}
cout << "\nEnter the number which you want to find:" << endl;
cin >> item;
mid = (beg + end)/2;
while(beg <= end)
{
if(item == a[mid])
{
x = mid;
n = 1;
break;
}
else if(item > a[mid])
{
beg = mid + 1;
mid = (beg + end)/2;
}
else if(item < a[mid])
{
end = mid - 1;

mid = (beg + end)/2;
}
}
if(n == 1)
{
cout << "The location of item is a [" << x << "]" << endl;
}
else if(n == 0)
{
cout << "The number is not found." << endl;
}
getch();
}
/*
Output:
The array in sorted form is:
12,23,34,45,56,67,78,89,90,99,
Enter the number which you want to find:
45
The location of item is a [3]
*/
