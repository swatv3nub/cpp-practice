// Case Changer 

#include<iostream.h>
#include<stdio.h>
int main()
{
    char ch;
    do
    {
        cout << "Enter a character: ";
        ch = getchar();
        if(ch=='\n')
            ch=getchar();
        cout << endl;
        if(ch >= 65 && ch <=90)
            ch = ch + 32;
        else
        if(ch >= 97 && ch <= 122)
            ch = ch - 32;
        putchar(ch);
        cout << endl;
    }   while(ch!='0');
    return 0;
}