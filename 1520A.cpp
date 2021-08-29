#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, chars;
	cin >> cases;

	string work;
	bool suspicious;
	char last_task;
	while (cases--)
	{
		cin >> chars >> work;
		suspicious = false;
		last_task = work.front();

		set<char> tasks;
		for (auto task : work)
		{
			if (tasks.find(task) != tasks.end() && last_task != task)
			{
				suspicious = true;
				break;
			}
			last_task = task;
			tasks.insert(task);
		}

		cout << (suspicious ? "NO" : "YES") << endl;
	}
}