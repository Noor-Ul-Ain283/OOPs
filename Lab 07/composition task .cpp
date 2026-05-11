#include <iostream>
using namespace std;

class Display{
	double lastValue;
	public:
		Display(){
			lastValue = 0.0;
		}
		
		void show(double value){
			lastValue = value;
			std::cout<<"Result: "<<lastValue <<endl;
		}
		double getLastValue() const {
		return lastValue;
		}
};
class Calculator{
	Display screen;   //COMPOSITION: screen is a part of Calculator
	public:
		Calculator() {}
		
		void add(double a, double b){
			double result = a + b;
			screen.show(result);
		}
		
		void multiply(double a, double b){
			double result = a * b;
			screen.show(result);
		}
		
		void showPreviousResult() const{
		std::cout<<"Previous result: "<< screen.getLastValue() <<endl;
		}
};

int main(){
	Calculator calc;
	
	calc.add(10,5);               //Output: 15
	calc.multiply(3,7);          //Output: 21
	calc.showPreviousResult();   //Output: 21
	
	return 0;
}












