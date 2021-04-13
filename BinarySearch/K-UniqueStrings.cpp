int solve(string s, int k) {
    unordered_map<char, int> freq;

    for (auto i: s)
        freq[i]++;

    int n = freq.size() - k;
    if (n == 0)
        return n;
    
    vector<int> arr;
    for (auto i: freq)
        arr.push_back(i.second);

    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}