#include <iostream>
#include <regex>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string password;
	cin >> password;
	cout << (regex_search(password, regex("[0-9]")) && regex_search(password, regex("[A-Z]")) && regex_search(password, regex("[a-z]")) && password.length() >= 5 ? "Correct" : "Too weak");
}