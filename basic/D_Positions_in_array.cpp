#include <iostream>
#include <cmath>
using namespace std;
int counter = 0 ;
//int sum = 0 ;
int main()
{
												//print numper less than 10 
												// and index of numper 
												// 1 2 100 
												//arr[o] = 1 
												//arr[1] = 2 
	int size ;
	cin>>size;
	int arr [size] ;
	
	for(int i = 0 ; i<size ; i++)
		{
			cin>>arr[i] ;	
		}
	for(int i = 0 ; i<size ; i++)
		{
			if(arr[i] <= 10)
				{
					cout<<"A ["<<i<<"] = "<<arr[i]<<endl;	
				}	
		}	
												

	
	
	
	
	
}
