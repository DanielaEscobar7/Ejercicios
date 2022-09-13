// program ti find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main(){
	int number = 0;
	int sum = 0;
	
	do {
		sum += number;
		
		//take input from the user 
		cout << "enter a number: ";
		cin >> number;
	}
	while (number >= 0);
	
	// display the sum
	cout << "\nThe sum is " << sum << endl;
	
	return 0;
}
