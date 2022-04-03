#include <iostream>
#include <cmath>
using namespace std;
int flag = 0 ;
//int counter = 0 ;
//int sum = 0 ;
int main()
{
		int pos ;
		int i = 0 ;	//print small numper in array and position 
		int size ;
		cin>>size ;
		int arr [size] ;
			for(int i = 0 ; i<size ; i++){
				
				{
					cin>>arr[i];
				}
			}
							
				int flag = arr[0] ;	
			for(int i = 0 ; i<size ; i++)
				{
					if(arr[i] < flag)    		//1  3      2 > 1  
						{
					 		flag = arr[i] ;
							pos = i+1;	 		
						}	
				}
				cout<<flag<<" "<<pos;
								

	
	
	
	
	
}
