#include <iostream>
using namespace std;

void swapNum(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}

int main(){
    int x=3,y=5;
    swapNum(x,y);
    cout<<x<<" "<<y;
}
