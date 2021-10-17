#include <iostream>
#include <string>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	set<string> chatroom;
	string event;
	uint64_t traffic = 0;

	while (getline(cin, event))
		switch (event.front())
		{
		case '+':
			chatroom.insert(event.substr(1, event.length() - 1));
			break;

		case '-':
			chatroom.erase(event.substr(1, event.length() - 1));
			break;

		default:
			uint64_t message_length = event.size() - (event.find(':') + 1);
			traffic += message_length * chatroom.size();
			break;
		}

	cout << traffic;
}