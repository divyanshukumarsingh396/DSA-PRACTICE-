#include<iostream>
using namespace std;
int main(){
 int a ,b;
 cout<<"enter the numbers :"<<endl;
 cin>>a>>b;

 int lastnum1 = a%10;
  int lastnum2 = b%10;

  int sum = lastnum1 + lastnum2;

    cout<<"sum of two last numbers "<<sum<<endl;

 return 0;
}
