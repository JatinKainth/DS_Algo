bool solve(string s) {
    unordered_map<char, int> freq;
    for (auto i: s)
        freq[i]++;

    int oddFreqCount = 0;
    for (auto i: freq)
        if (i.second%2!=0) oddFreqCount++;

    if (s.length()%2!=0 and oddFreqCount == 1)
        return true;
    if (oddFreqCount == 0) 
        return true;
    return false;
}