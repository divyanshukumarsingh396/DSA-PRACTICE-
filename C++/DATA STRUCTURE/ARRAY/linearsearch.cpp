#include<iostream>
using namespace std;

int main (){

    int find, size = 7;
    int arr[]={3,5,32,63,35,25,24};

    cout<<" Enter the value which is finding :" ;
    cin>>find;

for(int i=0; i<size; i++)
{
    if(arr[i] == find){
        cout<<"your value index :"<<i;
    }
    cout<<"element is not found"<<endl;
    return -1;
}
return 0;
}