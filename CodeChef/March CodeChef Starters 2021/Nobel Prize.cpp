#include <bits/stdc++.h>
using namespace std;

bool canWin(vector<int> arr, int m) {
    unordered_set<int> s(arr.begin(), arr.end());
    
    for (int i = 1; i < m+1; i++) {
        if (s.count(i) == 0) return true;
    }
    return false;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin >> n >> m;
	    vector<int> arr;
	    while(n--) {
	        int temp;
	        cin >> temp;
	        arr.push_back(temp);
	    }
	    cout << (canWin(arr, m)? "Yes": "No") << endl;
	}
	return 0;
}
