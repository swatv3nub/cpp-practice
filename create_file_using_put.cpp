//Program to create a file using pin()
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
int main()
{
    system (" cls ") ;
    ofstream fout ;     //create output stream
    fout.open(" Aschars ", ios::app) ;
    if(!fout)       //if fout us zero
    {
        cout << "The file cannon be opened!!\n" ;
        return 1 ;
    }
    char ch ;   int line = 0 ;
    //write the characters
    for(int i = 33 ; i < 128 ; i++)
    {
        fout.put((char)i) ;
    }
    fout.close()
    //now display the contents of the file
    ifstream fin ;
    fin.open(" Aschars ", ios::in) ;
    fin.seekg(0) ;
    for(i = 33 ; i < 128 ; i++)
    {
        fin.get(ch) ;       //read a character
        cout << "   " << i << " = " ;   //display the character
        cout.put((char)(i)) ;
        if(i(i%8))
        {
            cout << endl ; line++ ;
        }
        if (line > 22) {system("PAUSE") ; line = 0 ; }
    }
    return 0 ;
}