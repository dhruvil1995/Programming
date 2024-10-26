#include <stdio.h>

main()
 
 {
    int n;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

    
    printf("Powers of %d:\n", n);
    printf("%d^1 = %d\n", n, (int)pow(n, 1));
    printf("%d^2 = %d\n", n, (int)pow(n, 2));
    printf("%d^3 = %d\n", n, (int)pow(n, 3));

    return 0;
}
