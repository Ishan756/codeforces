class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> revAdj(n);
        for (int u = 0; u < n; u++) {
            for (auto v : graph[u]) {
                revAdj[v].push_back(u);
            }
        }
        queue<int> q;
        vector<int> indegree(n, 0);
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            for (auto it : revAdj[i]) {
                indegree[it]++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) q.push(i);
        }
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto it : revAdj[node]) {
                indegree[it]--;
                if (indegree[it] == 0) q.push(it);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        //////////////////
    }
};