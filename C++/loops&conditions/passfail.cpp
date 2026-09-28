pass fail

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;

    if(num>=90){
        cout<<"A grade";
    }
    else if(num>=80){
        cout<<"B grade";
    }

else if(num>=60){
    cout<<"C grade";
}
else if(num>=40){
    cout<<"D grade";
}

else{
    cout<<"fail";
}
   
    return 0;
}


