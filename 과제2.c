#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[50];
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;
    printf("\n");
    int Size = strlen(string);
    printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n", string);
    printf("\n");
    printf("�Էµ� ���ڿ��� ���� = %d", Size);
    return 0;
}