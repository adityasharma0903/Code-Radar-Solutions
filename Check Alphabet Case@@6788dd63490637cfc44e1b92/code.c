#include <stdio.h>

int main() {
    char alpha;
    char a = toupper(alpha);
    if (alpha >= "A" && alpha <= "B"){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}