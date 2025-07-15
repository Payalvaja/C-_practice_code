#include<iostream>
#include"calculator.h"

using namespace std;
int main(){
char op,a,b;

cout<<"enter an op(+,-,*,/):";
cin>>op;

cout<<"enter two values;";
cin>>a>>b;

switch(op){
case '+':
  cout<<"add"<<a+b<<endl;
  break;
case '-':
  cout<<"subtract"<<a-b<<endl;
  break;
case '*':
  cout<<"multiply"<<a*b<<endl;
  break;
case '/':
  cout<<"division"<<a/b<<endl;
  break;
default:
  cout<<"invalid value"<<endl;
  break;
}
return 0;
}
