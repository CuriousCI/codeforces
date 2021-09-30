#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string text;
	cin >> text;

	uint64_t count = 0;
	for (auto first = 0; first < text.length(); first++)
		if (text[first] == 'Q')
			for (auto second = first + 1; second < text.length(); second++)
				if (text[second] == 'A')
					for (auto third = second + 1; third < text.length(); third++)
						if (text[third] == 'Q')
							count++;

	cout << count;
}