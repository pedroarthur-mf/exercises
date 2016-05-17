// g++ -Wall -std=c++11 src/drive.cpp -o bin/drive -I include/
// ./bin/drive
#include <iostream>
#include <assert.h>

#include "vector.h"

using namespace std;

int main( void ){
	Vector < int > myList;

	assert(myList.empty() == true);
	assert(myList.size() == 0);

	// Pushing 3 elements (1, 2, 3)
	myList.push_back(1);
	assert(myList.back() == 1);
	myList.push_back(2);
	assert(myList.back() == 2);
	myList.push_back(3);
	assert(myList.back() == 3);


	assert(myList.empty() == false);
	assert(myList.size() == 3);

	// Clearing vector
	myList.clear();
	assert(myList.empty() == true);

	// Pushing 4 elements (4, 3, 2, 1)
	
	myList.push_back(4);
	assert(myList.back() == 4);
	myList.push_back(3);
	assert(myList.back() == 3);
	myList.push_back(2);
	assert(myList.back() == 2);
	myList.push_back(1);
	assert(myList.back() == 1);

	assert(myList.size() == 4);

	myList.pop_back();
	assert(myList.back() == 2);
	assert(myList.size() == 3);
	myList.pop_back();
	assert(myList.back() == 3);
	assert(myList.size() == 2);
	myList.push_back(1);
	assert(myList.back() == 1);

	myList.clear();
	assert(myList.size() == 0);

	myList.pop_back();

	myList.push_back(1);
	assert(myList.back() == 1);
	
	return 0;
}