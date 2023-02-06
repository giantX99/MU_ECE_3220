#include<stdio.h>
#include<stdlib.h>


float add(float a, float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

float div(float a, float b){
    return a/b;
}

float mul(float a, float b){
    return a*b;
}

void function_pointer(){
    printf("Function pointer 1");
}

void function_pointer2(int counter){
    printf("Function pointer 1");
}


int main(){

    void (*f_ptr)() = function_pointer;
    f_ptr();

    float (*m_func[4])(float,float) = {add, sub, div, mul};

    int selection = 1;
    while(selection >= 0){
        scanf("%d", &selection);
        if(selection>=0 && selection<=3){
            printf("Value: %f\n", m_func[selection](5.0,2.0));
        }
        else{
            fprintf(stderr, "Bad input\n");
        }
    }

    return 0;
}