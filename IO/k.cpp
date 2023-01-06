#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	a = a %1440;
	int q=a/60;
	cout<<q<<' '<<a%60;
	}
