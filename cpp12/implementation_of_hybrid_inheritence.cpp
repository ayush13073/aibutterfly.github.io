//implementation_of_hybrid_inheritence
#include<iostream.h>
#include<conio.h>

class student
{
    protected:
        char name[20];
        int num;
    public:
	void getdata()
	{
	    cout << "Enter name : " << endl;
	    cin.getline(name, 20);
	    cout << "Enter roll no. :" << endl;
	    cin >> num;
	}
	void showdata()
	{
	    cout << "The name is : " << name << endl;
	    cout << "The roll no. is : " << num << endl;
	}
};
class test:public student
{
    protected:
	int mark1, mark2;
    public:
	void getmarks()
	{
	    cout << "Enter your marks in subject1 : " << endl;
	    cin >> mark1;
	    cout << "Enter your marks in subject2 : " << endl;
	    cin >> mark2;
	}
	void showmarks()
	{
	    cout << "Marks in subject1 : " << mark1 << endl;
	    cout << "Marks in subject2 : " << mark2 << endl;
	}
};
class sports
{
    protected:
	int score;
    public:
	void getscore()
	{
	    cout << "Enter your score : " << endl;
	    cin >> score;
	}
	void showscore()
	{
	    cout << "The score is : " << score << endl;
	}
};
class result:public test, public sports
{
    protected:
	int marks, avg;
	float per;
    public:
	void display()
	{
	    marks = score + mark1 + mark2;
	    avg = marks / 3;
	    per = (float)marks / 300 * 100;
	    cout << "The total marks are : " << marks << endl;
	    cout << "The average marks are : " << avg << endl;
	    cout << "The percentage is : " << per << endl;
        }
};
void main()
{
    clrscr();
    result r1;
    r1.getdata();
    r1.getscore();
    r1.getmarks();
    r1.showdata();
    r1.showscore();
    r1.showmarks();
    r1.display();
    getch();
}
/* Output:
Enter name :
Anonymous                                                                       
Enter roll no. :                                                                
23073                                                                           
Enter your score :                                                              
95                                                                              
Enter your marks in subject1 :                                                  
96                                                                              
Enter your marks in subject2 :                                                  
98                                                                              
The name is : Anonymous                                                         
The roll no. is : 23073                                                         
The score is : 95                                                               
Marks in subject1 : 96                                                          
Marks in subject2 : 98                                                          
The total marks are : 289                                                       
The average marks are : 96                                                      
The percentage is : 96.333336                                                   
*/