#include "Person.h"
Person::Person(string name, int age, char sex) : mName(name), mAge(age), mSex(sex) {

}

void Person::showMe()
{
	cout << "name: " << mName << " age: " << mAge << " sex: " << (int)mSex << endl;
}

Person::~Person()
{
	cout << mName << " ~Person" << endl;
}
