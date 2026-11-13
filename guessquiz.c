#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a;
    srand(time(NULL));
    int random_num = rand() % 100 + 1;
   
    do{
        printf("Enter the guess: ");
    scanf("%d",&a);
    if(a<random_num){
        printf("the number is greater\n");
    }
    else if(a>random_num){
        printf("the number is lower\n");
    }
    else if(a==random_num){
        printf("waah kya baat h chote yahi h sahi number");
    }
    }
        while(a!=random_num);
    return 0;
}