#include <string>
using namespace std;
class Teacher
{
public:
	Teacher();
	Teacher(string name,int age,string gender="��");

	void setName(string _name);
	string getName();

	void setGender(string _gender);
	string getGender();

	void setAge(int _age);
	int getAge();

	void teach();
private:
	string m_strName;
	string m_strGender;
	int m_iAge;
};
