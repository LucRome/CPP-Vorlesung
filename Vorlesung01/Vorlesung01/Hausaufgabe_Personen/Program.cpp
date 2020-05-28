#include "Program.h"
#include "Person.h"
#include "Enums.h"
#include <iostream>
#include <string>

void main() {

	int nr_speaker = 0, nr_partner = 0;
	string name;

	Person persons[4] = {
		Person(de, "Hildegard"),
		Person(fr, "Phillippe"),
		Person(it, "Tony"),
		Person(en, "Mary")
	};

	while (true) {
		for (int i = 0; i < 4; i++) {
			cout << "[" << i << "] : " << persons[i].get_name() << endl;
		}
		cout << "\n Please enter number of Speaker: " << endl;
		cin >> nr_speaker;
		cout << "\n Please enter number of Partner: " << endl;
		cin >> nr_partner;
		
		persons[nr_speaker].talkTo(persons[nr_partner]);
	}
}