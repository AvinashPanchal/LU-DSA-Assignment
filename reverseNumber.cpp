#include <iostream>
using namespace std;

int main(){

int num, rev_num=0;
cout<<"Input a number = ";
cin>>num;

while (num>0){
	rev_num = rev_num * 10 + num % 10;
    num = num / 10;
}

cout<< "\nReverse Number is = "<<rev_num;

return 0;
}
