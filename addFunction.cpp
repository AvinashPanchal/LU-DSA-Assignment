/* 
Write a program to add two numbers and call functions internally (main() -> pass arguments int a,b -> printAnswer(a,b)->add(a,b)
*/

#include<iostream>
using namespace std;

int add(int a, int b){
	
	int sum;
	
	sum = a+b;
	
	return sum;
}

int main(){
	
	int a, b, sum;
	
	cout<<"Enter first number = ";
	cin>>a;
	
	cout<<"Enter second number = ";
	cin>>b;
	
	sum = add(a, b);
	cout<<"Addition of a and b is = "<<sum;
	
	return 0;
}
