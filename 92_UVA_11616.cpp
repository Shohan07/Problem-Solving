#include<bits/stdc++.h>
using namespace std;
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

int romanToDecimal(string S){
    int decimalNumeral = 0;
    S += "0";

    for(int i = 0; i+1 < S.length(); i++){
        int current = value(S[i]);
        int next = value(S[i+1]);
        if(current >= next)decimalNumeral += current;
        else decimalNumeral -= current;
    }
    return decimalNumeral;
}

string decimalToRoman(int value){
    string roman[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int decimal[13]  = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string romanNumeral = "";
    for(int i = 0; i < 13; i++){
        while(value >= decimal[i]){
            value -= decimal[i];
            romanNumeral += roman[i];
        }
    }
    return romanNumeral;
}

int main()
{
    int I;
    string S;
    stringstream ss;
    while(cin >> S){
        if(isdigit(S[0])){
            ss.clear();
            ss << S;
            ss >> I;
            cout << decimalToRoman(I) << "\n";
        }
        else{
            cout << romanToDecimal(S) << "\n";
        }
    }
    return 0;
}
