#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios_base::sync_with_stdio;
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  vector<int> x_pos(100001,0);
  vector<int> x_pos(100001,0);
  int a, b;
  for(int i =0; i< N; i++){
    cin >> a >> b ;
    x[i] = a;
    y[i] = b;
  }
  int m_y = 0;
  for(int j =0; j < N; j++){
    m_y = min(m_y, y[j]);
  }
}