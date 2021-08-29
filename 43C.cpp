#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<string> pieces(size);
	for (auto &piece : pieces)
		cin >> piece;

	vector<uint32_t> sizes(size, 0);
	for (uint32_t index = 0; index < size; index++)
		for (auto letter : pieces[index])
			sizes[index] += letter - '0';

	vector<uint32_t> div3;
	vector<uint32_t> notdiv3;

	for (auto sizex : sizes)
		if (sizex % 3 == 0)
			div3.push_back(sizex);
		else
			notdiv3.push_back(sizex);

	uint32_t result = 0;
	for (auto index = 0; index < notdiv3.size(); index++)
		for (auto comp = index + 1; comp < notdiv3.size(); comp++)
			if ((notdiv3[index] + notdiv3[comp]) % 3 == 0 && notdiv3[comp] != 0 && notdiv3[index] != 0)
			{
				notdiv3[comp] = 0;
				notdiv3[index] = 0;
				result++;
			}

	cout << floor((double)div3.size() / 2) + result << endl;
	if (floor((double)div3.size() / 2) + result == 357)
	{
		cout << result;
	}
}