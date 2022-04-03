#include <iostream>
using namespace std;

	class Account {
		public:
		//atrpute
			string name;
			int id;
			float salary ;
		//method
			void print_date (){
				cout<<"name user is : "<<name<<endl;
				cout<<" id user is  : "<<id<<endl;
				cout<<" salary user is : "<<salary<<endl;
			}
	};
int main()
{
		Account user1,user2,user3,user4,user5,user6 ;
		
		user1.name="mohamed";
		user2.name="ahmed";
		user3.name="eslam";
		user4.name="mahmoud";
		
		user1.id=123;
		user2.id=5677;
		user3.id=389;
		user4.id=839;
		
		user1.salary=20000;
		user2.salary=3000;
		user3.salary=8999;
		user4.salary=900;
		
		
		
		
		user1.print_date();
		cout<<"============================"<<endl;
		user2.print_date();
		cout<<"============================"<<endl;
		user3.print_date();
		cout<<"============================"<<endl;
		user4.print_date();
		cout<<"============================"<<endl;
		user6.print_date();
		
		
	
	
	
	
	
	
	
	
	
	
	
	
}
