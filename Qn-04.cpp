/* 4. In qn 1 , define a method to Display Time object array values.
Array is received through argument.

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
        void setTime(int hr, int min, int sec)
        {
            this->hr = hr ; 
            this->min = min ;
            this->sec = sec ;
        }
        void Display (Time p[])
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl ;
        }
        friend istream& operator >> (istream & din , Time& T) ;
        friend ostream& operator << (ostream & din , Time T) ;
} ;
ostream& operator << (ostream & din , Time T) 
{
    cout<<T.hr<<":"<<T.min<<":"<<T.sec<<endl  ;
    return cout ;
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

    Time *p = NULL ;
    p = new Time [n] ;

    cout<<"Enter "<<n<<" Times : " <<endl ;
    for (i=0 ; i<n ; i++)
        cin>>p[i] ;

    cout<<"\nTime are\n" ;
    for (i=0 ; i<n ; i++)
        p[i].Display(p)  ;

    delete [] p ;

    return 0 ;
}
