#include <bits/stdc++.h>
using namespace std;

bool canWin(int r, int o, int c) {
    int overLeft = 20 - o;
    int ballsLeft = overLeft*6;
    int maxRunPossible = 6*ballsLeft;
    if (maxRunPossible + c > r) return true;
    return false;
}

int main() {
	int r, o ,c;
	cin >> r >> o >> c;
	cout << (canWin(r, o ,c)? "Yes": "No") << endl;
	return 0;
}
