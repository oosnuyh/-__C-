#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cin >> s;
  string a = "abcdefghijklmnopqrstuvwxyz";
  for(int i =0; i < a.length(); i++){
    cout << (int)s.find(a[i]) << " ";
  }
}