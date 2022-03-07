#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t digits_number;
	string number;

	cin >> digits_number >> number;

	vector<string> encoder = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
	string sequence;

	for (auto digit : number)
		sequence += encoder[digit - '0'];

	ranges::sort(sequence);
	ranges::reverse(sequence);

	cout << sequence;
}