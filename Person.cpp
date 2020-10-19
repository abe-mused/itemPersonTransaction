#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string fn, string ln){
	firstName = fn;
	lastName = ln;
}

void Person::showPerson(){
	cout<<firstName<<" "<<lastName<<endl;
}
