//using recursion

#include<stdio.h>

int dec_to_bin(int x){
  if(x==1) return 1;
  return dec_to_bin(x/2)*10 + x%2;
}

void main(){
  int n;
  printf("Enter a decimal number: ");
  scanf("%d",&n);
  int y= dec_to_bin(n);
  printf("The decimal number %d converted to Binary is %d",n,y);
}
