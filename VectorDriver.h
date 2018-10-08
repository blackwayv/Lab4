/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// adds 10 random numbers to the vector
void add_numbers(vector<short> &data) {
	for (int i = 0; i < 10; i++) {
		data.push_back(rand());
	}
}

// prints each number stored at an even index in specifically a 10 sized vector
void print_even(const vector<short> &data) {
	cout << "<" << data.at(0);
	for (int i = 2; i < 10; i++) {
		if (i % 2 == 0) {
			cout << ", " << data.at(i);
		}
	}
	cout << ">";
}

// returns true if the entered value is in the vector
bool is_present(const vector<short> &data, short value) {
	std::vector<short>::const_iterator iter = data.begin();
	while (iter != data.end()) {
		if (*iter == value) {
			return true;
		}
	}
	return false;
}

// no sort function, it works by itself. Tested in main()