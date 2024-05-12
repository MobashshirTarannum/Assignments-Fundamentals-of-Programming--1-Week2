//Q9->Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the charector: ";
    cin>>ch ;
    if(ch>='A' && ch<='Z'  || ch>='a' && ch<='z') cout<< "Albhabet";
    else if(ch>='0' && ch<='9')  cout<<"digit";
    else cout<<"special charector";
}