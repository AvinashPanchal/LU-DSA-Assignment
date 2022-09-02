/*
Create a class by the name of student and pass 5 different subject scores through the constructor and print them in the main function
*/

#include<iostream>
using namespace std;

class Student{
	public:
		string subject;
		int marks;
		
		Student (string sub, int m){
			
			subject = sub;
			marks = m;
		}
	};
		
		int main(){
			Student subject1("Math", 90);
			Student subject2("Physics", 92);
			Student subject3("Chemistry", 88);
			Student subject4("English", 93);
			Student subject5("Biology", 96);
			cout<<"The Marks of student in Math = "<<subject1.marks;
			cout<<"\nThe Marks of Student in Physics = "<<subject2.marks;
			cout<<"\nThe Marks of Student in Chemistry = "<<subject3.marks;
			cout<<"\nThe Marks of Student in English = "<<subject4.marks;
			cout<<"\nThe Marks of Student in Biology = "<<subject5.marks;
			
			return 0;
		}
