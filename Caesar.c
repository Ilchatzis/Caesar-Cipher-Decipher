#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
	char type[7];
	char text[1000];
	char gentext[1000];
	bool flag;
	int key;
	printf("            ~~~~~~~ CAESAR ~~~~~~~\n");
	printf("Type 'Encrypt' or 'Decrypt' to declare function\n\n");
	while (strcmp(type, "Decrypt")&&strcmp(type, "Encrypt")&&strcmp(type, "decrypt")&&strcmp(type, "encrypt"))
	{
	gets(type);
	if (!strcmp(type, "Encrypt")||!strcmp(type, "encrypt"))
	{
		flag = false;
		break;
	}
	else if (!strcmp(type, "Decrypt")||!strcmp(type, "decrypt"))
	{
		flag = true;
		break;
	}
	else
	{
		printf("\nType 'Encrypt' or 'Decrypt' to declare function\n\n");
	}
	}
	if (flag == false)
	{
		printf("\nEnter text to Encrypt :\n");
	}
	else
	{
		printf("\nEnter Encrypted text :\n");
	}
	gets(text);
	int len = strlen(text);
	printf("\nEnter Key : ");
	scanf("%d", &key);
	getchar();
	key = key % 26;
	printf("\n");
	printf("Generated text : \n");
	for(int i=0;i<len;i++){
		if (flag == false){
			char a = text[i];
			int num = (int) a;
			if (num >= 65 && num <= 90)
			{
				num = num + key;
				if (num > 90)
				{
					num = num - 26;
				}
			}
			if (num >= 97 && num <= 122)
			{
				num = num + key;
				if (num > 122)
				{
					num = num - 26;
				}
			}
			gentext[i] = (char) num;
			printf("%c", gentext[i]);
		}
		else
		{
			char a = text[i];
			int num = (int) a;
			if (num >= 65 && num <= 90)
			{
				num = num - key;
				if (num < 65)
				{
					num = num + 26;
				}
			}
			if (num >= 97 && num <= 122)
			{
				num = num - key;
				if (num < 97)
				{
					num = num + 26;
				}
			}
			gentext[i] = (char) num;
			printf("%c", gentext[i]);
		}
	}
	printf("\n\nPress Enter to continue ...");
	getchar();
	return 0;
}