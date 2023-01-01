#include <iostream>
using namespace std;

void add(int num1, int num2);
void product(int num3, int num4);
void subtraction(int num5, int num6);
void divide(int num1, int num2);
main(){
int num1;
int num2;
char operation;

 
 cout << "Enter a number: ";
 cin >> num1;
 cout << "Enter another number: ";
 cin >> num2;
 cout<<"Enter an operator: ";
 cin >> operation;
 if(operation== '+'){
add(num1, num2);
}
if(operation=='*'){
 product(num1, num2);
}
if(operation=='-'){
 subtraction(num1, num2);
}
if(operation=='/'){
 divide(num1,num2);
}
}
void add(int num1, int num2)
{
  int sum;
  sum = num1+num2;
  cout << "sum is:" << sum << endl;
}

void product(int num3, int num4){
  int mul;
  mul = num3*num4;
  cout <<  "product is: "<< mul << endl;
}

void subtraction(int num5, int num6){
  int sub;
  sub=num5-num6;
  cout << "sub: " << sub;
}

void divide(int num1, int num2){
  int div;
  div= num1/num2;
  cout << "div is: " << div;
}
  









