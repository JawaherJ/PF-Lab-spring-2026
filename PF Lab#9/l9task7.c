#include <stdio.h>
int main() {
int arr[6] = {45, 60, 38, 52, 47, 55};
int *p = arr;
int i;
printf("Original marks: ");
for (i = 0; i < 6; i++) {
printf("%d ", *(p + i));
}
printf("\n");
int highest = *(p + 0);
for (i = 1; i < 6; i++) {

if (*(p + i) > highest) {
highest = *(p + i);
}
}
for (i = 0; i < 6; i++) {
*(p + i) = (int)(((float)*(p + i) / highest) * 100);
}
printf("Scaled marks: ");
for (i = 0; i < 6; i++) {
printf("%d ", *(p + i));
}
printf("\n");
return 0;
}