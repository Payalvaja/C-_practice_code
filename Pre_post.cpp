#include<iostream>
using namespace std;
int main(){
int number;
cout<<"enter a valid number"<<endl;
cin>>number;

cout<<"number is "<<number<<endl;
cout<<"after the post increament by 1 number"<<number++<<endl;
cout<<"after the pre increament by 1 number"<<++number<<endl;
cout<<"after increasing 1 number"<<number+1<<endl;
cout<<"after  the post decremem by 1 number"<<number--<<endl;

cout<<"after the pre decrement by 1 number"<<--number<<endl;
cout<<"after increasing 1 number"<<number-1<<endl;
return 0;
}
