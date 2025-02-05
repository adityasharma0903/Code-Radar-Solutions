#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if(ch == 'a'||'i'||'e'||'o'||'u'){
        printf("Vowel");
    }else if(ch != 'a'||'i'||'e'||'o'||'u'){
        printf("Consonant");
    }

    return 0;
}