#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;


int main(void) {

	Teacher t;
	t.setName("����");
	t.setGender("��");
	t.setAge(31);

	cout << t.getName() << " " << t.getAge() << " " << t.getGender() << endl;
	t.teach();

	Teacher t1("jim", 52);
	t1.setGender("Ů");
	cout << t1.getName() << " " << t1.getAge() << " " << t1.getGender() << endl;
	t1.teach();


	system("pause");
	return 0;
}