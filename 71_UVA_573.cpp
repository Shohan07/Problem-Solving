#include<bits/stdc++.h>
using namespace std;
int main()
{
	double h,u,d,f, cur_h;
	int day;
	bool ans;
	while(cin>>h>>u>>d>>f){
		if(h==0)
			break;

	day = 0;
	cur_h = 0;
	f= (f/100.0)*u;

    while(1){
		day++;
		cur_h += u;
		u -= f;
		if(u < 0){
			u = 0;
		}
		if(cur_h > h){
			ans = true;
			break;
		}
		cur_h-=d;
		if(cur_h<0){
			ans = false;
			break;
		}
    }
    cout << (ans ? "success" : "failure") << " on day " << day << endl;
 }
	return 0;
}
