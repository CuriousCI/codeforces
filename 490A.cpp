#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t children_number;
	cin >> children_number;

	vector<uint32_t> children(children_number);
	for (auto &child : children)
		cin >> child;

	vector<vector<uint32_t>> subjects(3);
	for (auto &subject : subjects)
		subject = vector<uint32_t>();

	size_t position = 1;
	for (auto child : children)
	{
		subjects[child - 1].push_back(position);
		position++;
	}

	uint32_t min_teams = UINT32_MAX;
	for (auto subject : subjects)
		min_teams = min(min_teams, (uint32_t)subject.size());

	cout << min_teams << endl;
	for (size_t team = 0; team < min_teams; team++)
	{
		for (auto subject : subjects)
			cout << subject[team] << ' ';
		cout << endl;
	}
}