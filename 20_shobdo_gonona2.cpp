
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, counting=0;
    char S[10000];
    char *word;
    scanf("%d", &T);
    while(T--){
        scanf(" %[^\n]",S);
        word = strtok(S," ,!;?. ");
        counting = 0;
        while(word != NULL)
        {
            if(strlen(word) > 0){
                counting++;
           }
            word = strtok(NULL, ",!;?. ");
        }
        printf("%d\n",counting);
    }
    return 0;
}
/*

#include <bits/stdc++.h>
using namespace std;
#define MAX_LINE 80

int main()
{
	char line[MAX_LINE];

	char delim[] = " ,.!;:\n";
	char *words, *ptr;

	int count = 0;


          gets(line);
        ptr= line;

	while ((words = strtok(ptr, delim)) !=NULL)
	      {
	       count++;
	       ptr = NULL;
	      }

	cout << "words in the string = " <<count;


	return 0;
}

