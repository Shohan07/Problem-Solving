
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, d;


	while (cin>> n) {
            queue<int> q;
            if(n==0)break;
		for (int i = 1; i <= n; i++) {
			q.push(i);
		}

		cout << "Discarded cards:";
		while (q.size() > 1) {
			cout << " " << q.front();
			q.pop();
			d = q.front();
			q.pop();
			if (!q.empty())cout << ",";

			q.push(d);
		}
	cout << "\nRemaining card: " << q.front() << "\n";
		q.pop();
	}

	return 0;
}
