bool solve(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int i: nums) 
        freq[i]++;
    
    unordered_set<int> st;
    for (auto i: freq)
        st.insert(i.second);

    bool ans = st.size() == freq.size();
    return ans;
}