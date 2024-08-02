#include <stdio.h>
#include<math.h>
int main() {
    int mark;
    printf("enter the value of mark(0-100): ");
    scanf("%d\n",&mark);
    if(mark<=100 && mark>30){
        printf("pass; \n");
    }
    else{
    printf("fail \n");
    }
    return 0;
}

