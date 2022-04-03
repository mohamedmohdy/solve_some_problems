#include <iostream>
using namespace std;
	class Student{
	public:
		//attrpute
		string name;
		int id ;
		int arabic;
		int math;
		int english;
		
		
		
		//method
		
		void print_info(){
			
			cout<<"name student is : "<<name<<endl;
			cout<<"id student is : "<<id<<endl;
			cout<<"grade arabic is : "<<arabic<<endl;
			cout<<"grade math is : "<<math<<endl;
			cout<<"grade english is : "<<english<<endl;
		}
	};
int main()
{
	Student st1,st2,st3;
	
	st1.name="mohamed";
	st1.id=900;
	st1.arabic=40;
	st1.english=90;
	st1.math = 100;
	st1.print_info();
	cout<<"======================"<<endl;
	st2.name="ahmed";
	st2.id=12;
	st2.arabic=70;
	st2.english=90;
	st2.math=66;
	st2.print_info();
	cout<<"======================"<<endl;
	
	string name_st3 ;
	cin>>name_st3;
	st3.name = name_st3;
	
	int id_st3;
	cin>>id_st3;
	st3.id=id_st3;
	st3.print_info();
	
	
	
	
	
	
	
	
	
	
	
	
	
}	
	
	
	
	
	
	
	
	
	

