#include <iostream>
using namespace std;
class Person {
public:
	Person(string name, int age, char sex);
	void showMe();
	virtual ~Person();
private:
	string mName;
	int mAge;
	char mSex; // 0 boy, 1 girl
};

