//Program to illustrate working of default arguments
// Example: Calculate interest amount
//making use of default arguments
#include<iostream.h>
#include<stdlib.h>
void amount(float princ, int time = 2, float rate = 0.08) ; //prototype
void amount(float princ, int time, float rate)
{
    cout << "\nPrincipal Amount: " << princ;
    cout << "\tTime: " << time << "years";
    cout << "\nRate: " << rate;
    cout << "\tInterest Amount: " << (princ * time * rate) << "\n";
}
int main()
{
    system (" cls ") ;
    cout << "Case 1";
        amount(2000);   // time and rate from Prototype
    cout << "Case 2";
        amount(2500,3); // rate from prototype
    cout << "Case 3";
        amount(2300,3,0.11); //nothing from Prototype
    cout << "Case 4";
        amount(2500,0.12);  //here time is 0
    return 0;
}
