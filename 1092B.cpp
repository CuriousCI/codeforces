#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<uint16_t> students(size);
	for (auto &student : students)
		cin >> student;

	sort(students.begin(), students.end());
	auto problems = 0;
	for (auto student = 1; student < size; student += 2)
		problems += students[student] - students[student - 1];

	cout << problems;
}