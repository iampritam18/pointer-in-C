// #include<stdio.h>
// int main()
// {
//     int array[]= {100,200,300,500,600};
//     int item= 400,k=3,n=5;
//     int i=0,j=n;
    
//     printf("the original array elements are;\n");
//     for(i=0;i<n;i++)
// {
//     printf("array[%d]=%d\n",i,array[i]);
// }

// n=n+1;
// while(j>=k)
//   {
//  array[j+1]=array[j];
//  j=j-1;
// }

// array[k]=item;
// printf("The array of element after insertion;\n");

// for (i=0;i<n;i++)
// {
//     printf("array[%d]=%d\n",i,array[i]);
//     }
// }    
// #include<stdio.h>
// int max(int a,int b);//formal parameters 
// int main(){
//     int x,y;
//     printf("enter for x: ");
//     scanf("%d",&x);
//     printf("enter for y: ");
//     scanf("%d",&y);
//     max(x,y);//actualm parameters
   
// }
// int max(int a,int b){
//     if(a>b){
//         printf("a is greater");
//     }else if(a<b){
//         printf("a is smaller");
//     }else{
//         printf("none\n");
//     }
// }

//call by reference
// #include<stdio.h>
// void swap(int *number1,int *number2){
//     int temp;
//     temp=*number1;
//     *number1=*number2;
//     *number2=temp;
// }
// int main(){
//     int a=50,b=10;
//     swap(&a,&b);
//     printf("Number 1: %d\n",a);
//     printf("Number 2: %d",b);
// }
//call by value
// #include<stdio.h>
// void swap(int number1,int number2){
//     int temp;
//     temp=number1;
//     number1=number2;
//     number2=temp;
// }
// int main(){
//     int a=50,b=10;
//     swap(a,b);
//     printf("Number 1: %d\n",a);
//     printf("Number 2: %d",b);
// }

// recursive functions
// #include<stdio.h>
// int factorial(int i){
//     if(i<=1){
//         return 1;
//     }
//     return (i*factorial(i-1));
// }
// int main(){
//     int i;
//     printf("enter the number u want the factorial of: ");
//     scanf("%d",&i);
//     factorial(i);
// }

//math function
#include<stdio.h>
#include<math.h>
int main(){
    // float num,root;
    // printf("Enter the number you want the square root of: ");
    // scanf("%f",&num);
    // root=sqrt(num);
    // printf("the square root of %.2f is: %.2f",num,root);
    int x,y;
    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf("%d",&y);
    int a;
    a=pow(x,y);
    printf("%d raised to the power %d: %d",x,y,a);
}