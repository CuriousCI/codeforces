#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int testcases_number;
    cin >> testcases_number;

    while (testcases_number > 0)
    {
        long long array_length;
        cin >> array_length;

        set<long long> numbers;
        long long number;

        for (int _ = 0; _ < array_length; _++)
        {
            cin >> number;
            numbers.insert(number);
        }

        cout << numbers.size() << '\n';

        testcases_number--;
    }
    
}