#include<iostream>
using namespace std;
int main()
{
string s;
int i = 0,count=0;
cout<< "Enter a string \n";
cin>>s;
while (s[i] != 0)
{
++i;
}
cout <<"Length of string is: "<< i << endl;
}
