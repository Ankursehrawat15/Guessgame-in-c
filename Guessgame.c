#include<Stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess,number,nguesses;
    srand(time(0));
    number=rand()%100+1;
