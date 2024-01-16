#include<iostream>

using namespace std;

int main(){
	int m, n, i;
	cout<<"please enter value for m"
	cin>>m;
	cout<<"please enter value for n"
	cin>>n;
	for (i=0;n<=m;i++){
	m = m - n;
	}
	cout<<"the remainder is: "<<m << endl;
	cout<< "the quorient is : "<<i;
}