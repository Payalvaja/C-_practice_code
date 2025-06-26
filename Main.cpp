#include<iostream>
#include<calculator.h>

using namespace std;
int main(){
char op;
int num1,num2,result;

cout<<"enter an op(+,-,*,/):";
cin>>op;
cout<<"enter two value";
cin>>num1>>num2;

switch(op){
case '+':
 result = num1+num2;
cout<<"result:"<<num1<<"+"<<num2<<"="<<result<<endl;
break;
case '-':
result = num1-num2;
cout<<"result:"<<num1<<"-"<<num2<<"="<<result<<endl;
break;
case '*':
result = num1*num2;
cout<<"result:"<<num1<<"*"<<num2<<"="<<result<<endl;
break;
case '/':
result = num1/num2;
cout<<"result:"<<num1<<"/"<<num2<<"="<<result<<endl;
break;
default:
cout<<"enter valid numbers";
}
return 0;
}