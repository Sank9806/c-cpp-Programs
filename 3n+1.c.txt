#include <stdio.h>

int cycle (int n) {
  int count = 0;
  while(n!=1) {
    if (n%2==0) {
      n = n / 2;
      count++;
    }

    else {
      n = (n*3) + 1;
      count++;
    }

  }

  count = count + 1;
  return count;
}

void main() {
  int num1,num2,i;
  scanf("%d%d",&num1,&num2);
  int count1 = 0, count2 = 0;

   for(i=num1; i<=num2; i++) {
     count2 = cycle(i);

      if (count2 >= count1) {
        count1 = count2;
      }

      else {
        count2 = 0;
      }

   }

   printf("%d %d %d\n",num1,num2,count1);

 }