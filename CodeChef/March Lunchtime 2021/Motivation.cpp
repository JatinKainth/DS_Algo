#include <bits/stdc++.h>
using namespace std;

int movieCanStore(vector<int> arr) {
    int maxRating = 0;
    for (auto i:arr) 
        maxRating = max(maxRating, i);
    return maxRating;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    vector<int> arr;
	    while(n--) {
	        int s,r;
	        cin >> s >> r;
	        if (s <= x) arr.push_back(r);
	    }
	    cout << movieCanStore(arr) << endl;
	}
	return 0;
}
