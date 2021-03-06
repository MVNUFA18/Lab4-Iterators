/* VectorSummation.cpp
 * Author: Dante
 * Date: 10/8/2018
 * Data Structures & Algorithms
 * Use an STL iterator to total all elements in a vector
 */

#include "pch.h"
#include <vector>
#include <iostream>
using namespace std;

template <typename E>
E sum(vector<E>& seq) {
	E total = 0;
	// create a vector iterator
	typename vector<E>::iterator iter = seq.begin();
	while (iter != seq.end()) {		// while more remain
		total += *iter;				// update running total
		++iter;						// advance to next
	}
	return total;
}

int main() {
	vector<int> nums;
	vector<double> nums2;
	// input a list of integers
	int n;
	cout << "Enter a sequence of integers separated by spaces (0 to stop):" << endl;
	cin >> n;
	while (n != 0) {
		nums.push_back(n);
		cin >> n;
	}
	cout << "The sum is: " << sum(nums) << endl;

	// input a list of integers
	double n2;
	cout << "Enter a sequence of real numbers separated by spaces (0 to stop):" << endl;
	cin >> n2;
	while (n2 != 0) {
		nums2.push_back(n2);
		cin >> n2;
	}
	cout << "The sum is: " << sum(nums2) << endl;
}
