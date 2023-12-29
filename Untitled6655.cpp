#include<iostream>

using namespace std;

int pow(int x, int y)
{
	if(y==0){
	
	    return 1;
	}    
	else 
	{
		return pow(x,y-1)*x;
	}
}
 int main()
 {
 int x,y; 
 cout<<"please enter value for x :  ";
 cin>>x;
 cout<<"please enter value for y :  ";
 cin>>y;
 
 cout<< "pow (x,y) is : " << pow(x,y);
 
 }