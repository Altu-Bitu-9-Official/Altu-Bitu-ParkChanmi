#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int w, i0, t, day, I, A;

    cin >> w >> i0 >> t;
    cin >> day >> I >> A;

    int w1 = w;
    int w2 = w;

    int i1 = i0;

    for (int i=0; i<day; i++){
        w1 += I - (i0 + A);
        w2 += I- (i1 + A);
        if (abs(I - (i1 + A)) > t)
            i1 += floor((I - (i1+A))/2);
    }

    if (w1 <= 0)
        cout << "Danger Diet\n";
    else
        cout << w1 << " " << i0 << "\n";

    if (w2 <= 0 || i1 <= 0)
        cout << "Danger Diet\n";
    else{
        cout << w2 << " " << i1 << " ";
        if (i0 - i1 > 0)
            cout << "YOYO";
        else
            cout << "NO";
    }

    return 0;
}