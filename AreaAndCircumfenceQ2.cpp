//Q2->Given the radius of the circle, predict whether numerically the area of this circle is larger than the
//circumference or not.
#include<iostream>
using namespace std;
int main(){
    int r;
    int ar;
    int cr;
    cout<<"enter the radius";
    cin>>r;
    ar=3.14*r*r;
    cr=2*3.14*r;
    if(ar>cr) cout<<"Area is greater than circumference";
    else cout<<"Area is smaller than circumference";
}