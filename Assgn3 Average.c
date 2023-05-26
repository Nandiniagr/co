#include <iostream>
#include <vector>
#include <omp.h>
#include <climits>
using namespace std;

void average_reduction(vector<int>& arr) {
	int sum = 0;
	#pragma omp parallel for reduction(+: sum)
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		}
	cout << "Average: " << (double)sum / arr.size() << endl;
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
		average_reduction(arr);
}
