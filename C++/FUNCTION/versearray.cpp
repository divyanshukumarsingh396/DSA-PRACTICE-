#include<iostream>
using namespace std;

 int reversearray(int arr[], int size){

   int start= 0, end = size-1;

   while(start < end){
   swap(arr[start], arr[end]);
start++;
end--;

   }
 }
int main (){

    int arr[]= { 34,43,4,34,25,42,41,56};
    int size = 8;

     reversearray(arr, size );

     for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
     }
cout<<endl;

return 0;
}

