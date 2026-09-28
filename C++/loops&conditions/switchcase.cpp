#include<iostream>
using namespace std;


int main(){

  int choice; 
  double price;

  cout<<"1. Green  Tea \n";
  cout<<"2. lemon  Tea \n";
  cout<<"3. Oolong Tea \n";
  cout<<"4. simple Tea \n";
  cout<<"Enter your choice in number : \n";

  cin>>choice;

  switch (choice){

    case 1:
    price = 50.0;
    cout<<"you selected Green Tea price : "<<price<<endl;
    break;
    
    case 2:
    price = 35;
    cout<<"you selected lemon Tea price : "<<price<<endl;
    break;
    
    case 3:
    price = 20;
    cout<<"you selected Oolong Tea price : "<<price<<endl;
    break;

    case 4:
    price = 10;
    cout<<"you selected Simple Tea price : "<<price<<endl;
    break;
    
    default :
    cout<<"invalid choice"<<endl;

  }
 return 0;
}
