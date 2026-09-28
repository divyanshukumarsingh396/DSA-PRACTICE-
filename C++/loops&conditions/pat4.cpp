#include<iostream>
using namespace std;
int main(){
   
    for(int i=0; i<13; i++){
        for(int j=0; j<=i-5+1; j++){

           for(int k=0; k<=j-1; k++){
            for(int l=1; l<=k; l++){
                cout<<"*";
            }
            cout<<" ";

           } cout<<" ";
        }
       cout<<"*"<< endl;
    }

 return 0;
}
