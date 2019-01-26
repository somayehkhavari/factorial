#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int num ;
	cout<<"plz enter one number:"<<endl;
	cin>>num;
	int fact=1;
	while(num>0){
		fact=fact*num;
		num--;
		
	}
	cout<<"the fact of yor number is:"<<fact;
	return 0;	
}
