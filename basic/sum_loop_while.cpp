#include <iostream>
#include <cmath>
using namespace std;
int sum = 0 ;
int main()
{
		int count ;
		cout<<"plesee enter your  counter loop : ";
		cin>>count ;
		int i = 0 ;
		while(count != i )
		{
			int num  ;
			cin>>num ;
			sum = sum + num ;
			count -- ;
		}
		cout<<abs(sum);
}

