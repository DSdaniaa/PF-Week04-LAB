#include <iostream>
using namespace std;
void evenodd(int num);
main(){
while(true)
{
int num;
cout << "Enter a number: ";
cin>> num;
evenodd(num);
}
}
void evenodd(int num)
{if(num%2==0){
cout <<" even"<< endl;
}
if(num%2!=0){
cout << "odd"<< endl;
}
}