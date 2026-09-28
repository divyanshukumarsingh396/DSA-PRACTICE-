#include<iostream>
using namespace std;
int main(){
char ch;

cout<<"enter the character :";
cin>>ch;

if(ch>='a' && ch<='z'){

cout<<"lowercase";
}
else if(ch>='A' && ch<='Z'){
    cout<<"uppercase";

}
else{
   cout<<"default";
}
return 0;
}
