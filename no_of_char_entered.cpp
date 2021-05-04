// Program to find total number of entered characters

#include<iostream.h>
#include<stdio.h>
int main()
{
    int chcount = 0;
    const char ent = '\n';
    char ch;
    cout << "Enter Character\n";
    cin.get(ch);
    while (ch! = ent)
    {
        chcount++;
        cout.put(ch);
        cin.get(ch);
    }
    cout << "\nThe numner of characters = " << chcount << "\n";
    return 0;
}