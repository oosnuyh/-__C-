#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  int P[1001];
  cin >> N;

  for(int i =0; i < N; i++){
    cin >> P[i];
  }

  sort(P, P+N);
  int sum = 0;
  for(int i =0; i < N; i++){
    for(int j =0; j<=i; j++){
      sum += P[j];
    }
  }
  cout << sum;

}