
#include<iostream>
using namespace std;
class A{
	public:
		void Print(){
			cout<<"A\n";
		}
};
class B: portected A{
	public:
	void print(){
		cout<<"B\n";
	}
};
class C:public B{
	public:
		void print(){
			cout<<"C\n";
		}
	
};

int main(){
	C obj;
	obj.Print();
	obj.print();
	obj.print();
	return 0;
}
