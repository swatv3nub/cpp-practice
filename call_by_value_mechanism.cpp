/*Program to illustrate the use of objects as arguments to member,
and non-member functions using 'Call By Value' mechanism.
*/
#include<iostream.h>
class Time {    int hrs, mins, secs ;
            public:
                int tot_secs ;
                void gettime(int h, int m, int s)
                {
                    hrs = h ;
                    mins = m ;
                    secs = s ;
                }
                void puttime(void)
                {
                    cout << "Time is: " <<hrs<<" : "<<secs<<"\n";
                }
                void convert(Time t, char ch) ; //prototype
                void sum(Time t1, Time t2) ;
                int gethrs() { return hrs ; }
                int getmins() { return mins ; }
                int getsecs() { return secs ; }
            } ;
    void Time :: convert(Time t, char ch)
    { switch(ch)
        {   case 'h':if (strcmp (t.suf,"Hrs") != 0)
                    {
                        t.hrs = (strcmp(t.suf," am ") == 0) ? t.hrs : t.hrs + 12 ;
                        strcpy(t.suf,"Hrs") ;
                    }
                    cout << "Time in hours: " << t.hrs << " : " << t.mins << " : " << t.secs << " hrs\n" ;
                    break ;
            case 'p':if (strcmp(t.suf,"Hrs") == 0)
                    {
                        (t.hrs > 12) ? strcpy(t.suf,"pm") : strcpy(t.suf,"am") ;
                        t.hrs = ((t.hrs > 12) ? (t.hrs-12) : t.hrs) ;
                    }
                    cout << "Time in am/pm is: " << t.hrs << " : " << t.mins << " : " << t.secs << " hrs\n" ;
                    break ;
            default :   cout << "Wrong choice\n" ;
        } ;
    }
    void Time::sum(Time &t1, Time &t2)
    {
        int h, m, s, sq, mq ;
        sq = (t1.secs + t2.secs)/60 ;
        s = (t1.secs + t2.secs)%60 ;
        mq = (sq + t1.mins + t2.mins)/60 ;
        m = (sq + t1.mins + t2.mins)%60 ;
        h = mq + t1.mins + t2.mins ;
        if (h == 24) h = 0 ;
            cout << "Total time is: " << h << ":" << m << ":" << s << "\n" ;
    }
    void prnvalues(Time t1)
    {
        cout << "Total secs: " << t1.tot_sec ;  //valid .tot_secs can be accessed as it's public member
        cout << "\n" ;
    }
int main()
{
    Time tm1, tm2 ; //two objects of time created
    int tt ;
    tm1.gettime(5, 13, 27)  //get tm1
    tm2.gettime(7, 48, 38)  //get tm2
    cout << "Enter h to convert in hours format, p for am/pm format: " ;
    char ch ;
    cin >> ch ;
    tm1.convert(tm2, ch) ;  //object passed to member function
    tm2.sum(tm1, tm2) ;
    prmvalues(tm2) ;        //object passed to non-member function
    return 0 ;
}