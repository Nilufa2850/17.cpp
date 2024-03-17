User
/* 2. Qn-1, define a method to dynamically create an array of
Time objects with specified size (received through arguments)
and return array.

1.Define a class Time with instance variables hr,min,sec
Provide methods setTime() , showTime(). setTime() method has
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
        //Show Time
        void showTime ()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl ;
        }
        static Time* CreateArray(int size)
        {
            Time *p = new Time [size] ;
            return p ;
        }
        friend istream& operator >> (istream & din , Time& T) ;
        friend ostream& operator << (ostream & din , Time T) ;
} ;
ostream& operator << (ostream & din , Time T) 
{
    cout<<T.hr<<":"<<T.min<<":"<<T.sec<<endl  ;
}
istream& operator >> (istream & din , Time& T)
{
    din>>T.hr>>T.min>>T.sec ;
    return din ;
}


int main ()
{
    int n , i ;
    cout<<"Enter size of array : ";
    cin>>n ;

    Time *q = NULL ;
    q = Time :: CreateArray(n) ;

    cout<<"Enter "<<n<<" Times : " <<endl ;
    for (i=0 ; i<n ; i++)
        cin>>q[i] ;
    
    for(i=0 ; i<n ; i++)
        cout<<q[i]<<"\n" ;

    delete [] q ;

    return 0 ;
}
