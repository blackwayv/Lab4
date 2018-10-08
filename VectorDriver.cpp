#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector);

  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

  // add numbers test
  vector<short> random_vector(0);
  add_numbers(random_vector);
  cout << "new vector with 10 random numbers: ";
  print(random_vector);
  cout << endl;

  // print even test
  cout << "all random indexed numbers in the previous vector:";
  print_even(random_vector);
  cout << endl;

  // is present test
  int number = 41;
  if (is_present(random_vector, number)) {
	  cout << number << " is contained in the vector!" << endl;
  }
  else {
	  cout << number << " is not contained in the vector!" << endl;
  }

  // sort test (don't need a function, works by itself)
  vector<short> small_vector{ 95,22,56,87,3 };
  cout << "before sorting: ";
  print(small_vector);
  cout << endl;
  std::sort(small_vector.begin(), small_vector.end());
  cout << "after sorting: ";
  print(small_vector);
  cout << endl;

  system("pause");
  return 0;
}
