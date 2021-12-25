#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string token;
	vector<string> tokens;
	while (getline(cin, token, ','))
		tokens.push_back(token);

	set<uint64_t> distinct_numbers;
	for (auto token : tokens)
		distinct_numbers.insert(stoi(token));

	vector<uint64_t> numbers;
	for (auto number : distinct_numbers)
		numbers.push_back(number);

	uint64_t sequence = numbers.front();
	for (auto index = 1; index < numbers.size(); index++)
	{
		if (numbers[index] != numbers[index - 1] + 1)
		{
			if (numbers[index - 1] > sequence)
				cout << sequence << '-' << numbers[index - 1];
			else
				cout << sequence;

			cout << ',';

			sequence = numbers[index];
		}
	}

	if (numbers[numbers.size() - 1] > sequence)
		cout << sequence << '-' << numbers[numbers.size() - 1];
	else
		cout << sequence;
}