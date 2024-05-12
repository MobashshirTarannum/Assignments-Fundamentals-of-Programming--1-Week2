//Q8-> Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;
int main(){
 int x1,x2,x3;
 int y1,y2,y3;
 cout<<"enter first point";
 cin>>x1>>y1;
 cout<<"enter second point";
 cin>>x2>>y2;
 cout<<"enter third point";
 cin>>x3>>y3;
float sp1= (y2-y1)/(x2-x1);
float sp2 = (y1-y3)/(x1-x3);
if(sp1==sp2) cout<<"All 3 points lie on the same line.";
else cout<<"All 3 points not lie on the same line.";



}