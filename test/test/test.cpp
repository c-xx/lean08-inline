#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;


int main(void) {

	Teacher t;
	cout << t.getName() << " " << t.getAge() << " " << t.getGender() << endl;
	t.teach();

	Teacher t1("jim", 52);
	cout << t1.getName() << " " << t1.getAge() << " " << t1.getGender() << endl;
	t1.teach();


	system("pause");
	return 0;
}