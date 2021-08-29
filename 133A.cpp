#include <iostream>
#include <regex>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string program;
	cin >> program;

	bool found = program.find('H') != string::npos ||
				 program.find('Q') != string::npos ||
				 program.find('9') != string::npos;

	cout << (found ? "YES" : "NO");
}