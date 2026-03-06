#include<iostream>
using namespace std;

int main(){

    int num[]={32,23,-22,42,12,3};

int size = 6;

 int Largest = INT8_MIN;

 for(int i=0; i<size; i++){
    if(num[i]>Largest){
        Largest =num[i];
    }
 }
 cout<<"smallest = "<<Largest<<endl;

return 0;
}
