#include<iostream>
#include<cmath>
using namespace std;
int main(){
	 int i, j,temp,flag;
	  int a[10] = {10,2,0,14,43,25,18,1,5,45};
	  cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
flag++;
}
 cout<<"\n";
 cout<<"second smallest number is :\n";
   cout <<a[1]<<"\t";
}