//Q6->If the marks of A, B and C are input through the keyboard, write a program to determine the student
//scoring the least marks.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;

    if(a<b && a<c) cout<<"A has the least marks.";
    else if(b<a && b<c)cout<<"B has the least marks.";
    else if(c<b && c<a)cout<<"C has the least marks.";
}