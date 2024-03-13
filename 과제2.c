#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[50];
    printf("문자열을 입력하세요: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;
    printf("\n");
    int Size = strlen(string);
    printf("입력된 문자열은\n\"%s\"\n입니다.\n", string);
    printf("\n");
    printf("입력된 문자열의 길이 = %d", Size);
    return 0;
}