#include<stdio.h>
int main(){
  int n;
  printf("enter number(n>2):");
  scanf("%d",&n);
  
  int fib[n];
  fib[0]=0;
  fib[1]=1;
  
  for(int i=2;i<n;i++){
    
    if(n==1){
    return 1;
  }else if(n==0){
    return 0;
  }
    fib[i]=fib[i-1]+fib[i-2];

    printf("%d \t",fib[i]);
  }


  return 0;
}