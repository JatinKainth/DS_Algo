#include<bits/stdc++.h>
using namespace std;

void findString(string s, string ans) {
    if (s[0] == ')') {
        cout << ans.substr(1);
        return;
    }
    
    if (s[0] == '(') findString(s.substr(1), ans+s[0]);
    else if (ans != "") findString(s.substr(1), ans+s[0]);
    else findString(s.substr(1), ans);    
}

int main() {
    string s;
    cin >> s;
    
    findString(s, "");
}
