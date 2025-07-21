#include<stdio.h>
#include<string.h>
int main() {
    int num;
    char name[30];
    scanf("%d", &num);
    fflush(stdin);
    gets(name);
    printf("Roll number: %d\n", num);
    printf("Name: %s\n", name);
    printf("%d", strlen(name));
    return 0;
}