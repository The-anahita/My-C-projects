#include<iostream>
using namespace std;
int main(){
int A[5];int temp;int b[5];
	cout<<"please enter member for array b[i]  :\n";
for(int i=0;i<5;i++){

	cin>>b[i];
}
}
int a[5];
cout<<"please enter member for array a[i] :\n";
for(i=0;i<5;i++){

	cin>>a[i];
}
for(i=0;i<5;i++){
	temp=a[i];
	a[i]=b[i];
	b[i]=temp;
}

{
	cout<<"members of array b[i] is :\n";
for(i=0;i<5;i++){

	cout<<b[i];
}
cout<<"\n";
cout<<"members of array a[i] is :\n";
for(i=0;i<5;i++){
	cout<<a[i];
}
}