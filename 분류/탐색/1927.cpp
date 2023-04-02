#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  int a;
  priority_queue <int> pq;
  for(int i =0; i < N; i++){
    cin >> a;
    if(a !=0){
      pq.push(-a);
    }
    else{
      if(pq.empty() == true){
        cout << 0 << "\n";
      }
      else{
        cout << -(pq.top()) << "\n";
        pq.pop();
      }
    }
  }

}