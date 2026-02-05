#include<iostream>
using namespace std;
int main(){
 int a,b,c,d,e;
int evencount=0;
int oddcount=0;
 cout<<"enter the numbers : ";
 cin>>a>>b>>c>>d>>e;

if(a % 2 == 0){
    evencount++;
    }else{
      oddcount++;
    }

    if(b % 2 == 0){ 
    evencount++;
    }else{
      oddcount++;
    }

    if(c % 2 == 0){
       evencount++; 
       }
       else{
        oddcount++;
       }

    if(d % 2 == 0) {
      evencount++;
    }
    else{
      oddcount++;
    }
    if(e % 2 == 0){
     evencount++;
    }
    else{
      oddcount++;
    }

    cout<<"\n numbers of even : \n  "<<evencount ;
     cout<<"\n numbers of odd \n "<<oddcount ;
    
 
  
 return 0;
}
