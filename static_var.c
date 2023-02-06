#include<stdio.h>
#include<stdlib.h>

void increment(){
    //int x = 0;
    static int x = 0;
    x++;
    printf("x = %d", x);
}

static void decrement(){
    int y = 0;
    y--;
    printf("y = %d", y);
}

void dec(){
    decrement();
}

int main(){

    for(int i = 0; i<10; i++){
        increment();
        dec();
    }

    return 0;
}