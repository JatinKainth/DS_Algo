#include <bits/stdc++.h>
using namespace std;

int noOfChanges(vector<int> f, vector<int> c) {
    int ptrF = 0, ptrC = 0;
    char ch = 'f';
    int count = 0;
    
    while (ptrF < f.size() && ptrC < c.size()) {
        if (f[ptrF] < c[ptrC]) {
            if (ch == 'c') {
                ch = 'f';
                count++;
                ptrF++;
            }else ptrF++;
        } else if (f[ptrF] > c[ptrC]) {
            if (ch == 'f') {
                ch = 'c';
                count++;
                ptrC++;
            }else ptrC++;
        }
    }
    
    if (ptrF < f.size() && ch == 'c') count++;
    else if (ptrC < c.size() && ch == 'f') count++;
    return count;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin >> n >> m;
	    vector<int> f;
	    while(n--) {
	        int temp;
	        cin >> temp;
	        f.push_back(temp);
	    }
	    
	    vector<int> c;
	    while(m--) {
	        int temp;
	        cin >> temp;
	        c.push_back(temp);
	    }
	    cout << noOfChanges(f, c) << endl;
	}
	return 0;
}
