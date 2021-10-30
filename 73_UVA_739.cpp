#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout << "         NAME                     SOUNDEX CODE" << endl;

    string s, letterscode = "01230120022455012623010202";
    while(cin >> s)
	{
		 cout << "         " << s;
		 long long int l, i, j;

		 l = s.size();
		 for( i = 0; i < 25 - l; i++) cout<<" ";

		 cout << s[0];

		        long long int cnt = 0, tmp, last = letterscode[s[0]-'A'];
        for( i = 1; i < l && cnt < 3; i++){

            tmp = letterscode[s[i] - 'A'];

            if(tmp != last && tmp != '0'){
                printf("%c", tmp);
                cnt++;
            }

            last = tmp;
        }

        while (cnt < 3){
            cout << "0";
            cnt++;
        }
        cout << endl;
	}

       cout<< ("                   END OF OUTPUT") << endl;
       return 0;
}
