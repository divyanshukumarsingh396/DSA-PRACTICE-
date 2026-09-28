#include <iostream>
using namespace std;

bool palindrome(int n){
    int r=0,temp=n;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r==temp;
}

int main(){
    cout<<palindrome(121);
}
