#include<iostream>
using namespace std;
int main(){
 int a,b,c,d,e;
int count=0;
 cout<<"enter the numbers : ";
 cin>>a>>b>>c>>d>>e;

 if(a % 2 != 0) count++;
    if(b % 2 != 0) count++;
    if(c % 2 != 0) count++;
    if(d % 2 != 0) count++;
    if(e % 2 != 0) count++;
  
    cout<<" Numbers of Odd "<<count;
 

 return 0;
}
