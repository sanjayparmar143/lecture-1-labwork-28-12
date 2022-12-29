#include<iostream>
using namespace std;

class x{

	public:
		
	int a=1;
	int b=2;
	int c=3;
};

 class y : public x{
	
	public: 
	
	void setdata(){
		 
		cout<<"cube A is ="<<a*a*a<<endl;
		cout<<"cube B is ="<<b*b*b<<endl;
		cout<<"cube C is ="<<c*c*c<<endl;
	
	}
	
	void getdata(){
		
		cout<<"sum of cube = ";
		cout<<(a*a*a)+(b*b*b)+(c*c*c);
		}			
};
main(){

   y obj;
   obj.setdata();
   obj.getdata();
}

