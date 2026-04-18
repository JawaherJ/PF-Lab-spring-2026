#include <stdio.h>

int validatePIN(int storedPIN, int enteredPIN) {
    if (storedPIN == enteredPIN) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int storedPIN = 4729;
    int enteredPIN;
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (validatePIN(storedPIN, enteredPIN) == 1) {
            printf("Access granted. Welcome!\n");
            break;
        } else {
            int remaining = 2 - i;
            if (remaining > 0) {
                printf("Wrong PIN. %d attempt(s) remaining.\n", remaining);
            } else {
                printf("Card blocked. Contact your bank.\n");
            }
        }
    }

    return 0;
}