#include <iostream>
using namespace std;
int main()
{
	int numper1 =  0  , numper2 = 0  , numper3 = 0  , numper4 = 0  , numper5 = 0  ;
	int sum  = 0 , sum1 , sum2 ,sum3 , sum4 , sum5 ;
	
	
	cout<<"please add your numper : ";
	cin>>numper1>>numper2>>numper3>>numper4>>numper5;
	
	if(numper1 / 2 == 1 )
		 sum1 = numper1 ;
	 if (numper2 / 2 == 1 )
		 sum2 = numper2 ;
	 if (numper3 / 2 == 1 )
		 sum3 = numper3 ;
	 if (numper4  / 2 == 1 )
		 sum4 = numper4 ;
	 if ( numper5 / 2 == 1 )
		 sum5 = numper5 ;
	 
				
		
		
		sum = sum1 + sum2 + sum3 + sum4 + sum5 ;
		
		cout<<sum;
		
		
		
	}
