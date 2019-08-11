#include <stdio.h>
void main() {
  int num,i,k;
  scanf("%d",&num);

  float bal = 0,key;
  float array[num],out=0;

  for(i=1; i<=num; i++) {
    scanf("%f",&array[i]);
  }

  for(i=1; i<=num; i++) {
    bal = bal + array[i];
  }

  key = bal / num;

  for(k=1; k<=num; k++) {
    if(key > array[k]) {
      out = out + key - array[k];
    }
  }

   printf("$%.2f\n",out);

}