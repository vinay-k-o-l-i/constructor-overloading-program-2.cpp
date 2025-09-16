/* Vinay koli
PRN 24070123133
ENTC B2 */

// constructor overloading
#include<iostream>
using namespace std;

class Construct
{
    public: 

    Construct(int n1, int n2)
    {
        cout<<"\nThe numbers are : "<<n1<<" and "<<n2<<endl;
    }

    Construct(string s1, string s2)
    {
        cout<<"\nThe strings are : "<<s1<<" and "<<s2<<endl;
    }

    Construct(float f1, float f2)
    {
        cout<<"\nThe float numbers are : "<<f1<<" and "<<f2<<endl;
    
    }

}; // end of class


int main()
{
    Construct ct1(2,4);
    Construct ct2("Vinay", "koli");
    Construct ct3(2.5f, 5.5f);
}

/* output for this code

The numbers are : 2 and 4

The strings are : Viny and kol

The float numbers are : 2.5 and 5.5

*/
