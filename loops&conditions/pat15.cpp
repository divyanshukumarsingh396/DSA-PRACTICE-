#include <iostream>
using namespace std;

int main(){
    int N, sum=0;
    cin>>N;

    for(int n=2; n<=N; n++){
        int flag=1;

        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }

        if(flag) sum+=n;
    }

    cout<<"Sum = "<<sum;
}
