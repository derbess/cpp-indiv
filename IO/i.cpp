#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int q=a/100;
	int w=a%100;
	cout<<q+w/10+w%10;
	}
