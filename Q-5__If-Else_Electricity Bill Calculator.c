#include <stdio.h>

int main() {
        int n;
       float bill;
    scanf("%d",&n);
    
    if(n<0 || n>=1000000){
        printf("Invalid Input!");
        return 0;
    }
    
    
    else if(n<=100){
        bill=n*5;
       
    }
    
    else if(n>100 && n<=300){
        bill= (n-100)*7 + (100*5);
        
            
    }
    
    else{
        bill =  (100*5) + (200*7) + (n-300)*10 ;
       
    }
    if(bill<=1200){
        bill= bill - bill*0.1;
    }
    printf("The electricity bill is: %.2f.",bill);
    
    return 0;
}