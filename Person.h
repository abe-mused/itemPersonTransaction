#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
	private:
		string firstName, lastName;
	public:
		Person(string, string);
		void showPerson();
	protected:
};

#endif
