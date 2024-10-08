#include "stdio.h"

int main(void) {

    char ch;
    char str[100];
    char sentence[100];

    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%s", str);
    printf("%s\n", str);
    getchar();

    scanf("%[^\n]", sentence);
    printf("%s\n", sentence);


  return 0;
}
