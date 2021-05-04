// Program to read sales of 5 salesmen in 12 months
// and to print total sales made by each salesman
#include<iostream.h>
#include<stdlib.h>
int main()
{
    system ("cls");
    int sales[5][12];
    int i,j,total;
    for ( i = 0; i < 5; ++i)    //loop to read sales
    {
        total = 0;              // initialize for each salesman
        cout << "Enter sales for salesman" << i+1 << ": \n";
        for( j = 0; j < 12; j++)    //loop for monthly sales
        {
            cout << "\nMonth " << j+1 << ":";
            cin >> sales[i][j];     //read monthly sales
            total = total + sales[i][j];//calculate total
        } // end of for j
        cout << "\n";
        cout << "Total sales of salesman " << i + 1 << "= " << total << "\n";
    }   //end of for i
    return 0;
}
