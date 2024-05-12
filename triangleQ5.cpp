//Q5->Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
//isosceles triangle.
#include<iostream>
using namespace std;
int main(){
   int s1,s2,s3;
   cin>>s1>>s2>>s3;
   if(s1==s2 && s2==s3) cout<<" This is an equilateral triangle";
   else if(s1==s2 || s2==s3 || s1==s3) cout<<"This is an Isosceles triangle.";
   else cout<<" This is a scalene triangle";
}