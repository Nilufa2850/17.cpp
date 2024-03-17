/*1.Define a class Time with instance variables hr,min,sec
Provide methods setTime() , showTime(). setTime() methopd has
formal arguments with the same name as instance variables. 
Also define setter and getters*/

#include<iostream>
using namespace std ;

class Time
{
    private :
        int hr,min,sec ;
    public :
        //Set Time
        void setTime(int hr, int min, int sec)
        {
            this->hr = hr ; 
            this->min = min ;
            this->sec = sec ;
        }
        //Setter
        void set_hr(int hr)
        {
            this->hr = hr ;
        }
        void set_min(int min)
        {
            this->min = min ;
        }
        void set_sec(int sec)
        {
            this->sec = sec ;
        }
        //Getter
        int get_hr()
        {
            return hr ;
        }
        int get_min()
        {
            return min ;
        }
        int get_sec()
        {
            return sec ;
        }
        //Show Time
        void showTime ()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl ;
        }
} ;


int main ()
{
    Time t ;
    t.setTime(3,4,20) ;
    t.showTime() ;

    return 0 ;
}
