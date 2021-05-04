// Program to Get a random number
#include<iostream.h>
#include<stdlib.h>
int main()
{
    randomize();
    int Num, Rndnum;
    cin >> Num;
    Rndnum = random(Num) + 7;
    for (int N = 1; N <= Rndnum; N++)
        cout << N << "";
    return 0;
}