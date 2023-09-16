#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch;
    int a,b;
    while(1){
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        if(ch==5){
            exit(0);
        }
        printf("Enter two numbers: \n");
        scanf("%d %d",&a,&b);
        switch(ch){
            case 1:
            printf("Addition of the two given number is %d",(a+b));
            break;
            case 2:
            printf("Subtraction of the two given number is %d",(a-b));
            break;
            case 3:
            printf("Multiplication of the given two number is %d",(a*b));
            break;
            case 4: 
            printf("Division of the given two number is %d and remaider came on dividing is %d",(a/b),(a%b));
            break;
            default:
            printf("Enter valid choice!");
            break;
        }
    }
    return 0;
}
