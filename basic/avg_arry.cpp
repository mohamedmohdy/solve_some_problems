#include <iostream>
using namespace std;
const int size = 5 ;
float sum = 0.0 ;

float calc_arr(float arr[] , int size);
int main ()
{
		float arr[5] = {100,240,250,50,70};
		cout<<calc_arr(arr,5);



}
float calc_arr(float arr[] , int size)
{
	for(int i = 0 ; i<size ; i++)
		{
			sum = sum + arr[i] ;
		}
		
		return sum / size ;
}

