#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t students_count, student;
	cin >> students_count;

	vector<uint16_t> snitches(students_count);
	for (auto &snitch : snitches)
	{
		cin >> snitch;
		snitch--;
	}

	auto culprit = [students_count, snitches](uint16_t start)
	{
		vector<uint16_t> students(students_count, 0);
		students[start]++;
		uint16_t student = start;
		while (true)
		{
			student = snitches[student];
			students[student]++;
			if (students[student] == 2)
				break;
		}

		return student;
	};

	for (auto snitch = 0; snitch < students_count; snitch++)
		cout << culprit(snitch) + 1 << ' ';
}