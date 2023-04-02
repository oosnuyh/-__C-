#include <iostream>
#include <string>

using namespace std;

class Deque{
  private:
    int arr_size;
    int deque_size;
    int* arr;
    int start;
  public:
    Deque(): arr_size(0), deque_size(10001), start(0) {arr = new int[deque_size];}

    void push_front(int x){
      arr_size+=1;
      for(int i = 0; i<arr_size-1; i++){
        arr[(start +1 +i)] =arr[(start+i)];
      }
      arr[start] = x;
    }
    void push_back(int n){
        arr_size += 1;
        arr[(start + arr_size-1)] = n;
    }
    void pop_front(){
      if(arr_size == 0)
        cout << -1 << "\n";
      else{
        cout << arr[start] << "\n";
        start +=1;
        arr_size-=1;
      }
    }
    void pop_back(){
      if(arr_size ==0)
        cout << -1 << "\n";
      else{
        cout << arr[(start + arr_size -1)] << "\n";
        arr_size -=1;
      }
    }
    void size(){
      cout << arr_size <<"\n";
    }
    void empty(){
      if(arr_size ==0)
        cout << 1 <<"\n";
      else
        cout << 0 << "\n";
    }
    void front(){
      if(arr_size == 0)
        cout << -1 << "\n";
      else
        cout << arr[start]<< "\n";
    }
    void back(){
      if(arr_size == 0)
        cout << -1 << "\n";
      else
        cout << arr[(start + arr_size -1)] << "\n";
    }
    ~Deque() {delete []arr;}
};
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  string str;
  Deque D;
  for(int i = 0; i < N; i++){
    cin >> str;
    if(str == "push_back"){
      int c;
      cin >> c;
      D.push_back(c);
    }
    else if(str == "push_front"){
      int c;
      cin >> c;
      D.push_front(c);
    }
    else if(str == "pop_front")
      D.pop_front();
    else if(str == "pop_back")
      D.pop_back();
    else if(str == "size")
      D.size();
    else if(str == "empty")
      D.empty();
    else if(str == "front")
      D.front();
    else
      D.back();
  }
}