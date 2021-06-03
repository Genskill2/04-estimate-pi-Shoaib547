#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int,float,float);

int main(void) {
 int iterations;
  scanf("%d",&iterations);
  float p = 1;
  float m = 2;
  float pi;
  pi = wallis_pi(iterations,m,p);
  printf("%f",pi);
  return 0;
}
float wallis_pi(int iterations,float m,float p){
  for (int i=0;i<iterations;i++){
    float t1 = m/(m-1);
    float t2 = m/(m+1);
    float p = p*t1*t2;
    m += 2;
  }
  return 2*p;
}

