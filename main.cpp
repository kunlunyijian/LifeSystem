#include <iostream>
#include <memory>

#include "Person.h"

using namespace std;
int main()
{
	cout << "Welcome to Life System World" << endl;

	std::shared_ptr<Person> zhaoming = std::make_shared<Person>("zhaoming", 28, 1);
	std::shared_ptr<Person> quyue = std::make_shared<Person>("quyue", 28, 0);

	zhaoming->showMe();
	quyue->showMe();

	while(1);
	return 0;
}
