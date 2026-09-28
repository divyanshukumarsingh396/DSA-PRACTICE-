#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the letter"<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z')
{
  ch=ch+32;   
}
   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    cout<<" is vowels";
   }

   else{
    cout<<"consonant";
   }
   

    return 0;
}
