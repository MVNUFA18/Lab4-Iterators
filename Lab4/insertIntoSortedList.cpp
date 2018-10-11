/* insertIntoSortedList.cpp
 * Author: Dante
 * Date: 10/8/2018
 * Data Structures & Algorithms
 * Insert elements into a list in a sorted order using iterators
 */

#include "pch.h"
#include <vector>
#include <list>
#include <iostream>
using namespace std;

#include "pch.h"
#include <vector>
#include <iostream>
using namespace std;

template <typename Number>
void insertSorted(list<Number>& seq, Number n) {
	// create a vector iterator
	typename list<Number>::iterator iter = seq.begin();
	while (iter != seq.end()) {		// while more remain
		if (n <= *iter) {
			seq.insert(iter, n);
			break;
		}
		++iter;
	}
	if (iter == seq.end()) {
		seq.push_back(n);
	}
}

template <typename E>
void print(list<E>& seq) {
	// create a vector iterator
	typename list<E>::iterator iter = seq.begin();
	cout << "\nSorted Result: ";
	while (iter != seq.end()) {		// while more remain
		cout << *iter << " ";
		++iter;						// advance to next
	}
	cout << endl;
}



int main() {
	list<int> nums{};
	int n;
	cout << "Enter a sequence of integers separated by spaces (0 to stop): " << endl;
	cin >> n;
	while (n != 0) {
		insertSorted(nums, n);
		cin >> n;
	}
	print(nums);
}