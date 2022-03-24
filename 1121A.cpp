#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t students_number, schools_number, chosen_ones_number;
	cin >> students_number >> schools_number >> chosen_ones_number;

	vector<uint16_t> students(students_number);
	for (auto &student : students)
		cin >> student;

	vector<vector<uint16_t>> schools(schools_number);
	for (auto student : students)
	{
		uint16_t school;
		cin >> school;

		schools[school - 1].push_back(student);
	}

	vector<uint16_t> chosen_ones(chosen_ones_number);
	for (auto &chosen_one : chosen_ones)
		cin >> chosen_one;
}