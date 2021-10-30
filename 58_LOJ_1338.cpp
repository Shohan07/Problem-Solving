#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input_arr1, input_arr2;
    int  len1, len2, i, j, T;
    //cin >> T;
    scanf("%d ",&T);
    for(int k = 1; k <= T ; k++){
            int arr1[27]={0}, arr2[27]={0};
    getline(cin, input_arr1);
    getline(cin, input_arr2);
    //cout <<  input_arr1<< endl;
     len1 = input_arr1.size();
     len2 = input_arr2.size();

     for( i = 0; i < len1; i++){
         if(input_arr1[i] >= 65 && input_arr1[i] <= 90){
             j = input_arr1[i] - 65;
            // cout << j << endl;
             arr1[j]++;
        }
        else if(input_arr1[i] >= 97 && input_arr1[i] <= 122){
             j = input_arr1[i] - 97;
            // cout << j << endl;
             arr1[j]++;
        }
     }


     for( i = 0; i < len2; i++){
         if(input_arr2[i] >= 65 && input_arr2[i] <= 90){
             j = input_arr2[i] - 65;
            // cout << j << endl;
             arr2[j]++;
        }
        else if(input_arr2[i] >= 97 && input_arr2[i] <= 122){
             j = input_arr2[i] - 97;
             //cout << j << endl;
             arr2[j]++;
        }
     }


     int flag = 1;
     for(i = 0; i < 26; i++){
        if(arr1[i] != arr2[i]){
                printf("Case %d: No\n",k);
            flag = 0;
            break;
        }
     }

     if(flag==1){
        //cout << "Case " << T << ": Yes" << endl;
        printf("Case %d: Yes\n",k);
     }

    }
    return 0;
}
