#include<iostream>
using namespace std;
int main(){
int a;
int b;
int temp;

cout<<"enter  value a:"<<endl;
cin>>a;
cout<<"enter value b:"<<endl;
cin>>b;
temp=a;
 a=b;
 b=temp;
cout<<"after:a="<<a<<" b="<<b<<endl;
return 0;
}
