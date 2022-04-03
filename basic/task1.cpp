#include <iostream>
using namespace std;


class Date{
	private:
		int day ;
		int month;
		int year;
	public:
		Date(){
			day = 0 ;
			month = 0 ;
			year = 0 ;
		}
		Date(int d , int m , int y){
			day = d ;
			month = m ;
			year = y ;
		}
		void set_day (int d ){
			if(d>=1 && d<=31)
				day = d ;
		}
		void set_month (int m ){
			if(m>=1 && m<=12)
				month = m ;
		}
		void set_year (int y ){
			if(y>=1900 && y<=9999)
				year = y ;
		}
		void set_Date (int d , int m , int y ){
			day = d ;
			month = m ;
			year = y ;
		}
		int get_day (){
			return day ;
		}
		int get_month (){
			return month ;
		}
		int get_year (){
			return year ;
		}
};

	int main(){
		Date st1 , st2(30 , 12 , 2021);
		
		st1.set_day(31);
		st1.set_year(2022);
		st1.set_month(10);
		cout<<"day is : "<<st1.get_day()<<" year is : "<<st1.get_year()<<" month is : "<<st1.get_month()<<endl;
		cout<<"day is : "<<st2.get_day()<<" year is : "<<st2.get_year()<<" month is : "<<st2.get_month();
	
	}





