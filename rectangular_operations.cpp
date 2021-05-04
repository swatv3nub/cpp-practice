//Program for Operations in a Rectangle
#include<iostream.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    char ch, ch1;
    float l, b, pm, area, diag;
    do
    {
        system(" cls ");
        cout << "\n" << "Rectangle Menu";
        cout << "\n1. Area";
        cout << "\n2. Perimeter";
        cout << "\n3. Diagonal";
        cout << "\n4. Exit";
        cin >> ch;
        if (ch == '1'||ch == '2'||ch == '3')
        {
            cout << "\n" << "Enter Length and Breadth: ";
            cin >> l >> b;
        }
        switch(ch)
        {
            case'1':    area = l*b;
                        cout << "Area: " << area << endl;
                        break;
            case'2':    pm = 2*(l+b);
                        cout << "Perimeter: " << pm << endl;
                        break;
            case'3':    diag = sqrt(l*l + b*b)
                        cout << "Diagonal: " << diag << endl;
                        break;
            case'4':    break;
            default:    cout << "Wrong Choice!\n";
                        break;
            
        }
        cout << "\nPress a Key to Continue...\n";
        ch1 = getchar();
    } while(ch >= '1' && ch <= '3');
    return 0;
}