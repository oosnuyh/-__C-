#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, k;
  cin >> N >> k;
  vector<int> dp(100001,0);
  vector<int> coin(N);
  for(int i = 0; i < N; i++){
    cin >> coin[i];
  }
  dp[0] =1;
  for(int i=0; i < N; i++){
    for(int j =coin[i]; j<=k; j++){
      dp[j] += dp[j -coin[i]];
      
    }
  }
  cout << dp[k];
}