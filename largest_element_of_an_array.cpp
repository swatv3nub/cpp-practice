// Program to Print the largest element of an array (using a function)

#include<iostream.h>
#include<stdlib.h>
int main()
{
    system ("cls");
    float large ( float arr[], int n );    // function prototype
    char ch;
    int i = 0;
    float amount[50], biggest;
    for(i = 0; i < 50; ++i)
    {
        cout << "Enter Element Number: " << (i+1) << "\n";
        cin >> amount[i];
        cout << "More Elements ? (y/n)";
        cin >> ch;
        if (ch != 'y')
            break;
    }
    if (i<50)
        i++;                        // incase of incomplete loop
    biggest = large(amlount, i);    // call function large() by passing the array and its number of elements
    cout << "The Largesr element of the array is: " << biggest << "\n";
    return
}
float large(float arr[], int n)
{
    float max = arg[0];
    for( int j = 1; j < n; ++j)
    {
        if(arr[j] > max)
            max = arr[j];
    }
    return max
}