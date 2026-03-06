#include<iostream>
using namespace std;

int main(){

    int num[]={32,23,-22,22,12,3};

int size = 6;

 int smallest = INT8_MAX;

 for(int i=0; i<size; i++){
    if(num[i]<smallest){
        smallest =num[i];
    }
 }
 cout<<"smallest = "<<smallest<<endl;

return 0;
}
