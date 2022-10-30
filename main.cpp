10.30 2:18 PM
#include <iostream>
using namespace std;

int main() {

  float a,b,c;
  int opr;
  char opetr;

do
{
 cout<<"\n\t\t\tC A L C U L A T O R\n";
 cout<<"\nTo continue enter [1]\n";
 cout<<"For exit enter    [5]\n";
 cout<<"\nEnter [1] OR [5] : ";
 cin>>opr;

if(opr==1){
  cout<<"Enter operator[ + - * / ]: ";
  cin>>opetr;
  cout<<"\nEnter 1-no: ";
  cin>>a;
  cout<<"Enter 2-no: ";
  cin>>b;
      

  
switch(opetr){
  
  case '+': c=a+b;
  cout<<"\nANS="<<c;
  break;

  case '-': c=a-b;
  cout<<"\nANS="<<c;
  break;

  case '*': c=a*b;
  cout<<"\nANS="<<c;
  break;

  
  case '/': c=a/b;
  cout<<"\nANS="<<c;
  break;

  default:
  cout<<"\n\t\tI N V A I L D   I N P U T\n";
  break;
  
 }
  cout<<"\n\n--------------------------------------------\n";
  }else 
      if(opr==5)
        cout<<"\n\t\t- - - T H A N K  Y O U - - -";
  
 }while(opr!=5);
    return 0;
  
}
