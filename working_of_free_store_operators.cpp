//Program to create two array to store roll numbers and marks of some student,
//whose number would be known at run time
//Example to Illustrate the working of free store operators
#include<iostream.h>
int *rollno ;   //declare an int pointer for rollno array
float *marks ;  //declare a float pointer for marks array
int main()
{
    int size ;
    cout << "How many elements are there in the array?\n" ;
    cin >> size ;
    rollno = new int[size] ;  //dinamically allocate rollno array
    marks = new float[size] ; //dinamically allocate marks array
    //memory check
    if ( (!rollno) || (!marks) ) //if rollno or marks is null pointer
    {
        cout << "Out of memory! Aborting the Process!" ;
        return 1 ;
    }
    //read the values in the array elements
    for (int i = 0 ; i < size ; i++)
    {
        cout << "Enter rollno and marks for student" << (i+1) << "\n" ;
        cin >> rollno[i] >> marks[i] ;
    }
    //display array contents
    cout << "\tRoll No \tMarks\n" ;
    for (int i = 0 ; i < size ; i++)
        cout << "\t" << rollno[i] << "\t\t" << marks[i] << "\n" ;
    delete[]rollno ;   //delocating rollno array
    delete[]marks ;    //delocating marks array
    return 0 ;
}