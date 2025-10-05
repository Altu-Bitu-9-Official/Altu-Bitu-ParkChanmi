#include <iostream>
#include <set>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	set<int> numbers; // list → numbers (집합 의미에 맞게 변경)
	int commandCount; // M → commandCount
	cin >> commandCount;

	for (int i = 0; i < commandCount; i++)
	{
		string command; // str → command
		cin >> command;

		if (command == "add")
		{
			int x;
			cin >> x;
			numbers.insert(x);
		}
		else if (command == "remove")
		{
			int x;
			cin >> x;
			numbers.erase(x);
		}
		else if (command == "check")
		{
			int x;
			cin >> x;

			if (numbers.find(x) != numbers.end())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (command == "toggle")
		{
			int x;
			cin >> x;

			if (numbers.find(x) != numbers.end())
				numbers.erase(x);
			else
				numbers.insert(x);
		}
		else if (command == "all")
		{
			for (int j = 1; j <= 20; j++)
				numbers.insert(j);
		}
		else if (command == "empty")
		{
			numbers.clear();
		}
	}
	return 0;
}