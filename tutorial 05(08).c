#include<stdio.h>
#include<math.h>

void main(){

    int a,b,c,m,n;
    float x,x1,x2;

    printf("Enter values for a,b and c for \"ax^2+bx+c=0\" \n");
    scanf("%d %d %d",&a,&b,&c);

    m = (b*b) - (4*a*c);

    if(a == 0 && b == 0)
        printf("No solution\n");
    else if (a == 0){
            x = (-c)/b;
            printf("x = %.2f\n",x);
    }else if(m<0){
            printf("\n\tNo values of the root\t\n");
    }
          else{
                n = pow(m,0.5);
                x1 = (-b + n)/(2*a);
                    printf("x1 = %.2f\n",x1);
                x2 = (-b - n)/(2*a);
                    printf("x2 = %.2f\n",x2);

                }
}
