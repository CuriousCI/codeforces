#include <iostream>
#include <vector>
#include <fstream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	ifstream input("input.txt");
	ofstream output("output.txt");

	uint16_t
		ball_position,
		shuffles = 3,
		left,
		right;

	vector<bool> cups(3, false);
	input >> ball_position;

	cups[ball_position - 1] = true;

	while (shuffles--)
	{
		input >> left >> right;
		bool temp = cups[left - 1];
		cups[left - 1] = cups[right - 1];
		cups[right - 1] = temp;
	}

	for (auto index = 0; index < 3; index++)
		if (cups[index])
			output << index + 1;

	input.close();
	output.close();
}