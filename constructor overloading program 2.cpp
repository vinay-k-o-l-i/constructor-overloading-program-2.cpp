/* Vinay koi
PRN 24070123133
ENTC B2 */


// constructor overloading program 2

#include<iostream>
using namespace std;

class Volume
{
    public:
  Volume(float l, float b, float h)
  {
    float vol;
    vol = l*b*h;
    cout<<"\nthe volume of the cuboid is : "<<vol<<endl;
  }  

  Volume(float s)
  {
    float vol1;
    vol1 = s*s*s;
    cout<<"\nThe volume of cube is : "<<vol1<<endl;
  }

}; // end of class

int main()
{
    Volume v1(2.5f, 1.5f, 5.2f);
    Volume v2(5);

}

/* output for this code

the volume of the cuboid is : 19.5

The volume of cube is : 125

  */
