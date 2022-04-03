#include <iostream>
using namespace std;
int sum = 0 , sum_dialog = 0 ;

int main ()
{
	int matrix [5] [3] ;
	
	for(int i = 0 ; i<5 ; i++){
		for(int j = 0 ; j<3 ; j++)
			{
				cin>>matrix[i][j];
			}
	} 
	
		for(int i = 0 ; i<5 ; i++){
			for(int j = 0 ; j<3 ; j++)
				{
					sum = sum + matrix[i][j];
				}
			}
					for(int i = 0 ; i<5 ; i++){
						for(int j = 0 ; j<3 ; j++)
							{
								if(i == j)
								{
									sum_dialog = sum_dialog + matrix[i][j] ;
								}
									  	
							}
					}

	

		
		cout<<"sumion is : "<<sum <<endl;
		cout<<"sumion dialog is : "<<sum_dialog <<endl;
}

