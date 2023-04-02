#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int N, a;
  cin >> N;
  priority_queue<int> pq1;                             // 큰수부터 출력
  priority_queue<int, vector<int>, greater<int>> pq2; //작은수부터 출력

  for(int i =0; i<N; i++){
    cin >> a;
    if(pq1.size() == pq2.size()){     // 홀수번째 입력일 경우 pq1에 푸쉬
      pq1.push(a);
    }
    else{                             // 짝수번째 입력일 경우 pq2에 푸쉬
      pq2.push(a);
    }
    if(pq1.size() != 0 && pq2.size()!= 0 && pq1.top() > pq2.top()){ // 입력받은 수가 3개 이상인데 pq1의 가장 큰수가 pq2의 가장 작은수보다 큰 경우 두개를 바꿔 넣어준다.
      int pq1_tmp = pq1.top();                                      // 이로인해 pq1에는 작은수들이 큰수부터 쌓이게 되고 pq2에는 큰수들이 작은수부터 쌓이게 된다.
      int pq2_tmp = pq2.top();                                      // 따라서 pq1의 top에 해당하는 값이 중간값을 가지게 된다.
      pq1.pop();
      pq2.pop();
      pq1.push(pq2_tmp);
      pq2.push(pq1_tmp);
    }
    cout << pq1.top() << "\n";    
  }
}

/* int N;
  cin >> N;
  int a;
  vector<int> arr;
  for(int i =0; i < N; i++){
    cin >> a;
    arr.push_back(a);

    sort(arr.begin(), arr.end());
    int b =arr.size()/2;
    if(arr.size() % 2 ==1){
      cout << arr[b] << "\n";
    }
    else{
      cout <<min(arr[b],arr[b-1]) << "\n";
    }
  }*/