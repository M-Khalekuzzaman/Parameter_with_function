//Parametrized function inside the class
#include<iostream>
#include<conio.h>
using namespace std;
class student{
public :
    int id;
    double gpa;

    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }

    void display()
    {
        cout<< id << "  " << gpa <<endl;
    }

};
int main()
{

    student sohan,rimon;

    sohan.setValue(101,3.52);
    sohan.display();

    sohan.setValue(102,3.72);
    sohan.display();

    getch();
}
