#include <stdio.h>

int main() {
    char str[50];
    int age;
    char str1[100];
    scanf("%s", &str);
    scanf("%d", &age);
    scanf("s", &str1);
    printf("Name: ", str);
    printf("Age: ",age);
    printf("Hobby: ",str1);
    return 0;
}