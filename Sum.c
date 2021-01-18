#include <stdio.h>

int sum(int d)
{
    if(d==0){
        return 0;
    }
    else{
        return (d % 10 + sum(d/10));
    }
}

int main()
{
    int n;
    printf("Enter the digit you want to add: ");
    scanf("%d", &n);

    printf("The sum of %d is %d", n, sum(n));
    return 0;
}
