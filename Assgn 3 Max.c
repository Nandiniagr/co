#include <iostream>
#include <vector>
#include <omp.h>
#include <climits>
using namespace std;

void max_reduction(vector<int>& arr) {
	int max_value = INT_MIN;
	#pragma omp parallel for reduction(max: max_value)
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > max_value) {
		max_value = arr[i];
		}
	}
	cout << "Maximum value: " << max_value << endl;
}

int main() {
	vector<int> arr;
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(9);
	arr.push_back(1);
	arr.push_back(7);
	arr.push_back(6);
	arr.push_back(8);
	arr.push_back(3);
	arr.push_back(4);

	max_reduction(arr);
}