#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	queue<int> qq;

	for (int i = 1; i <= n; i++) qq.push(i);

	int type = 0;
	while (qq.size()!=1) { 
		if (type%2==0) { 
			qq.pop();
		}
		else { 
			qq.push(qq.front());
			qq.pop();
		}
		type++;
	}
	
	cout << qq.front() << '\n';
}