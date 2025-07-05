#include<iostream>
#include<ctime>
using namespace std;
int main(){
time_t now =time(0);

char* date= ctime(&now);

cout<<"enter a current date and time"<<date;
 return 0;
 }