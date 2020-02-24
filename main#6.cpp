#include <iostream>

using namespace std;

// class Elevator
class Elevator {
public:
int floor; // the floor the elevator is currently present

// default constructor: set the floor to 1
Elevator() {
	floor = 1;
}

// set the floor
void setFloor(int pos) {
	floor = pos;
}

// get the floor
int getFloor() {
	return floor;
}
};

// print the Elevators status
void printElevatorStatus(Elevator a, Elevator b, Elevator c) {
	cout << "\nElevator Status: " << endl;
	cout << "A\tB\tC\t\n";
	cout << a.getFloor() << "\t" << b.getFloor() << "\t" << c.getFloor() << endl;
}
int main() {
	Elevator e[3]; // create an array of 3 Elevators
	int liftNumber; // the lift number of the elevator requested by user
	while(true) {
// print the elevator status first
		printElevatorStatus(e[0], e[1], e[2]);

// ask the user his choice of elevator
		cout << "Which elevator do you want(1=A, 2=B, 3=C, or other to exit)? ";
		cin >> liftNumber;

// exit for any number other than 1, 2 or 3
		if(liftNumber < 1 || liftNumber > 3) {
			return 0;
		}

// If the elevator requested is not on 1st floor, move it to 1st floor
// first
		cout << "Starting at floor " << e[liftNumber - 1].getFloor() << endl;
		for(int i = e[liftNumber - 1].getFloor() - 1; i>=1; i--) {
			cout << "\tGoing down - now at floor " << i << endl;
		}
//cout << "Stopping at floor 1" << endl;
		//set the elevator floor value to 1
		e[liftNumber - 1].setFloor(1);

// ask the user the floor number
		int floorNumber;
		cout << "Which floor do you want? ";
		cin >> floorNumber;

// Move the lift to the requested floor
		for(int i=2; i<= floorNumber; i++) {
			cout << "\tGoing up - now at floor " << i << endl;
		}
		cout << "Stopping at floor " << floorNumber << endl;
// set the elevator's floor value to floorNumber requested by user
		e[liftNumber - 1].setFloor(floorNumber);
	}

	return 0;
}
