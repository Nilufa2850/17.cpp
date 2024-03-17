/* 3. In qn 1 , define a method to sort Time object array.

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
        void showTime ()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl ;
        }
        friend istream& operator >> (istream & din , Time& T) ;
        friend ostream& operator << (ostream & din , Time T) ;
        friend void sortingTime (Time *q , int size ) ;
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

void sortingTime (Time *q , int size )
{
    int i , j ;
    Time temp ;
    for (i=0 ; i<size-1 ; i++)
        for (j=i+1 ; j<size ; j++)
            if (q[i].hr > q[j].hr )
            {
                temp = q[i] ;
                q[i] = q[j] ;
                q[j] = temp ;
            }
            else if (q[i].hr == q[j].hr )
            {
                if (q[i].min > q[j].min)
                {
                    temp = q[i] ;
                    q[i] = q[j] ;
                    q[j] = temp ;
                }
                else if (q[i].min == q[j].min)
                {
                    if (q[i].sec > q[j].sec)
                    {
                        temp = q[i] ;
                        q[i] = q[j] ;
                        q[j] = temp ;
                    }
                }
            }
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
    for(i=0 ; i<n ; i++)
        cout<<p[i] ;

    sortingTime (p,n) ;
    cout<<"\nAfter Sorting\n" ;
    for(i=0 ; i<n ; i++)
        cout<<p[i] ;


    delete [] p ;

    return 0 ;
}
