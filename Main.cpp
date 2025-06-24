#include<iostream>
#include"calculator.h"

using namespace std;
int main(){
  void calculator();
   char op;
   int num1=10;
   int num2=5;
   int result;

cout<<"Enter an op(+,-,*,/):";
cin>>op;

switch(op){
 case'+':
   cout<<"result:"<<num1<<"+"<<num2<<"="<<result<<endl;
   break;
 case'-':
   cout<<"result:"<<num1<<"-"<<num2<<"="<<result<<endl;
   break;
case'*':
   cout<<"result:"<<num1<<"*"<<num2<<"="<<result<<endl;
   break;
case'/':
   cout<<"result:"<<num1<<"/"<<num2<<"="<<result<<endl;
   break;
default:
cout<<"Enter a valid number"<<endl;
}
return 0;
}
