//1 Solve this.
//Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.
//
//Create Emp based organization structure --- Emp , Mgr , Worker
//
//
//1.1 Emp state--- id(int), name, deptId , basicSalary(double)
//Accept all of above in constructor arguments.
//
//Methods ---
//1.2. compute net salary ---ret 0
//(eg : public double computeNetSalary(){return 0;})

//1.2 Mgr state  ---id,name,basic,deptId , perfBonus
//Add suitable constructor
//Methods ----
//1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary
//
//
//1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
//Methods : 
//1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
//2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)
//
//Create suitable array to store organization details.
//Provide following options
//1. Hire Manager
//I/P : all manager details
//
//2. Hire Worker  
//I/P : all worker details
//
//3. Display information of all employees net salary (by invoking computeNetSal), 
//
//4. Exit





#include <iostream>
 using namespace std;
 
 class Employee{
 	private:
 		int id;
 		string name;
 		string deptName;
 	protected:	double salary;  //accessing in manager class
 		
 	public:
 		Employee(){
 			cout<<"---Default---";
 			id = 123;
 			name = "abc";
 			string deptName="12345";
 			salary = 50000;
		 }
		 Employee(int id,string name,string deptName,double salary){
		 	this->id = id;
		 	this->name = name;
		 	this->deptName=deptName;
		 	this->salary = salary;
		 }
		 void calSalary(){
		 	cout<<"Employee salary="<<salary<<endl;
		 }
		 void Display(){
		 	cout<<"ID = "<<id<<" Name = "<<name<<" deptname ="<<deptName<<" salary = "<<salary<<endl;
		 }
 };
 
 class Manager:public Employee{
 		private:
 			double incentives;
 			
 			
 		public:
 			Manager(){
 				cout<<"Default constructor"<<endl;
 				incentives = 20000;
 				
			 }
			 Manager(int id,string name,string deptName,double salary,double incentives):Employee(id,name,deptName,salary)
			 {
			 
			 	this->incentives = incentives;			 	
			 }
			 void MngTask(){
			 	cout<<"manager task";
			 }
			 void calSalary(){
		 	cout<<"manager salary"<<incentives+this->salary<<endl;
		 }
			 void Display(){
			 	Employee::Display();
			 	cout<<"incentive ="<<incentives<<endl;
			 }
 };
 class Worker:public Employee{
 	int hw,hr;
 	public:
	 Worker(){
 		hw=hr=1;
	 }
	Worker(int id,string name,string deptName,double salary,int hw,int hr)
	 : Employee(id,name,deptName,salary){
	 	this->hw=hw;
	 	this->hr=hr;
	 	
	 }
	 void target(){
	 	cout<<"sales person target--"<<endl;
	 }
	 void calSalary(){
	 	cout<<"Worker salary= "<<((hw*hr)+this->salary)<<endl;
	 }
 	void Display(){
 		Employee::Display();
		 cout<<"Worker= "<<hw<<" "<<hr<<endl;
		 	 }
 };
 int main(){

	Employee emp(1234,"raju","marketing",80000);
	emp.Display();
	Manager mgr(124,"raj","mas",50000,20000);
	mgr.calSalary();
	mgr.Display();
	Worker wr(506,"mukesh","work",10000,10,500);
	wr.calSalary();
	wr.Display();
// 	Employee emp2(202,"Harish",80000); 	emp2.calSalary();
//	emp2.Display(); 	
//	cout<<"Manager :-----------"<<endl;
// 	Manager mng;
//// 	mng.Display();// shows employee
//	mng.Display();
//	cout<<"manager salary : "<<endl;
//	Manager mng2(304,"Nilay",50000,23000,"IT");
//	mng2.calSalary();
//	mng2.Display();
//	
//	cout<<"SP salary : "<<endl;
//	Salesperson sp(506,"mukesh",40000,5000,2000,3000);
//	sp.target();
//	sp.calSalary();
//	sp.Display();
//	
 	return 0;
 }
 
 
 
 
 
