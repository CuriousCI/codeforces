#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Player
{
	uint32_t speed, delay;

	uint32_t total_time(uint32_t characters)
	{
		return this->delay * 2 + this->speed * characters;
	}
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	Player first, second;
	uint32_t characters;
	cin >> characters >> first.speed >> second.speed >> first.delay >> second.delay;
	if (first.total_time(characters) == second.total_time(characters))
		cout << "Friendship";
	else
		cout << (first.total_time(characters) < second.total_time(characters) ? "First" : "Second");
}