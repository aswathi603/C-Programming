//week 8-1question
#include <stdio.h>
int main() {
    int n, arr[n],num = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        num = num * 10 + (arr[i] % 10);
    }
    if (num % 10 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

