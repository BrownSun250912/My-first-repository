#include <stdio.h>
int main(){
    int a;
    printf("Please enter a number\n");
    scanf("%d",&a);
    if(a<0){
        printf("The number you print is negative!\n");
    }
    else{
        printf("The number you print is positive!\n");
    }
    printf("Hello, Linux!\n");
    printf("Obstacle detected! Turning right when ...\n");
    return 0;
}