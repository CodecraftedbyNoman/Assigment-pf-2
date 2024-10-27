#include<stdio.h>
int main()
{
    char opt;

    int num1,num2;

    printf("Enter two number ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Select operation to perform +,-,*,/ : \n");
     scanf(" %c",&opt);

    if (opt=='+'){
        int sum=num1 +num2;

        printf("Sum is : %d\n " , sum);
    }
    
    
    else if(opt=='-'){
        int sub=num1-num2;
        printf("Subtraction is : %d\n",sub);
    }
    else if (opt=='*'){
        int mul=num1*num2;
        printf("Multiplication is : %d\n" , mul);
    }
    else if (opt=='/'){
        if(num2 !=0){
        float div=num1/num2;
        printf ("Division is : %f\n",div);
        }
        else{
            printf (" division is not possible!!");

        }
        }
        else {
            printf ("Invalid Inputs !!");
        }
     getch();
    return 0;
}