#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string word;
	cin >> word;

	bool is_palindrome = true;
	for (auto index = 0; index < word.length() / 2 && is_palindrome; index++)
		is_palindrome = word[index] == word[word.length() - 1 - index];
	bool is_one_letter = true;
	for (auto index = 0; index < word.length() - 1 && is_one_letter; index++)
		is_one_letter = word[index] == word[index + 1];

	if (is_one_letter)
		cout << 0;
	else
		cout << (is_palindrome ? word.length() - 1 : word.length());
}