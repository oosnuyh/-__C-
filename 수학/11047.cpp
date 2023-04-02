#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, K;
  cin >> N >> K;
  int arr[11];
  int cnt = 0;
  for(int i =0; i<N; i++){
    cin >> arr[i];
  }
  for(int i = N-1; i >= 0; i--){
    cnt += K /arr[i];
    K %= arr[i];
  }
  cout << cnt;
}