#include <iostream>
using namespace std;
	class Student{
	private:
		//attrpute
		string name;
		int id ;
		int arabic;
		int math;
		int english;
	public:
		//constructor
		
		Student(){
			name = " " ;
			id = 0 ;
			arabic = 0 ;
			math = 0 ;
			english = 0 ;
		}
		
		Student(string n , int i , int a){
			name = n ;
			id = i  ;
			arabic = a ;
			math = 0 ;
			english = 0 ;
		}
		
		//seters
		void set_name(string n ){
			name = n ;
		}		
		void set_id(int i ){
			id  = i ;
		}
		void set_arabic(int a ){
			arabic = a ;
			
		}
		void set_math (int m ){
			math = m ;
		}
		void set_english (int e){
			english = e ;
		}
		
		//geeters
		
		string get_name (){
			return name;
		}
		int get_id(){
			return id ;
		}
		int get_arabic(){
			return arabic;
		}
		int get_math(){
			return math;
		}
		int get_endlish(){
			return english;
		}
		
		
			
		void print_info(){
			cout<<"============================="<<endl;
			cout<<"name student is : "<<name<<endl;
			cout<<"id student is : "<<id<<endl;
			cout<<"grade arabic is : "<<arabic<<endl;
			cout<<"grade math is : "<<math<<endl;
			cout<<"grade english is : "<<english<<endl;
		}
		
		~Student(){
			cout<<"1";
		}
	};
int main()
{
	Student st1 , st2("mohamed" , 123 , 33) ;
	
//	st1.set_name("mohamed");
//	st1.set_id(123);
//	st1.set_arabic(20);
//	st1.set_math(30);
//	st1.set_english(40);
//	
//	cout<<"name student is : "<<st1.get_name()<<endl;
//	cout<<st1.get_id()<<endl;
//	cout<<st1.get_arabic()<<endl;
//	cout<<st1.get_math()<<endl;
//	cout<<st1.get_endlish()<<endl;
	st1.print_info();
	st2.set_arabic(20);
	cout<<st2.get_arabic()<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}	
	
	
	
	
	
	
	
	
	

