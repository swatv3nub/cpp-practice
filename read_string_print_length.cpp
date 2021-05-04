// Program to print length of a string
#include<stdio.h>
#include<iostream.h>
#include<string.h>
int main()
{
    char astr[101];
    int length;
    cout << "\nEnter a String (Max 100 characters)\n";
    gets (astr);
    length = strlength (astr);
    puts (astr);
    cout << "\nThe Length of the string is: " << length << "\n";
    return 0;
}