//Q3-> Any year is input through the keyboard. Write a program to determine whether the year is a leap year
//or not. (Considering leap year occurs after every 4 year>
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the year: ";
    cin>>x;

        if(x%100==0  && x%400==0)
       cout<<"yes";
        else if(x%4==0  && x%100!=0){
             cout<<"yes";
        }
        else{
             cout<<"no";
        }
        return 0;
}
    