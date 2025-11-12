#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int num[n];
    for(int i=n-1;i>=0;i--){
        scanf("%d",&arr[i]);
    }
    int m=n;
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=n-1;j>a;j--){
            num[j]=num[j-1];
        }
        num[a]=m--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
}