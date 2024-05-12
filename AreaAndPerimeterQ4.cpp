//Q4->Given the length and breadth of a rectangle, write a program to find whether numerically the area of
//the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    int l;
    int b;
    int ar;
    int pr;
    cout<<"enter the length";
    cin>>l;
    cout<<"enter the breath";
    cin>>b;
     ar =l*b;
    pr=2*(l+b);
    if(ar>pr) cout<<"Area is greater than perimeter";
    else cout<<"Area is smaller than perimeter";
}