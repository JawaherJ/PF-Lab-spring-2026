#include <stdio.h>

int main() {
    char c[100];
    int vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%s", &c);

    for (int i = 0; i<100 ;i++) {   
        char n = c[i];                     

        if (n >= 'A' && n <= 'Z') {
            n = n + 32;
        }

        if (n >= 'a' && n <= 'z') {
            if (n=='a' || n=='e' || n=='i' || n=='o' || n=='u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }  

    printf("Vowels:     %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
