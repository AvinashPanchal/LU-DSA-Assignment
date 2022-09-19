// Some Conditional Logic Example

#include<iostream>
using namespace std;
 
 int main(){
 	
 	/* Write a C program to accept two integers and check whether they are equal or not
 	
	 int num1, num2;
 	cout<<"Enter First Positive Enteger\n";
 	cin>>num1;
 	cout<<"Enter Secont Positive Enteger\n";
 	cin>>num2;
 	
 	if (num1==num2){
 		cout<<"num1 and num2 are equal: "<< num1 <<" = "<< num2 ;
	 }
	 else{
	 	cout<<"num1 and num2 are not equal";
	 }
	 
	 */
	 
	 /* Write a C program to check whether a given number is even or odd
	 
	 int num1;
	 
	 cout<<"Enter a positive number: ";
	 cin>>num1;
	 
	 if (num1%2==0){
	 	cout<< "Number is even number";
	 }
	 else {
	 	cout<<"Number is odd";
	 }
	 
	 */
	 
	 /* Write a C program to check whether a given number is positive or negative.
	 
	 int num1;
	 cout<< "Enter a number: ";
	 cin>> num1;
	 if (num1<0){
	 	cout<< "The giver number is negative";
	 }
	 else if(num1>0){
	 	cout<<"Number is positive";
	 }
	 else {
	 	cout<<"Number is whole no.";
	 }
	 	 
	 */
	 
	// C program to find largest among two numbers using ternary operator
 
    int m, n;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    (m > n) ? cout<< "m is greater" : cout<<"n is greater"; 
 
    return 0;
}
