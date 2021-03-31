#include<bits/stdc++.h>
using namespace std;

void findString(string s, string ans, string copyS) {
    if (s.length() == 0) {
        if (ans > copyS) cout << ans << endl;
        return;
    }
    
    for (int i=0; i<s.length(); i++) {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i+1);
        findString(ros, ans+ch, copyS);
    }
}

int main() {
    string s;
    cin >> s;
    string copyS = s;
    sort(s.begin(), s.end());
    findString(s, "", copyS);
}