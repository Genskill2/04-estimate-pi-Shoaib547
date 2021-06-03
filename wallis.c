#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float wallis_pi(int n){
 float pi=1;
 float a,b;
  for (int i=1;i<n+1;i++){
    a = 4*i*i;
    b = a/(a-1);
    pi = pi*b;  
  }
  float k = 2*pi;
  
   return k;
  
}

int main(void) {
 int n;
 printf("enter iterations:");
  scanf("%d",&n);
  float p;
  p = wallis_pi(n);
  printf("%f",p);
  
}

