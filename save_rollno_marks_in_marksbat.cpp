// Get Roll Numners and Marks od the students of a class
// And Store these details into a file called 'marks.dat'
#include<iostream.h>
#include<fstream.h>
int main()
{
    ofstream filout ;        // stream decided and declared
    filout.open( "marks.dat", ios::out) ;    // file linked
    char ans = 'y' ;         // process as required
    int rollno, float marks ;
    while( ans =='y' || ans =='Y')
    {
        cout << "\nEnter RollNo: " ;
        cin >> rollno ;
        cout << "\nEnter Marks: " ;
        cin >> marks ;
        filout << rollno << '\n' << marks << '\n' ;
        cout << "\nWant to Enter More Records? (y/n)" ;
        cin >> ans ;
    }
    filout.close() ;        // Delink the File
    return 0 ;
}