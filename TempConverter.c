#include<stdio.h>

int main(){
    float input;
    int i,a,b,c;
    int validinput=0;
    char ch=248;
    printf("What value of temperature do you want to enter:\n1)Celsius\n2)Farenheit\n3)Kelvin\n");
    D:
    scanf("%d",&i);
    if(i>=1 && i<=3){
        validinput=1;
        printf("Enter the temperature:\n");
        scanf("%f",&input);
    }

    //for celcius input
    if(i==1 && validinput==1){
        A:
        printf("What do you want to convert it into:\n1)Farenheit\n2)Kelvin\n");
        scanf("%d",&a);
        if(a == 1){
            printf("%.2f%cC = %.2f%cF",input,ch,32 + (input * 9/5),ch);
        }
        else if(a == 2){
            printf("%.2f%cC = %.2fK",input,ch,input+273);
        }
        else{
            printf("invalid input\nplease enter a valid input.\n");
            goto A;
        }
    }


    //for farenheit input
    else if(i==2 && validinput==1){
        B:
        printf("What do you want to convert it into:\n1)Celcius\n2)Kelvin\n");
        scanf("%d",&b);
        if(b==1){
            printf("%.2f%cF = %.2f%cC",input,ch,(input-32) * 5/9,ch);
        }
        else if(b==2){
            printf("%.2f%cF = %.2fK",input,ch,(input-32) *5/9 +273.15);
        }
        else{
            printf("invalid input\nplease enter a valid input.\n");
            goto B;
        }
    }


    //for kelvin input
    else if(i==3 && validinput==1){
        C:
        printf("What do you want to convert it into:\n1)Celcius\n2)Farenheit\n");
        scanf("%d",&c);
        if(c==1){
            printf("%.2fK = %.2f%cC",input,input-273,ch);
        }
        else if(c==2){
            printf("%.2fK = %.2f%cF",input,(input-273.15)*1.8 + 32,ch);
        }
        else{
            printf("invalid input\nplease enter a valid input.\n");
            goto C;
        }
    }


    else{
        printf("invalid input\nplease enter a valid input.\n");
        goto D;
    }
}