#include <iostream>
using namespace std;
int main()
{
	/*
																1 to n
																10
																1 2 3 4 5 6 7 8 9 10
																3 not prime
																5
																1 2 3 4 5 
																prime
																6
																1 2 3 4 5 6
																7
																1 2 3 4 5 6 7 
																8
																1 2 3 4 5 6 7 8
													
	*/
	int n , i = 1 , counter = 0 ;
	cin>>n;
	while(i<=n)
		{
			if(n%i==0)
				{
					counter++;	
				}				
			i++;
		}	
		if(counter==2)
			cout<<" prime";
		else
			cout<<" not prime";
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

