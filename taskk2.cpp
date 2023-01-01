#include <iostream>
using namespace std;
void iseligible(int num);
main(){
int age;

cout<<" Enter your age: ";
cin >> age;
iseligible(age);

}
void iseligible(int num){
if(num>= 18){
cout << " you are eligible ";
}


}