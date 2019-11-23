//Calculator Program Version 1 using formal function call SANSKRUTI SAMANT
#include<stdio.h>
#include<math.h>

void display(float s)
{
    printf("Ans: %.2f \n",s);
}

float add(int x,int y)              //function to add
{
    return x+y;
}

float subtract(int x, int y)        //function to subtract
{
    return x-y;
}

float multiply(int x,int y)         //function to multiply
{
    return x*y;
}

float divide(int x,int y)           // function to divide
{
    if(y!=0) return (float)x/y;
    else return 0.0;
}

float power(int x,int y)          //function to power
{
    return pow(x,y);
}

float squareroot(int x,int y)    //function to find square root
{
    return sqrt(x);
}

int main()
{
    int a,b;
    float ans;
    unsigned char c;
    while(1)
    {
    printf("\nEnter the two numbers separating with single space or Press E to escape: ");
    scanf("%d %d", &a,&b);
    printf("Enter the arithmatic operation (+,-,*,/,^,s) : ");
    scanf(" %c",&c);
    switch(c)
            {
                case '+': ans=add(a,b);       // function call
                                break;
                case '-': ans=subtract(a,b);   // function call
                                break;
                case '*': ans=multiply(a,b);    // function call
                                break;
                case '/': ans=divide(a,b);     // function call
                                break;
                case '^': ans=power(a,b);      // function call
                                break;
                case 's': ans=squareroot(a,b);  // function call
                                break;
                case 'e': exit(0);
                default: printf("Invalid Operation\n");
            }
    display(ans);
    }
    return 0;
}
