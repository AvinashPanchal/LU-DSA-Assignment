/*
Create a class by the name of Fruits and add certain attributes like taste-could be sweet sour citric etc, 
size:small,medium,big , color , season etc. 
through the main method create atleast two different objects and print their values.
*/

#include<iostream>
using namespace std;

class Fruits{

public:
	string taste;
	string size;
	string season;
};

int main(){
	Fruits apple;
	apple.taste = "Sweet";
	apple.size = "Big";
	apple.season = "Winter";
	
	cout<<"The Attributes of Object Apple are :\n";
	cout<<"Taste = "<<apple.taste;
	cout<< "\nSize = "<<apple.size;
	cout<<"\nSeason = "<<apple.season;
	
    Fruits orange;
	orange.taste = "Citric";
	orange.size = "Medium";
	orange.season = "Summer";
	
	cout<<"\n\n";
	
	cout<<"The Attributes of Object Orange are :\n";
	cout<< "Taste = "<<orange.taste;
	cout<< "\nSize = "<<orange.size;
	cout<<"\nSeason = "<<orange.season;
	return 0;
	
	
}
