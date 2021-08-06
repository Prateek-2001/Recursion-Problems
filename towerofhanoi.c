#include<stdio.h>

int count = 0;

void hanoi(int, char, char, char);

int main(){

    int n;
    printf("Number of disks: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');
    printf("Total Movements required: %d", count);
    return 0; 
}

void hanoi(int num, char from, char mid, char to){
    if (num == 1){
        count += 1;
        printf("%c to %c \n", from, to);
        return;
    }
    
    hanoi(num - 1, from, to, mid);
    count += 1;
    printf("%c to %c\n", from, to);
    hanoi(num - 1, from, mid, to);
}