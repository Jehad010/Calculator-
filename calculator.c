#include<stdio.h>
#include<math.h>
int main()
{

    int n;
    float a,b,c, result;
     

   
        printf("Press (1) For plus(+)\n");
        printf("Press (2) For minus(-)\n");
        printf("Press (3) For multiplication(*)\n");
        printf("Press (4) For divide(/)\n");
        printf("Press (5) For log()\n");
        printf("Press (6) For absolute value\n");
        printf("Press (7) For rootover\n");
        printf("Press (8 ) For power\n");
        printf("Press (9) For sin\n");
        printf("Press (10) For cos\n");
        printf("Press (11 ) For tan\n");

        printf("Enter your choice :");
        scanf("%d", &n);



        switch(n)
        {
        case 1:
        {
            printf("Enter Two digits :");
            scanf("%f %f", &a, &b);

            c=a+b;
            printf(" The answer is:%0.2f+%0.2f=%0.2f\n", a,b,c);
            break;
        }
        case 2:
        {
            printf("Enter Two digits :");
            scanf("%f %f", &a, &b);

            c=a-b;
            printf(" The answer is:%0.2f-%0.2f=%0.2f\n", a,b,c);
            break;
        }
        case 3:
        {
            printf("Enter Two digits :");
            scanf("%f %f", &a, &b);

            c=a*b;
            printf(" The answer is:%0.2f x %0.2f=%0.2f\n", a,b,c);
            break;
        }
        case 4:
        {
            printf("Enter Two digits :");
            scanf("%f %f", &a, &b);

            if(b == 0)
            {
                printf("Division by zero is not valid.\n");
            }
            else
            {
                c = a / b;
                printf("The answer is: %0.2f / %0.2f = %0.2f\n", a, b, c);
            }
            break;
        }

        case 5:
        {
            printf("Enter a digit:");
            scanf("%f",&a);
            if(a>0)
            {
                result= log10(a);
                printf("Your log(%0.2f) is: %0.2f", a, result);
            }
            else
                printf("Math error");
            break;
        }
        case 6:
        {
            printf("Enter a digit:");
            scanf("%f", &a);

            result= fabs(a);
            printf("Your absolute value of %0.2f is: %0.2f", a, result);
            break;
        }
        case 7:
        {
            printf("Enter a digit:");
            scanf("%f", &a);
            if(a>=0)
            {
                result= sqrt(a);
                printf(" Your root over of %0.2f is:%0.2f", a, result);
            }
            else
                printf("Math error");
            break;
        }
        case 8:
        {
            printf("Enter the digit:");
            scanf("%f", &a);
            printf("Enter the power:");
            scanf("%f", &b);
            if(a==0 && b==0)
                printf("Math error");
            else
            {
                result= pow(a,b);
                printf("Your answer is: %0.2f", result);
            }
            break;

        }
        case 9:
        {
            printf("Enter the digit:");
            scanf("%f", &a);
            printf("Press(1)for answer in degree\n");
            printf("press(2)for answer in radian\n");
            
            printf("Enter the option:");
            scanf("%d", &n);

         if(n==2)
         {
            result=sin(a);
            printf("sin(%0.2f) :%0.2f", a, result);
            break;
         }
         else if(n==1)
         {
            result=sin((a*3.1416)/180);
            printf("sin(%0.2f) :%0.2f", a, result);
            break;
         }
         else
         {
         printf("The option you choose is invalid");
         break;
         }
        }
        case 10:
        {
            printf("Enter the digit:");
            scanf("%f", &a);
            printf("Press(1)for answer in degree\n");
            printf("press(2)for answer in radian\n");
            
            printf("Enter the option:");
            scanf("%d", &n);

         if(n==2)
         {
            result=cos(a);
            printf("cos(%0.2f) :%0.2f", a, result);
            break;
         }
         else if(n==1)
         {
            result=cos((a*3.1416)/180);
            printf("cos(%0.2f) :%0.2f", a, result);
            break;
         }
         else
         {
         printf("The option you choose is invalid");
         break;
         }
        }
        case 11:
        {
            printf("Enter the digit:");
            scanf("%f", &a);
            printf("Press(1)for answer in degree\n");
            printf("press(2)for answer in radian\n");
            
            printf("Enter the option:");
            scanf("%d", &n);

         if(n==2)
         {
            result=tan(a);
            printf("tan(%0.2f) :%0.2f", a, result);
            break;
         }
         else if(n==1)
         {
            result=tan((a*3.1416)/180);
            printf("tan(%0.2f) :%0.2f", a, result);
            break;
         }
         else
         {
         printf("The option you choose is invalid");
         break;
         }
        }

        default:
        {
            printf("You entered an invalid option\n");
            printf("please choose the correct option\n");
        }
        }
    
    return 0;

}
