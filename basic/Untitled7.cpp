#include <iostream>
#include <cmath>
using namespace std;
int flag = 0 ;
//int counter = 0 ;
//int sum = 0 ;
int main()
{
							// 5 4 3 2 
							// 2 3 4 5 
	int size;cin>>size;
	int arr[size];
	for(int i = 0 ; i<size ; i++)
		{
			cin>>arr[i];
		}
	for(int i = size-1 ; i>= 0 ; i--)
		{
			cout<<arr[i]<<" ";
		}
	
	
	
	
}
