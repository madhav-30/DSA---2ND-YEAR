#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int a = (int)1e9;
    int b = -1000;

    int s = 0, r = 0;

    for (int i = 0; i < n; i++) {
        int x;

        scanf("%d", &x);

        if (x < a) {
            r++;
            a = x;
        }

        if (x > b) {
            s++;
            b = x;
        }
    }

    cout << s - 1 << ' ' << r - 1 << endl;

    return 0;
}
