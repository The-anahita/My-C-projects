#include  <iostream>

using namespace std;

main() {
	int salary,finals;
	cout<< "please enter your salary in numbers\n";
	cin>> salary;
	
	if (salary<6000000){
	    cout<<"your final salary is :"<< salary;
	}
    else if (salary>= 6000000 && salary<8000000,
	finals =salary*95/100 ){
		cout<<"your final salary is :"<<finals;
	}
	else if (salary>=8000000 && salary<10000000,
		finals = salary *90/100){
		cout<<"your final salary is :"<<finals;
	}
	else if (salary>=10000000 && salary<14000000,
		finals = salary *85/100){
		cout<<"your final salary is :"<<finals;
	}
	else if (salary>=14000000 && salary<18000000 ,
		finals = salary *80/100){
		cout<<"your final salary is :"<<finals;
	}
	else if (salary>=18000000 && salary<25000000,
		finals = salary *75/100){
		cout<<"your final salary is :"<<finals;
	}
	else {
		finals = salary *65/100;
		cout<<"your final salary is :"<<finals;
	}
}
