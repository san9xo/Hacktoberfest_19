#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l,h,m,z;
    printf("Enter the Size of the Array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the Sorted Numbers in the Array\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the No. to be searched\n");
    scanf("%d",&z);

    l=0;
    h=n-1;
    while(l<=h) {
            m=(l+h)/2;

    if(z==arr[m]) {
        printf("The Index of Required No. is %d",m);
        break;
    }
    else if(z<arr[m]) {
        h=m-1;
    }
    else {
            l=m+1;
    }

    }
}
