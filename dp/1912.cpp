#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  cout.tie(NULL);
  int dp[100000];
  int arr[100000];
  int N;
  int m;
  cin >> N;
  for(int i =0; i < N; i++){
    cin >> arr[i];
    dp[i] =arr[i];
  }
  m =dp[0];
  for(int j = 1; j < N; j++){
    dp[j] = max(dp[j], dp[j-1]+arr[j]);
    if(m < dp[j]){
      m = dp[j];
    }

  }
  cout << m << endl;
}