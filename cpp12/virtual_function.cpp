// virtual_function
#include <iostream.h> 
#include <conio.h> 
#include <string.h> 
 
class person 
{ 
    public: 
        int age; 
        char name2[20]; 
        virtual void show(char name[], int a) 
        { 
            strcpy (name2, name); 
            age = a; 
            cout << "Name : " << name2 << endl; 
            cout << "Age : " << age << endl; 
        } 
}; 
 
class derive:public person 
{ 
    public: 
        int age2; 
        char name1[50]; 
        void show (char name3[], int b) 
        { 
            strcpy (name1, name3); 
            age2 = b; 
            cout << "Name : " << name1 << endl; 
            cout << "Age : " << age2 << endl; 
        } 
}; 

void main () 
{ 
    clrscr(); 
    person * p; 
    derive d1; 
    person p1; 
    p = &p1; 
    cout << "BASE CLASS : " << endl; 
    p -> show ("ANONYMOUS" , 17); 
    p = &d1; 
    cout << "DERIVED CLASS : " << endl; 
    p -> show ("ANGEL", 17); 
    getch(); 
} 
/* 
Output: 
BASE CLASS : 
Name : ANONYMOUS                                                                 
Age : 17                                                                         
DERIVED CLASS :                                                                  
Name : ANGEL                                                                     
Age : 17                                                                         
*/