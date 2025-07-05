#include<iostream>
using namespace std;
int add(int a,int b){
return a+b;
}
int main(){
int x,y;
cout<<"enter first value ";
cin>>x;

cout<<"enter second value";
cin>>y;
cout<<"sum:"<<add(x,y)<<endl;
return 0;
}