#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string scale, weights;
	cin >> scale >> weights;

	string left, right;

	uint32_t weight;
	for (weight = 0; weight < scale.length(); weight++)
		if (scale[weight] != '|')
			left += scale[weight];
		else
			break;

	for (weight++; weight < scale.length(); weight++)
		right += scale[weight];

	weight = 0;
	while (right.length() < left.length() && weight < weights.length())
	{
		right += weights[weight];
		weight++;
	}

	while (left.length() < right.length() && weight < weights.length())
	{
		left = weights[weight] + left;
		weight++;
	}

	for (; weight < weights.length(); weight += 2)
	{
		left = weights[weight] + left;
		if (weight + 1 < weights.length())
			right += weights[weight + 1];
	}

	if (left.length() == right.length())
		cout << left << '|' << right;
	else
		cout << "Impossible";
}