#include<iostream>
using namespace std;
int main(){
int n=26;

 for(int i = 0; i <= 5; i++){
  char ch = 'A';
    for(int j = 1; j <= n; j++) {
      cout<<ch;
      ch = ch+1;
        
      cout<<" ";
    }
    cout<<endl;
  }
 return 0;
}
