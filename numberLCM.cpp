// Write a code to find LCM of given two numbers
/*
1. taking input of 2 number
2. finding lcm of given number
3. print out the lcm
*/

#include<iostream>
using namespace std;

 void lcm(int a, int b){
 	int m,n, lcm ;
    m=a; 
    n=b;
    
    	if(m>n){
    		lcm = m;
		}
		else {
			lcm = n;
		}
		
		while(1) {
        if( lcm%m==0 && lcm%n==0 ) {
        cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm;
         break;
         }
            lcm++;
	     }
 	
 }
 
 int main (){
 	int a,b;
    cout<<"Enter 1st number = ";
    cin>>a;
    cout<<"Enter 2nd number = ";
    cin>>b;
 	lcm(a, b);
 	
 	return 0;
 }
