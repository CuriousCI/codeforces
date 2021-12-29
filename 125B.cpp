#include <iostream>
#include <stack>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string file;
	cin >> file;

	stack<char> chars;
	for (auto character : file)
		if (character != '<' && character != '>')
			chars.push(character);
}