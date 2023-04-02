#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
	deque<int> deq;
	int n;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;
		if (s == "push_front") {
			int tmp;
			cin >> tmp;
			deq.push_front(tmp);
		}
		else if (s == "push_back") {
			int tmp;
			cin >> tmp;
			deq.push_back(tmp);
		}
		else if (s == "pop_front") {
			if (deq.empty())
				cout << -1 << endl;
			else {
				cout << deq.front() << endl;
				deq.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (deq.empty())
				cout << -1 << endl;
			else {
				cout << deq.back() << endl;
				deq.pop_back();
			}
		}
		else if (s == "size") {
			cout << deq.size() << endl;
		}
		else if (s == "empty") {
			if (deq.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (s == "front") {
			if (deq.empty())
				cout << "-1" << endl;
			else
				cout << deq.front() << endl;
		}
		else if (s == "back") {
			if (deq.empty())
				cout << "-1" << endl;
			else
				cout << deq.back() << endl;
		}
	}
	return 0;
}