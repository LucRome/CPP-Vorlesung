#include "User.h"

int main() {
	User users[] = {
		User("Carl"),
		User(),
		User("Ella"),
		User("Hanna")
	};

	for (int i = 0; i < 4; i++) {
		users[i].print();
	}
}