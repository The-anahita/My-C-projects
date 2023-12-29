#include<iostream>

using namespace std;

int gcd(int x, int y)
{
	if(y==0){
	
	    return x;
	}    
	else 
	{
		return gcd(y,x%y);
	}
}
 int main()
 {
 int x,y; 
 cout<<"please enter value for x :  ";
 cin>>x;
 cout<<"please enter value for y :  ";
 cin>>y;
 
 cout<< "the gcd of two numbers is : " << gcd(x,y);
 
 }