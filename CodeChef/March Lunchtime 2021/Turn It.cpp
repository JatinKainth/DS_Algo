#include <bits/stdc++.h>
using namespace std;

bool canMakeTurn(int u, int v, int a, int s) {
    if (u == v) return true;
    float myVelocity = (u*u) - 2*a*s;
    myVelocity = sqrt(myVelocity);
    if (myVelocity > v) return false;
    return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int u, v, a, s;
	    cin >> u >> v >> a >> s;
	    cout << (canMakeTurn(u, v, a, s)? "Yes": "No") << endl;
	}
	return 0;
}