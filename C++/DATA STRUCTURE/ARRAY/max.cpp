#include<iostream>
using namespace std;

int main(){

    int num[]={32,23,-22,254,12,33};

int size = 6;

int Smallest = INT8_MAX;
 int Largest = INT8_MIN;

 for(int i=0; i<size; i++){
    Smallest = min(num[i], Smallest);
    Largest = max(num[i], Largest);
    
 }
 cout<<"smallest = "<<Smallest<<endl;
 cout<<"largest = "<<Largest<<endl;

     for(int i = 0; i < size; i++) {
        if(num[i] == Smallest)
            cout << "Min index = " << i << endl;

        if(num[i] == Largest)
            cout << "Max index = " << i << endl;
    }


return 0;
}
