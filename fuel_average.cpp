/*The program that calculate and display the kilometers per gallon obtained for each tank of gasoline.
After processing all input information, the program should calculate and print the average kilometers per gallon
obtained for all tanks.
*/
#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int tanks=0;
float tot_km; float avg_k_p_g;
cout<<"Enter how many tanks filled : ";
cin>>tanks;
float *kms=new float[tanks];
float *gallons_used=new float[tanks];
float *k_p_g=new float[tanks];
for(int i=0;i<tanks;i++)
{
cout<<"Enter how much kilometers covered for tank "<<i+1<<" : ";
cin>>kms[i];
cout<<"Enter how much gallon used from tank "<<i+1<<" : ";
cin>>gallons_used[i];
k_p_g[i]=kms[i]/gallons_used[i];
cout<<"KMs per Gallon obtained for tank No. "<<i+1<<" : "<<k_p_g[i]<<endl;
tot_km+=k_p_g[i];
cout<<endl;
}
avg_k_p_g=tot_km/tanks;
cout<<"Average kilometers per gallon obtained for all tanks is : "<<avg_k_p_g;
getch();
}