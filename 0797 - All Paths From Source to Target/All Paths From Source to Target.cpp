class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<bool> visited(graph.size(), false);
        vector<vector<int>> result;
        vector<int> path;
        path.push_back(0);
        for (auto el : graph[0]) {
            dfs(result, path, visited, el, graph);
        }
        return result;
    }
    
    void dfs(vector<vector<int>>& result, vector<int>& path, vector<bool>& visited, int vertex, const vector<vector<int>>& graph) {
        if (vertex == visited.size() - 1) {
            path.push_back(vertex);
            result.push_back(path);
            path.pop_back();
        }
        
        if (visited[vertex] == true) {
            return;
        }
        visited[vertex] = true;
        for (auto el : graph[vertex]) {
            path.push_back(vertex);
            dfs(result, path, visited, el, graph);
            path.pop_back();
        }
        visited[vertex] = false;
    }
};
