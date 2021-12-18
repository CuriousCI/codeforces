#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	uint64_t right_offset = number.length() - 1, left_offset = 0;
	while (number[right_offset] == '0')
		right_offset--;
	while (number[left_offset] == '0')
		left_offset--;

	if (left_offset > right_offset)
		cout << "NO";
	else
	{
		bool is_palindrome = true;
		for (auto index = left_offset; index <= right_offset && is_palindrome; index++)
			is_palindrome = number[index] == number[right_offset - index];

		cout << (is_palindrome ? "YES" : "NO");
	}
}