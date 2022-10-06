#include<iostream.h>
#include<conio.h>

class fibonacci
{
    private:
        long int f0, f1, fib;
    public:
        fibonacci(void);
        void process(void);
        void display(void);
};
fibonacci::fibonacci(void)
{
    f0 = 0;
    f1 = 1;
}
void fibonacci::process(void)
{
    fib = f0 + f1;
    f0 = f1;
    f1 = fib;
}
void fibonacci::display(void)
{
    cout << fib << "\t";
}

void main()
{
    int i, n;
    clrscr();
    fibonacci F;
    cout << "\nEnter number of elements : " << endl;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        F.process();
        F.display();
    }
    getch();
}
/*
Output :

Enter number of elements :                                                      
6
1       2       3       5       8       13                                      
*/
