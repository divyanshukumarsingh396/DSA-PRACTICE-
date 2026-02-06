#include<iostream>
using namespace std;

int main(){
    int unit;
    float bill;
    cout<<"enter the units"<<endl;
    cin>>unit;

    if(unit<=100){
        bill= unit *1;
    }
    else if(unit<=200){
        bill= unit*2;
    }
    else{
        bill=unit*3;
    }
cout<<"total electricity bill"<<bill;
   
    return 0;
