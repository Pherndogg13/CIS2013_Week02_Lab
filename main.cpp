#include <iostream>
using namespace std;
int main(){
	
	int number = 1;
	int total = 0;
	
	while(number <= 1000){
		cout << "our number is " << number << endl;
		total = total + number;
		cout << "Our total is " << total << endl;
		number++;
	}
	return 0;
}