#include<iostream.h>
#include<conio.h>

void main()
{
    float a, b, result;
    int ch;
    clrscr();
    cout << "Enter two number : ";
    cin >> a >> b;
    cout << "\n1-additon \n2-subtraction \n3-multiplication \n4-division";
    cout << "\nEnter your choice : ";
    cin >> ch;
    switch(ch)
    {
        case 1:
            result = a + b;
            cout << "Sum is : " << result;
            break;
        case 2:
            result = a - b;
            cout << "Difference is : " << result;
            break;
        case 3:
            result = a * b;
            cout << "Product is : " << result;
            break;
        case 4:
            result = a / b;
            cout << "Division is : " << result;
            break;
        default:
            cout << "Invalid choice";
            break;
    }
    getch();
}
/*
Output:
Enter two number :
4                                                                               
5                                                                               
                                                                                
1-additon                                                                       
2-subtraction                                                                   
3-multiplication                                                                
4-division                                                                      
Enter your choice : 3                                                           
Product is : 20
*/