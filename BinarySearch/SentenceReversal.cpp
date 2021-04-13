void reverseString(vector<string>& s, int low, int high) {
    while(low <= high)
        swap(s[low], s[high]),
        low++,
        high--;
}

vector<string> solve(vector<string>& s) {
    int n = s.size();

    int low = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == " ") {
            reverseString(s, low, i-1);
            low = i+1;
        }
    }
    reverseString(s, low, n-1);
    reverseString(s, 0, n-1);
    return s;
}