#include <iostream>
#include <cmath>
using namespace std;
int counter = 0 ;
//int sum = 0 ;
int main()
{
													//delet postive and print 1
													//delet negative and print 2 
													// zero print is zero												
	int arr [ 11 ] = {1,2,3,4,5,-1,-2,-3,-4 , 0 , 0 } ;
	 
	 for(int i = 0 ; i<11 ; i++){
	 	
	 	
	 	if(arr[i] > 0 )
	 		arr[i] = 1 ;
	 	else if (arr[i] < 0 )
	 		arr[i] = 2 ;
	 	else
	 		arr[i] = 0 ;

	 }
	 	
	for(int i = 0 ; i<11 ; i++)
		cout<<arr[i] <<" ";
}
