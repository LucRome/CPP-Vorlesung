#include "Program.h"
#include "Location.h";
#include "Car.h";
#include <cstdio>;




Location locations[4] = {
	Location(12, 12, "a"),
	Location(125, 1655, "basjk"),
	Location(52, 23, "ban"),
	Location(12, 4, "nans")
};

void main() {
	Car car = Car(0, 0, 5);

	int usedFuel = 0;
	int new_x = 0, new_y = 0;
	char *p_new_name;
	for (int i = 0; i < 4; i++) {
		new_x = locations[i].get_x();
		new_y = locations[i].get_y();
		p_new_name = locations[i].get_name();
		
		usedFuel = car.drive(new_x, new_y);

		printf("\nnew Location: %s | x: %d | y: %d | used Fuel: %d L", p_new_name, new_x, new_y, usedFuel);
	}

	

}

