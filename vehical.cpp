//Vehicle Inheritance:
//Problem Statement: Develop a class hierarchy for vehicles. Start with a base class 
//Vehicle and create derived classes like Car, Motorcycle, and Truck. Each derived class 
//should have unique properties like the number of wheels and specific methods like start_engine().

#include<iostream>
using namespace std;

class Vehical{
	protected:
		int engineCC, noOfWheels,speed;
		
	public:
			setData(int cc, int whl, int spd){
				engineCC = cc;
				noOfWheels = whl;
				speed = spd;
			}
		virtual string fuelType()=0;
		void Display(){
			cout<<"Engine CC : "<<engineCC<<endl;
			cout<<"No of wheels : "<<noOfWheels<<endl;
			cout<<"Speed : "<<speed<<endl;
		}
};
class Motercycle:public Vehical{
	public:
		string fuelType(){
			return "Electric";
		}
		void Display(){
//			Helper function
			Vehical::Display(); 
			cout<<"Fuel type : "<<fuelType()<<endl;
		
		}
};

class Car:public Vehical{
	public:
		string fuelType(){
			return "Petrol";
		}
		void Display(){
			cout<<"Fuel type : "<<fuelType()<<endl;
		}
};
class Truck:public Vehical{
	public:
		string fuelType(){
			return "Diesel";
		}
		void Display(){
			cout<<"Fuel type : "<<fuelType()<<endl;
		}
};
int main(){
	Motercycle mc;
	mc.setData(150, 2, 100);
	mc.Display();
	
//	Car cr
}
