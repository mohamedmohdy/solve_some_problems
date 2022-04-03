#include <iostream>
using namespace std;
int main()
{
																		/*
																			give me charcter * / - + 
																			give me loop numper
																			give me numper of loop 
																			example:
																					*
																					5
																					1 3 5 2 7 
																					*
																					* * * 
																					* * * * * 
																					* * 
																					* * * * * * *
																		*/
																																				
	char charcter ;cin>>charcter; //*
	int numper_loop ; cin>>numper_loop; //5
	for(int i = 1 ; i<=numper_loop ; i++)
		{
			int numper ;
			cin>>numper;		// 5
				for(int j = 1 ; j <=numper ; j++)
					{
						cout<<charcter;
					}
					cout<<endl;
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
