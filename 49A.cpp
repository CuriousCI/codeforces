#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string question;
	getline(cin, question);
	auto offset = 1;
	char letter = question[question.length() - offset];
	while ((letter < 'a' || letter > 'z') && (letter < 'A' || letter > 'Z'))
	{
		offset++;
		letter = question[question.length() - offset];
	}
	cout << (((string) "aeiouyAEIOUY").find(question[question.length() - offset]) != string::npos ? "YES" : "NO");
}