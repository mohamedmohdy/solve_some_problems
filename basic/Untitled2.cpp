#include <iostream>
using namespace std;
float sum = 0.0;
float avg (float sum);
int main()
{
		int arr[5] ;
		for(int i = 0 ; i<5 ; i++)
		cin>>arr[i];
		for(int i = 0 ; i<5 ; i++)
		{
			sum = sum + arr[i];	
		}
		
	
	cout<<avg(sum);
}
float avg (float sum)
{
		
	float avg ;
	avg = (sum / 5) ;
	return avg ;
	
	
	
}


