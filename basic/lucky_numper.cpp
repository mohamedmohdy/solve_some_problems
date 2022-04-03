#include <iostream>
using namespace std;
int main()
{
																		/*
																			4==> x   20==>y	
																			4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
																			x++
																			check (x)
																			(x) == 4 ------------> lucky numper
																			(x) == 7 ------------> lucky numper
																			(x) == 47 -----------> lucky numper
																			10 20
																			10 11 12 13 14 15 16 17 18 19 20 
																			-1
																			0 10 
																			0 1 2 3 4 5 6 7 8 9 10 
																																			*/
	int arry[50] = {0} ;
	arry[4] = 1 ;
	arry[7] = 1 ;
	arry[44] = 1 ;
	arry[47] = 1 ;
	
	int x , y ,flag = 0 ;
	cin>>x>>y;
	
	for(int i = x ; i <= y ; i++)
		{
			if(arry[i] == 1)
			{
				cout<<"x is lucky numper : "<<i<<endl;
				flag++;
			}
				
		}
	if(flag == 0 )
		cout<<"-1";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
