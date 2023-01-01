#include <iostream>
using namespace std;
void bill(string day, float amount);
main(){
float amount;
string day;
cout << "Enter day: ";
cin >> day;
cout << "Enter Amount; ";
cin >> amount;
bill(day, amount);
}



void bill(string day, float amount){
float pay;
if(day == "sunday"){
 pay = (amount - ((10*amount)/100));
cout << "payable amount: " << pay;
}
if(day== "monday"){
pay= amount;
cout << "payable amount: " << pay;
}
if(day== "tuesday"){
pay= amount;
cout << "payable amount: " << pay;
}
if(day== "wednesday"){
pay= amount;
cout << "payable amount: " << pay;
}
if(day== "thursday"){
pay= amount;
cout << "payable amount: " << pay;
}
if(day== "friday"){
pay= amount;
cout << "payable amount: " << pay;
}
if(day== "saturday"){
pay= amount;
cout << "payable amount: " << pay;
}
}