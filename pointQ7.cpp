//Q7-> Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
   if(x==0 && y==0) cout<<"origin";
   else if(x!=0 && y==0) cout<<"x-axis";
   else if(x==0 && y!=0) cout<<"y-axis";
   else cout<<" other point";
}