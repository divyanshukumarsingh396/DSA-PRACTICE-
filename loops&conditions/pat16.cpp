#include <iostream>
using namespace std;

int main(){
    int N, count=0, num=2;
    cin>>N;

    while(count<N){
        int flag=1;

        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                flag=0;
                break;
            }
        }

        if(flag){
            cout<<num<<" ";
            count++;
        }

        num++;
    }
}
