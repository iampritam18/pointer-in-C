// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b&&a>c){
//         printf("a is greater\n");
//     }else if(b>a&&b>c){
//         printf("b is greatest\n");
//     }else if(c>a&&c>b){
//         printf("c is greatest\n");
//     }else{
//         printf("none\n");
//     }
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the number: ")
//     scanf("%d %d %d",&a,&b,&C);
//     if(a>b&&a>c){
//         printf("a is gratest\n");
//     }else if(b>a&&b>c){
//         printf("b is gratest\n");
//     }else if(c>a&&c>b){
//         printf("%d is gratest\n",c);
//     }else{
//         printf("none\n");
//     }
//     return 0;            
// }
#include<stdio.h>
int main(){
    int n;
    char a[n];
    printf("enter the size of the string: ");
    scanf("%d",&n);
    printf("enter the string: ");
    scanf("%s",&a);
    for(int i=0;i<n;i++){
        if(a[i]=a[i-1]){
            printf("the given string %s is palindrome",a);
        }else{
            printf("not a palindrome");
        }
    }
    return 0;
}