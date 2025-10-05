#include <iostream>
#define MAX 1000000
using namespace std;

bool prime[MAX];
int n;

int main() {
    	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	for (int i = 0; i < MAX; i++) prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < MAX; i++) {
		if (prime[i] == true) {
			for (int j = i * i; j < MAX; j += i) {
				prime[j] = false;
			}
		}
	}
	
	while(1){
		int flag = 0;
		cin >> n;
		if (n == 0) break;

		for (int j = 3; j <= n / 2; j++) {
			if (prime[j] == true && prime[n - j] == true) {
				flag = 1;
				cout << n << " = " << j << " + " << n - j << '\n';
				break;
			}
		}
		if (flag == 0) cout << "Goldbach's conjecture is wrong." << '\n';
	}
	return 0;
}