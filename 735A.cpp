#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t course_length, jump;
	string course;
	cin >> course_length >> jump >> course;

	uint16_t grasshopper, insect;
	for (auto index = 0; index < course_length; index++)
	{
		if (course[index] == 'G')
			grasshopper = index;
		if (course[index] == 'T')
			insect = index;
	}

	if (insect < grasshopper)
	{
		auto swap = grasshopper;
		grasshopper = insect;
		insect = swap;
	}

	if ((grasshopper - insect) % jump)
		cout << "NO";
	else
	{
		bool is_jumpable = true;
		for (auto index = grasshopper + jump; index < insect && is_jumpable; index += jump)
			is_jumpable = course[index] == '.';

		cout << (is_jumpable ? "YES" : "NO");
	}
}