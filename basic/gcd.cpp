#include <iostream>
using namespace std;
int main()
{
	/*
					12  8 
					loop to grate numper 
					1 2 3 4 5 6 7 8 9  10 11 12 
					divios 1 2 4 
					4 is max														
	*/
	
	int x , y , i = 1 ,max = 0 ;
	cout<<"pleass enter your x and y ! ";
	cin>>x>>y;
	if(x>y)
		{
			while(i<=x)
				{
					if(x%i==0 && y%i==0)
						{
							 if (i>max)
								max = i ;	
						}
					i++;	
				}		
		}
	else
		{
			while(i<=x)
				{
					if(x%i==0 && y%i==0)
						{
							 if (i>max)
								max = i ;	
						}		
					i++;
				}
		}
				cout<<"max is : "<<max;
			
			
			
			
			
			
			
			
			
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

