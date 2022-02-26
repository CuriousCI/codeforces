#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t students_count;
		string students;
		cin >> students_count >> students;

		uint16_t longest_patient_sequence = 0, temp = 0;
		bool start_count = false;
		for (auto student = 0; student < students_count; student++)
		{
			if (students[student] == 'A')
				start_count = true;

			if (start_count)
				if (students[student] == 'P')
					temp++;
				else
				{
					longest_patient_sequence = max(longest_patient_sequence, temp);
					temp = 0;
				}
		}

		longest_patient_sequence = max(longest_patient_sequence, temp);

		cout << longest_patient_sequence << endl;
	}
}