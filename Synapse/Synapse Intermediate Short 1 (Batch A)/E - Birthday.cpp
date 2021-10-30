#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x: a)
		cin >> x;
	sort(a.begin(), a.end());
	vector<int> b;
	for(int i = 0; i < n; i+=2)
		b.push_back(a[i]);
	vector<int> c;
	for(int i = 1; i < n; i+=2)
		c.push_back(a[i]);
	reverse(c.begin(), c.end());
	for(auto x: b)
		cout << x << " ";
	for(auto x: c)
		cout << x << " ";
	cout << endl;
}
