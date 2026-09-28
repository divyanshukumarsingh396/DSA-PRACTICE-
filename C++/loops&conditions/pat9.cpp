#include <iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=0;i<n;i++){
        int num=1;
        for(int s=1;s<=n-i;s++) cout<<" ";

        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num = num*(i-j)/(j+1);
        }
        cout<<endl;
    }
}
