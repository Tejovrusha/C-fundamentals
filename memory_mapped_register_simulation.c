#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

uint8_t memory[10];

struct Device{
    uint8_t Control;
    uint8_t Status;
    uint8_t Data;
} *device[3];
//size of Device = 3 bits

void print_memory(){
    for(int i=0; i<10;i++){
        printf("%u\t",memory[i]);
    }
    printf("\n");
}

int main(){
    int struct_size = 3;
    printf("Before assigning values: \n");
    print_memory();
    //offset
    for(int i=0;i<3;i++){
        device[i]=(struct Device *) &memory[i*struct_size];
    }
    for(int i=0;i<3;i++){
        device[i]->Control=(uint8_t)rand();
        device[i]->Status=(uint8_t)rand();
        device[i]->Data=(uint8_t)rand();
    }
    printf("\nAfter assigning values: \n");
    print_memory();
}
