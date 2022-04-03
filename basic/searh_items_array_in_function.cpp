#include <iostream>
using namespace std;
const int size = 5 ;

bool search_items (int arr [ ] , int search , int size);
int main ()
{
	int item;
	int arr_items [size] = {10,20,30,40,50};
	cout<<"pless enter your item ? "<<endl;
	cin>>item;
	if(search_items(arr_items , item , size ) == true )
		{
			cout<<"items is found";
		}
	else
		{
			cout<<"items is not found";
		}
	
}
bool search_items (int arr [ ] , int search , int size)
{
	bool found = false ;
	
	for(int i = 0 ; i<size ; i++)
		{
			if(arr[i] == search )
			{
				found = true ;
				break;
			}
				
		}
	return found ;
	
	
	
	
	
	
}

