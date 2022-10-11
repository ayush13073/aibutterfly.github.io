#include<iostream.h>
#include<conio.h>

void main()
{
    int num, total = 0;
    clrscr(); 
    do
    {
        cout << "\nEnter a number : ";
        cin >> num;
        if (num == 0)
        {
            cout << "End of data entry" << endl;
            goto dataend;   //transfer of dataend position
        }
        if (num < 0)
        {
            cout << "Skipping this number\n";
            continue;       //skip next
        }
        total += num;       //same as total = total + num
    } while (1);
    dataend:cout << "Total of all positive number is : " << total << endl;
    getch();
}
/*
Output :

Enter a number : 2                                                              
                                                                                
Enter a number : 3                                                              
                                                                                
Enter a number : 4                                                              
                                                                                
Enter a number : -5                                                             
Skipping this number                                                            
                                                                                
Enter a number : 0                                                              
End of data entry                                                               
Total of all positive number is : 9                                             
*/