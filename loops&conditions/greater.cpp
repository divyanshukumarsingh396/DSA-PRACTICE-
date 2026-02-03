#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter A number"<<endl;
    cin>>a;

    cout<<"enter B number"<<endl;
    cin>>b;

    cout<<"enter C number"<<endl;
    cin>>c;

    if(a>b){
        cout<<a<<" greater than  "<<b;
    }
   else if (b>c){
        cout<<b<<" greater than "<<c;
    }
    else if(c>a){
        cout<<c<<"greater than"<<a;
     }
    else{
        cout<<" both are equal";
    }

    return 0;
}

