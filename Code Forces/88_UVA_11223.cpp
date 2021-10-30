#include<bits/stdc++.h>
using namespace std;

map < string, char>data;

void Mapping()
{
    data[".-"] = 'A';       data[".---"] = 'J';     data["..."] = 'S';      data[".----"] = '1';    data[".-.-.-"] = '.';    data["---..."] = ':';
    data["-..."] = 'B';     data["-.-"] = 'K';      data["-"] = 'T';        data["..---"] = '2';    data["--..--"] = ',';    data["-.-.-."] = ';';
    data["-.-."] = 'C';     data[".-.."] = 'L';     data["..-"] = 'U';      data["...--"] = '3';    data["..--.."] = '?';    data["-...-"] = '=';
    data["-.."] = 'D';      data["--"] = 'M';       data["...-"] = 'V';     data["....-"] = '4';    data[".----."] = '\'';   data[".-.-."] = '+';
    data["."] = 'E';        data["-."] = 'N';       data[".--"] = 'W';      data["....."] = '5';    data["-.-.--"] = '!';    data["-....-"] = '-';
    data["..-."] = 'F';     data["---"] = 'O';      data["-..-"] = 'X';     data["-...."] = '6';    data["-..-."] = '/';     data["..--.-"] = '_';
    data["--."] = 'G';      data[".--."] = 'P';     data["-.--"] = 'Y';     data["--..."] = '7';    data["-.--."] = '(';     data[".-..-."] = '"';
    data["...."] = 'H';     data["--.-"] = 'Q';     data["--.."] = 'Z';     data["---.."] = '8';    data["-.--.-"] = ')';    data[".--.-."] = '@';
    data[".."] = 'I';       data[".-."] = 'R';      data["-----"] = '0';    data["----."] = '9';    data[".-..."] = '&';
}
int main()
{
   Mapping();
   int t, k, c = 0;
   string inp;
   cin >> t;
   cin.ignore();

   for(c = 1; c <= t; c++){
    cout << "Message #" << c << "\n";
    getline(cin, inp);
    int len = inp.length(), cnt = 0;
    for(int i = 0; i < len; i++){
        if(isspace(inp[i])){
            if(isspace(inp[i+1])){
                cout << " ";
               // cout <<9;
                //cnt = 0;
            }
            //else cnt++;

          continue;
        }
        int j = i;
        string s = "";
        while(!isspace(inp[j]) && j < len){
            s += inp[j];
            j++;
        }
        cout << data[s];
       // cnt = 0;
        i = j - 1;
    }
    cout << "\n";
    if(c<t)cout << "\n";
   }

}
