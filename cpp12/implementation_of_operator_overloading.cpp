//implementation_of_operator_overloading
#include<iostream.h>
#include<conio.h>

class sample
{
float a;
public:
sample()
{
a = 0;
}
sample (float x)
{
a = x;
}
sample operator + (sample obj1)
{
sample c;
c.a = obj1.a + a;
return c;
}
sample operator / (sample obj2)
{
sample d;
d.a = obj2.a / a;
return d;
}
void display()
{
cout << endl << a;
}
};

void main()
{
clrscr();
int i, j;
cout << "Enter 1st number : ";
cin >> i;
cout << "Enter 2nd number : ";
cin >> j;
sample s1(i);
sample s2(j);
sample s3;
sample s4;
s3 = s1 + s2;
s4 = s1 / s2;
cout << "The addition is : ";
s3.display();
cout << "\n";
cout << "The division is : ";
s4.display();
getch();
}
/*
Output:
Enter 1st number : 4
Enter 2nd number : 3
The addition is :
7
The division is :
0.75
*/
