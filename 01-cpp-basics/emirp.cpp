#include <iostream>
using namespace std;
 
int main() {
    int n, e, r, s = 0;
    cin >> n;

    e = n;

    while (n > 0) {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }

    bool flag = true;

    if (e < 2 || s < 2) {
        flag = false;
    }

    for (int i = 2; i * i <= e && flag; i++) {
        if (e % i == 0)
            flag = false;
    }

    for (int i = 2; i * i <= s && flag; i++) {
        if (s % i == 0)
            flag = false;
    }

    if (flag && e!= s)
        cout << "s";
    else
        cout << "no";

    return 0;
}
