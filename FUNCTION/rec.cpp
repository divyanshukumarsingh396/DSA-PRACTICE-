#include<iostream>
using namespace std;
 
void printnum(int n){

    if(n==0){

        cout<<" 1 \n";
        return ;
    }
    cout<<n<<" ";
    printnum(n-1);
    
}
int main(){
    printnum(55);

    return 0;
}