#include <stdio.h>

int main() {
    char alpha;
    
    if (alpha >= "A" && alpha <= "Z"){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}