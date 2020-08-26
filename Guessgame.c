#include<Stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess,number,nguesses;
    srand(time(0));
    number=rand()%100+1;
    do {
        printf("Guess the number between 1to100\n");
        scanf("%D",&guess);
        
    }
