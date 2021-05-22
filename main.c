#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
nullptr;
int main()
{
 char str[10000];
 scanf("%[^\n]%*c", str);
 for(int i = 0; str[i]; i++){
	str[i] = tolower(str[i]);
 }
 char array[][20]={"red", "blue", "green", "yellow", "brown", "pink", "white", "black", "purple", "orange"};
 char result[][20]={"Red", "Blue", "Green", "Yellow", "Brown", "Pink", "White", "Black", "Purple", "Orange"};
 char *k;
 for(int i = 0; i < 10; i++){
	k = strstr(str, array[i]);
	if(k != nullptr){
		printf("%s", result[i]);
		break;
	}
 }

    return 0;
}
