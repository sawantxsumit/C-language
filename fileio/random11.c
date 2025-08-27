#include  <stdio.h> 

int main() {
    int n = 2; 

    for (int i = 2; i  <=7; i++) {
        for (int j = i; j  <=7; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}