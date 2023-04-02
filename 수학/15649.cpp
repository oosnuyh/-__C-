#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  cin >> N >> M;

  for(int i =1; i<=N; i++){
    int cnt = 1;
    cout << i <<" ";
    for(int j =1; j <= N; j++){
      if(cnt == M){
        break;
      }
      else if(j == i){
        continue;
      }
      else{
        cout << j << " ";
      }
      cnt++;
    }
    cout << "\n";
  }
}