#include<stdio.h>
#include<stdbool.h>

char fake_memory[100];
char *ptr=fake_memory;

void *my_alloc(int size){
    if(ptr+size <= fake_memory+sizeof(fake_memory)){
        char *temp=ptr;
        ptr+=size;
        return temp;
    }
    else{
        return NULL;
    }
}

int main(){
    int n;
    char *p;
    while(true){
        printf("Enter the amount of memory required: ");
        scanf("%d",&n);
        if(n<=0){
            printf("Invalid size request! Try again\n");
            continue;
        }
        if((p=my_alloc(n))!=NULL){
            printf("%p\n",p);
        }
        else{
            printf("Out of memory!\n");
            return 1;
        }
    }
}
