// Program to display pattern in reverse order
#include <stdio.h>
int main () {
    int n; // declairing output 
printf("Enter your rows: ");// taking input 
scanf("%d", &n);
// using nested loop to print
for (int i=1;i<=n;i++) {
    for(int j=1;j<=n+1-i;j++) {
        printf("*");
    }
    printf("\n");
}
}