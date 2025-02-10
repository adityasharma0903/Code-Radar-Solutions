#include <stdio.h>

int main() {
    int month ,days;
    scanf("%d", &month);
    if(month < 1 || month > 12){
        printf("Invalid month");
    }
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12 :
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;

    }
    printf("%d", days);
    return 0;
}