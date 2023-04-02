#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <climits>

#define INF INT_MAX

using namespace std;

int V, E, K;
vector <pair<int,int>> arr[20001];
int ans[20001] ;

int main(){

  cin >> V >> E >> K;

  fill(ans, ans+V+1, INF);


  for(int i = 0; i < E; i++){
    int u, v, w;
    cin >> u >> v >> w;
    arr[u].push_back({w,v});
  }

  priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>> > minHeap;

  ans[K] = 0;
  minHeap.push({ans[K],K});
  while(!minHeap.empty()){
    auto cur = minHeap.top();
    minHeap.pop();

    int distance = cur.first;
    int index = cur.second;

    if(ans[index] < distance)
      continue;

    for(auto next : arr[index]){
      int cost = next.first;
      int next_index  = next.second;

      if(ans[next_index] > distance + cost){
        ans[next_index] = distance +cost;
        minHeap.push({ans[next_index], next_index});
      }
    }
  }

  for(int i = 1; i <=V; i++){
    if(ans[i] == INF)
      cout << "INF\n";
    else
      cout << ans[i] << "\n";
  }

}
