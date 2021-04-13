int solve(string s) {
    stack<char> st;
    int count = 0;

    for (auto i: s) {
        if (i == '(')
            st.push(i);
        else {
            if (st.empty())
                continue;
            st.pop();
            count += 2;

        }
    }
    return count;
}