#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, heads = 0, tails = 0;
  
  printf("Tossing a coin...");  
  for(i = 0; i < 3; i++){
    if(rand() % 2 == 0){
      printf("Round %d: Head\n",i+1);
      heads++;
    }else{
      printf("Round %d: Tail\n",i+1);
      tails++;
    }
  }
  printf("Heads: %d, Tails: %d\n",heads,tails);　　　

  return 0;
}