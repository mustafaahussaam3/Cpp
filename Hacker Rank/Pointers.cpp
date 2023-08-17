#include <stdio.h>

void update(int *a,int *b) {

    int temp ; 
    temp = *a - *b ;
    if (temp < 0){
        temp *= -1 ;
    }
    *a = *a + *b ;
    *b = temp;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d \n", a, b);

    return 0;
}
