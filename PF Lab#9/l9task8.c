#include <stdio.h>
int main() {
void *sensor;
int vibrations = 847;
sensor = &vibrations;
printf("Vibrations : %d\n", *(int *)sensor);
printf("Address : %p\n", (void *)sensor);
float temperature = 73.6;
sensor = &temperature;
printf("Temperature: %.2f\n", *(float *)sensor);
printf("Address : %p\n", (void *)sensor);
char status = 'W';
sensor = &status;

printf("Status : %c\n", *(char *)sensor);
printf("Address : %p\n", (void *)sensor);
if (*(char *)sensor == 'N') {
printf("Alert: System Normal.\n");
} else if (*(char *)sensor == 'W') {
printf("Alert: Warning! Check system.\n");
} else if (*(char *)sensor == 'C') {
printf("Alert: CRITICAL! Immediate action required.\n");
}
return 0;
}