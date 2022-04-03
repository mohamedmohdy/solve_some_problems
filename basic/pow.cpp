#include <iostream>
using namespace std;
int main()
{
	/*
	x y 
	2 5 
	2*2*2*2*2
	2 6 
	2*2*2*2*2*2
	*/
	
	int x , y , i = 1 , mult= 1 ;
	cin>>x>>y;
	
	
	while(i <= y )
		{
			mult = mult * x ;
			i++;
		}
		
		cout<<mult;
}
