class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        visited = len(graph) * [False]
        visited[0] = True
        result = []
        for el in graph[0]:
            self.dfs(graph, result, [0], el, visited)
        return result
        
    def dfs(self, graph: List[List[int]], result: List[List[int]], path: List[int], vertex: int, visited: List[bool]) -> None:
        if vertex == len(graph) - 1:
            path.append(vertex)
            result.append(path)
            return

        if visited[vertex] == True:
            return
        
        visited[vertex] = True
        for el in graph[vertex]:
            self.dfs(graph, result, path + [vertex], el, visited)
        visited[vertex] = False
