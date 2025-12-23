#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char S1[100], S2[100];//Á½¸ö×Ö·û´®
	fgets(S1, 1000, stdin);
	S1[strcspn(S1, "\n")] = '\0';
	fgets(S2, 1000, stdin);
	S2[strcspn(S2, "\n")] = '\0';
	int len1 = strlen(S1);
	int len2 = strlen(S2);
	int hashTable[26] = { 0 };
	for (int i = 0; i < len2; i++)
	{
		int count = 0;
		for (int j = 0;j < len1; j++)
		{
			if (S1[j] == S2[i])
				count++;
		}
		if(count)
			hashTable[S2[i] - 'a'] = 1;
	}
	for (int i = 0; i < len2; i++)
	{
		if (i > 0) printf(" ");
		printf("%d", hashTable[S2[i] - 'a']);
	}
	return 0;
}