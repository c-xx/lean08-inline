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


	system("pause");
	return 0;
}