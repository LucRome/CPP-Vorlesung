#include "Location.h"
#include "Sight.h"
#include "Toilett.h"


int main() {
	Location* paris = new Location(3, 2, "Paris");
	Location* eiffeltower = new Sight(3, 3, "Eiffeltower", "all of Paris");
	Location* shithouse = new Toilett(4, 3, "Shithouse", "Shit");

	paris->visit();
	eiffeltower->visit();
	shithouse->visit();
}