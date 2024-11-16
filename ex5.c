#include <stdio.h>

int sayHello() {

  char name[10]; 
  printf("What is your name?");
  scanf("%s" , name);

  printf("Hello %s" , name);

}

int main() {
  sayHello();
}

