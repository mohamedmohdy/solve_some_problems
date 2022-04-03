#include<iostream>
using namespace std;    //class pesron (parent class ) class teacher ( shild class ) 
class Person {
	protected:
		//atrbute:
			string name ;
			int id ;
		//method :
	public:
		Person(){
			name = " ";
			id = 0 ;
		}
		Person(string n , int i ){
			name = n;
			id = i ;
		}
		// setters
		void set_name(string n ){
			name = n ;
		}
		void set_id(int i ){
			id = i ;
		}
		//geters
		string get_name (){
			return name;
		}
		int get_id (){
			return id;
		}
		void print_info(){
			cout<<"name is = "<<name<<endl;
			cout<<"id is = "<<id<<endl;
		}
};
class teacher : public Person{
	//attrbute
	private:
		double salary;
	public:
		teacher(){
			salary = 0 ;
		}
		teacher(string n , int i , double s) : Person (n , i){
			salary = s;
		}
	// seeters
		void set_salary (double s ){
			salary = s ;
		}
	//getters
		double get_salary (){
			return salary ;
		}
	void print_info (){
		Person::print_info();
			cout<<"salary is  = "<<salary;
	}
};
int main(){
	teacher t1("ahmed" , 122 , 2000.10) ;
	t1.print_info();
	
}
