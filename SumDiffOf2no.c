#include<stdio.h>
int main(){
    int v,k;
   float c,d;
   
   scanf("%d%d",&v,&k);
   scanf("%f%f",&c,&d);
   printf("%d %d\n",v+k,v-k);
   printf("%0.1f %0.1f",c+d,c-d);
    return 0;
}