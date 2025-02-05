#include <stdio.h>


int main() {
    int cp, sp;
    scanf("%d", &cp);
    scanf("%d", &sp);
    if((sp-cp)>0){
        printf("Profit");
    }else if((sp-cp)<0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}