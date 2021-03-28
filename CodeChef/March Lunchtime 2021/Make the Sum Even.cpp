#include <bits/stdc++.h>
using namespace std;

int makeSumEven(vector<int> arr) {
    int sum = 0, evenCount = 0;
    for (auto i: arr) {
        if (i%2 == 0) evenCount++;
        sum += i;
    }

    if (sum%2 == 0) return 0;
    if (evenCount > 0) return 1;
    return -1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> arr;
	    while(n--) {
	        int temp;
	        cin >> temp;
	        arr.push_back(temp);
	    }
	    cout << makeSumEven(arr) << endl;
	}
	return 0;
}
