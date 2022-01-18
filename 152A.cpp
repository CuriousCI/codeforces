#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t students_count, subjects_count;
	cin >> students_count >> subjects_count;

	vector<string> students_grades(students_count);
	for (auto &student_grades : students_grades)
		cin >> student_grades;

	vector<bool> successful_students(students_count, false);

	for (auto subject = 0; subject < subjects_count; subject++)
	{
		uint16_t highest_grade = 0;
		vector<uint16_t> best_students;

		for (auto student = 0; student < students_count; student++)
			if (students_grades[student][subject] > highest_grade)
			{
				highest_grade = students_grades[student][subject];
				best_students.clear();
				best_students.push_back(student);
			}
			else if (students_grades[student][subject] == highest_grade)
				best_students.push_back(student);

		for (auto best_student : best_students)
			successful_students[best_student] = true;
	}

	uint16_t best_students = 0;
	for (auto successful : successful_students)
		if (successful)
			best_students++;

	cout << best_students;
}