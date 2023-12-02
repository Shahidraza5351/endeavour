/*Ques 1.) Program to check whether the integer is positive, negative or zero using if
else statement.*/

#include <iostream>
using namespace std;
int main()
{
    cout<<"Shahid Raza (2331026)"<<endl;
    int a = 0;
    cout << "Enter the integer thet you want to cheak" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "The integer " << a << " is negative" << endl;
    }
    else
    {
        cout << "The integer " << a << " is positive" << endl;
    }
    return 0;
}