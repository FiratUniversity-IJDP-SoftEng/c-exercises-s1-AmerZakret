#include <stdio.h>
#include <string.h>

int main() {
    char pet[3];

    printf("Do you have a cat or a dog? ");
    scanf("%s", pet);

    if (strcmp(pet, "cat") == 0) {
        printf("Your cat says: Meow!\n");
    } else if (strcmp(pet, "dog") == 0) {
        printf("Your dog says: Woof!\n");
    } else {
        printf("Invalid input\n");
    }
}

