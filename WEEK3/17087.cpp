#include <iostream>
#include <cmath>
using namespace std;

int gcd(int x, int y) {
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }   
    return x;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, S;
    int distance;
    cin >> N >> S;
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        if(i == 0) 
            distance = abs(S - num);
        
        else 
            distance = gcd(distance, abs(S - num)); // S와 입력받은 수의 차이들의 최대 공약수를 구해준다.
        
    }
    cout << distance;
    return 0;
}