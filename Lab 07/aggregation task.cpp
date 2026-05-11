#include <iostream>
using namespace std;

class Calculator{
	public:
		double add(double a, double b){
			return a + b;
		}
		
		double multiply(double a, double b){
			return a * b;
		}
};

class Student{
	Calculator* calc;  //Aggregation: uses an external calculator
public:
	Student(Calculator* c){
		calc = c;
	}
	
	void solveAddition(double a, double b){
		if(calc){
			std::cout<<"Addition result: "<< calc->add(a,b)<<endl;
		}
	}
	
		void solveMultiplication(double a, double b){
		if(calc){
			std::cout<<"Addition result: "<< calc->multiply(a,b)<<endl;
		}
	}
	
};
int main()
{
	Calculator myCalculator;  //Created outside the student 
	
	Student s1(&myCalculator);
	Student s2(&myCalculator);
	
	std::cout<<"--- Student 1 ---\n";
	s1.solveAddition(8, 3);
	s1.solveMultiplication(4, 5);
	
	std::cout<<"\n--- Student 2 ---\n";
	s2.solveAddition(10, 2);
	s2.solveMultiplication(6, 7);
	
	return 0;
		
}






