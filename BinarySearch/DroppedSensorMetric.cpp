int solve(vector<int>& a, vector<int>& b) {
    for(int i = 0; i < a.size(); i++){
        if (a[i] != b[i]) {
            if(a[i+1] == b[i]) return a[i];
            return b[i];
        }
    }
    return 0;
}