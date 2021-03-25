#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
	stack<string> revString;
	for (int i = 0; i < s.length(); i++) {
		string temp = "";
		while (s[i] != ' ' && i < s.length()) {
			temp += s[i];
			i++;
		}
		revString.push(temp);
	}

	s = "";
	while(!revString.empty()) {
		s += revString.top() + ' ';
		revString.pop();
	}
	return s;
}

int main(){
	string str = "hey, how are you";
	string reverseStr = reverseString(str);
	for (int i = 0; i < reverseStr.length(); i++) {
		cout << reverseStr[i];
	}
	cout << endl;
	return 0;
}