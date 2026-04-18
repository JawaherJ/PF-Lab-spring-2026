#include <stdio.h>
int main() {
int attendance[4][5] = {
{1, 0, 1, 1, 0},
{0, 0, 1, 0, 1},
{1, 1, 1, 1, 1},
{1, 0, 0, 1, 0}
};
int (*p)[5] = attendance;
int i, j;
printf("===== ATTENDANCE REPORT =====\n");
for (i = 0; i < 4; i++) {
int total = 0;
printf("Student %d: ", i + 1);

for (j = 0; j < 5; j++) {
printf("%d ", (*(p + i))[j]);
total = total + (*(p + i))[j];
}
printf("| Total: %d", total);
if (total < 3) {
printf(" -- At risk");
}
printf("\n");
}
printf("=============================\n");
return 0;
}