#include <iostream>

using namespace std;

int pSum[100001];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int N, M;
  cin >> N >>M;

  for(int i = 1; i <=N; i++){
    int num;
    cin >> num;

    pSum[i] = pSum[i-1]+ num;
  }
  for(int i = 0; i<M; i++){
    int a,b;
    cin >> a >> b;
    if(a ==0)
      cout << pSum[b] <<"\n";
    else
      cout << pSum[b] - pSum[a-1] <<"\n";
  }
}