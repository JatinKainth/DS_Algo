#include <bits/stdc++.h>
using namespace std;

int creditsCharged(int login, int logout, int y) {
    if (logout <= 6*3600) return 0;
    if (login < 6*3600) return (logout - (6*3600))*y;
    return (logout-login)*y;
}

int main() {
	int d, y;
	cin >> d >> y;
	while (d--) {
	    int n;
	    cin >> n;
	    int sumOfAllUsers = 0;
	    while (n--) {
	        int login, logout;
	        cin >> login >> logout;
	        sumOfAllUsers += creditsCharged(login, logout, y);
	    }
	    cout << sumOfAllUsers << endl;
	}
	return 0;
}
