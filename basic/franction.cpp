#include <iostream>
using namespace std ;
int main()
{
	
	int numper = 12345, numper1 , numper2 , numper3 , numper4 , numper5;
	double avg , sumtion , sumtion1;
	
	numper1 = numper % 10 ;
	numper = numper / 10 ;
	numper2 = numper % 10 ;
	numper = numper / 10 ;
	numper3 = numper % 10 ;
	numper = numper / 10 ;
	numper4 = numper % 10 ;
	numper = numper / 10 ;
	numper5 = numper % 10 ;
	numper = numper / 10 ;
	
	cout<<numper1<<"\n"<<numper2<<"\n"<<numper3<<"\n"<<numper4<<"\n"<<numper5<<"\n";
	
	avg = (numper1 + numper2 + numper3 + numper4 + numper5)/5;
	
	cout<<"_____________________________"<<"\n";
	cout<<avg<<"\n";
	cout<<"_____________________________"<<"\n";
	
	sumtion =  (float(numper5 + numper4 + numper3) / (numper1 + numper2) );
	cout<<sumtion ;
	cout<<"_____________________________"<<"\n";
	
	sumtion1 =( float(  (numper5+numper4+numper3)/3 )     /    ((numper2 + numper1)/2)  );
	
	cout<<sumtion1;
	
	
	
	
	
	
	
	
	
	
	
}
