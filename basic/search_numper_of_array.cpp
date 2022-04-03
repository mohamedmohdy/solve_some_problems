#include <iostream>
#include <cmath>
using namespace std;
int counter = 0 ;
//int sum = 0 ;
int main()
{
												//searchikg
												// 1 2 3 4 5 ------> search 5 
												// index (4)
	int arr [3] = {3,0,1};
	
	cout<<"what numper search ? ";
	int numper ; cin>>numper;

	for(int i = 0 ; i<3 ; i++)
		{
			if(numper == arr[i])
			{
				counter++;
				cout<<i ;
			}
		}
	if(counter == 0 )
		cout<<-1;
	
	
			
												
												
												
													
}

