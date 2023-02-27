

#include <iostream>
using namespace std;
int main()
{
	int u_input,parkl=10;
  	int amount=0;
  	int i=1;
	while(i<=parkl)
	{
	int count=0;
	cout<<"welcome "<<endl;
	cout<<" sharma  car  parking "<<endl;
	cout<<"press 1 for rickshaw"<<endl;
	cout<<"press 2 for car"<<endl;
	cout<<"press 3 for bus"<<endl;
	cout<<"press 4 for show the record"<<endl;
	cout<<"press 5 for delete the record"<<endl;
	cin>>u_input;
	if(u_input==1)
	{
	amount +=100;
	 count++;	
	}
	else if(u_input==2)
	{
		amount +=200;
		count++;
	}
	else if(u_input==3)
	{
		amount += 300;
		count++;
	}
	else if ( u_input==4)
	{
	cout<<"the total amount ="<<amount<<endl;
	cout<<"the total number of vehicles parked ="<<count<<endl;
	}
	else if (u_input==5)
	{
	amount = 0;
	count = 0;
	
	}
	else {
		cout<<"invalid number"<<endl;
	}
	i--;
}
	return 0;
	}
