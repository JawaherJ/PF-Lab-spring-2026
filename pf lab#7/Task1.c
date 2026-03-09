#include <stdio.h>
int main() {
    int arr[5];
    int i;
    
    printf("Enter 5 numbers: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  
    }
    
    printf("%d ", arr[4]);  
    for( i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
