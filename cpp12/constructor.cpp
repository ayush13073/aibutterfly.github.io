#include<iostream.h>
#include<conio.h>

float pi = 3.142; //global declaration
class circle
{
float p, q, r;
double area1, circum;
public:
circle() //default constructor definition
{
cout << "Enter the radius: ";
cin >> r;
cout << "Enter x co-ordinate: ";
cin >> p;
cout << "Enter y co-ordinate: ";
cin >> q;
}
circle(float a, float b, float c) /*parameterised constructor
. definition*/
{
p = a;
q = b;
r = c;
}
circle(circle &obj) //copy constructor definition
{
p = obj.p;
q = obj.q;
r = obj.r;
}
void area() //member function definition inside the class

{
area1 = pi * r * r;
cout << "The area of the circle is : " << area1 << endl;
}
void circle::circumference();/*member function definition

inside the class*/

};
void circle::circumference()
{
circum = 2 * pi * r;
cout << "The circumference of circle is : " << circum << endl;
}
void main()
{
clrscr();
float a, b, c;
cout << "Output of default constructor " << endl;
circle obj1; //default constructor gets invoked
obj1.area(); //invokes function area()
obj1.circumference(); //invokes function circumference()
cout << endl << "Output of parameterised constructor " << endl;
cout << "Enter the radius " ;
cin >> c;
cout << "Enter the x co-ordinate: " ;
cin >> a;
cout << "Enter y co-ordinate : " ;
cin >> b;
circle obj2 = circle (a, b, c); /*invokes parameterised .

constructor*/
obj2.area(); // invokes function area()
obj2.circumference(); // invokes function circumference()
cout << endl << "Output of copy constructor " << endl;
circle obj3(obj2); //copies parameterised constructor

obj3.area(); //invokes function area()
obj3.circumference(); //invokes fucntion circumference()
cout << endl << "Output of copy constructor " << endl;
circle obj4(obj1); //copies default constructor
obj4.area(); //invokes function area()
obj4.circumference(); //invokes function circumference()
getch();
}
/*
Output :
Output of default constructor
Enter the radius: 5
Enter x co-ordinate: 6
Enter y co-ordinate: 7
The area of the circle is : 78.549999
The circumference of circle is : 31.42

Output of parameterised constructor
Enter the radius 3
Enter the x co-ordinate: 4
Enter y co-ordinate : 5
The area of the circle is : 28.278
The circumference of circle is : 18.852

Output of copy constructor
The area of the circle is : 28.278
The circumference of circle is : 18.852

Output of copy constructor
The area of the circle is : 78.549999
The circumference of circle is : 31.42
*/
