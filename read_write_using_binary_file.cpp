//Program to write and read a structure using
//write() and read() function using a binary file
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
struct customer {   char name[51] ;
                    float balance ;     } ;
int main()
{
    system (" cls ") ;
    customer savac ;
    strcpy(savac.name, "MaskedVirus ") ;    // copy value to structure
    savac.balance = 69.69 ; //variable savac
    ofstream fout ;
    fout.open(" Saving ", ios :: out|ios :: binary) ;   //open output file
    if(!fout)
    {
        cout << "File Can\'t be Opened \n" ;
        return 1 ;
    }
    fout.write((char *) & savac, sizeof(customer));    //write to file
    fout.close() ;      //close connection
    ifstream fin ;
    fin.open(" Saving ", ios :: in | ios :: binary) ;   //open input file
    fin.read((char *) & savac, sizeof(customer)) ;   //read steucture
    cout << savac.name ;    //display structure
    cout << " has the balance amount of $ " << savac.balance << "\n" ;
    fin.close() ;   //close the file
    return 0 ;
}