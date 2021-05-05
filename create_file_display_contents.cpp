// Program to Create a single file
// and display its contents
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
int main()
{
    system ("cls") ;
    char name[30],ch ;
    float marks = 0.0 ;
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << " Student" << (i+1) << ":\tName: " ;
        cin.get(name,30) ;
        cout << "\t\tMarks: " ;
        cin >> marks ;      cin.get(ch) ;   //to empty input buffer
        fout << name << '\n' << marks << '\n' ;
    }
    fout.close()        //disconnect student file from fout
    ifstream fin(" student", ios::in) ; //connect student file to input stream fin
    fin.seekg(0) ;      // to bring pointer at the file beginning
    cout << " \n " ;
    for(i = 0 ; i < 5 ; i++) ;  //Display Records
    {
        fin.get(name,30) ;      //read name from file student
        fin.get(ch) ;
        fin >> marks ;          //read marks from file student
        fin.get(ch) ;
        cout << "Student Name: " << name ;
        cout << "\tMarks: " << marks << "\n" ;
    }
    fin.close()         //disconnect student file from fin stream
    return 0 ;
}