// Program to Read marks of 50 students and store in an array
#include<iostream.h>
#include<stdlib.h>
int main()
{
    system ("cls");
    float marks[50];
    for ( int i = 0; i < 50; ++i)
    {
        cout << "Enter the marks of the Student" << i + 1 << ":";
        cin >> marks[i];
    }
    cout << "\n";
    for (i = 0; i < 50; ++i)
        cout << "Marks[" << i << "] =" << marks[i] << "\n";
    return 0;
}