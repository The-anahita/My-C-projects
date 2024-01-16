#include<iostream>
using namespace std;

int main(){
	int m, n;
	int result = 1;
	cout<<"please enter value for m"
	cin>>m;
	cout<<"please enter value for n"
	cin>>n;
	for (int i=1;i<=n;i++){
		result = result * m;
	}
	cout<< result;
}