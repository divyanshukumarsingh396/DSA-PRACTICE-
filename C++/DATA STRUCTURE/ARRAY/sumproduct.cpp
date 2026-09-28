#include<iostream>
using namespace std;

int main (){

    int arr[] ={ 32,4,26,4,3,5};

    int sum = 0 ;
     int product = 1;

     for(int i=0; i < 6; i++){
        sum = sum + arr[i];
        product = product * arr[i];
        
     }
    cout<<"sum of array :"<<sum<<endl;
    cout<<"product of array :"<<product<<endl;
   


return 0;
}
