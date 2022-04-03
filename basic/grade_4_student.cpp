#include <iostream>
using namespace std;
int main ()
{
	int arr_student [3] [4] ;
	
	for(int i = 0 ; i<3 ; i++)
		{
			cout<<"inter 4 grade student "<<"[ " <<i+1<<" ]"<<" : ";
			for(int j = 0 ; j<4 ; j++)
			{
				cin>>arr_student[i][j];
			}
				
		}
	
	for(int i = 0 ; i<3 ; i++)
		{
			cout<<"grade student "<<"[ " <<i+1<<" ]"<<"is : ";
			for(int j = 0 ; j<4 ; j++)
			{
				
				cout<<arr_student[i][j]<<" ";
			}
				cout<<endl;
			
		}
		
		

	
	
	
	
}

