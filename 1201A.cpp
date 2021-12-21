#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t students_count, questions_count;
	cin >> students_count >> questions_count;

	vector<string> tests(students_count);
	for (auto &test : tests)
		cin >> test;

	vector<uint16_t> grade(questions_count);
	for (auto &item : grade)
		cin >> item;

	string answers;
	for (auto index = 0; index < questions_count; index++)
	{
		map<char, uint16_t> frequencies;
		for (auto test : tests)
			frequencies[test[index]]++;

		char mostest;
		uint16_t mostest_value = 0;
		for (auto frequency : frequencies)
			if (frequency.second > mostest_value)
			{
				mostest_value = frequency.second;
				mostest = frequency.first;
			}

		answers += mostest;
	}

	uint64_t total_grade = 0;
	for (auto test : tests)
		for (auto index = 0; index < questions_count; index++)
			if (test[index] == answers[index])
				total_grade += grade[index];

	cout << total_grade;
}