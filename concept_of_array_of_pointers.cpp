/*Program to print different values being pointung to by an array of pointers
[Illustration of concept of array of pointers]
*/
#include<iostream.h>
int main()
{
    int *ip[5] ;    //array of 5 int pointers
    int f = 65, s = 67, t = 69, fo = 70, fi = 75 ;  //5 int variables
    //Initialize the array pointers by making them point to 5 different ints
    ip[0] = &f ;    ip[1] = &s ;    ip[2] = &t ;
    ip[3] = &fo ;   ip[4] = &fi ;
    //print the value being pointed to by the pointers
    for(int i = 0 ; i < 5 ; i++)
        cout << "The pointer ip[" << i << "] points to " << *ip[i] << "\n" ;
    //print the addresses stored in the array
    cout << "The base address of array ip of pointers in " << ip << "\n" ;
    for(int i = 0 ; i < 5 ; i++)
        cout << "The address stored in ip[" << i <<"] is" << ip[i] << "\n" ;
    return 0 ;
}