/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    vector<int> arr;
    queue<Tree*> q;
    q.push(root);

    while (!q.empty()) {
        Tree* temp = q.front();
        q.pop();
        arr.push_back(temp-> val);
        if (temp-> left) 
            q.push(temp-> left);
        if (temp-> right)
            q.push(temp-> right);
    }
    return arr;
}