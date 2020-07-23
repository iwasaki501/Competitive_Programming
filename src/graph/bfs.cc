// Breadth first search

#include <vector>
#include <queue>

#include "./graph.cc"

// snippet-begin
template <class T>
std::vector<T> bfs(const graph<T>& g, int s) {
  std::vector<T> dist(g.n_, -1);
  dist[s] = 0;
  std::queue<int> que;
  que.emplace(s);
  while (!que.empty()) {
    int cur = que.front();
    que.pop();
    for (int id : g.data_[cur]) {
      auto& e = g.edges_[id];
      int nxt = e.from ^ e.to ^ cur;
      if (dist[nxt] != -1) continue;
      dist[nxt] = dist[cur] + e.cost;
      que.emplace(nxt);
    }
  }
  return dist;
}
// snippet-end
