#include <stdio.h>

int main() {

  int num = 3;
  int userNum;

  printf("Please guess the number(1-5): ");
  scanf("%d", &userNum);

  if(userNum == num){
    printf("You guessed it right!");
  }
  else{
    printf("Wrong guess");
  }

}
