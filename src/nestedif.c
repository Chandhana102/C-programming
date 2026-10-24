#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price=10.00;
    bool isStudent = true;
    bool isSenior = false;
    ;
    if(isStudent)
    {
        if(isSenior){
    
            printf(" you get a  student 10 percent discount\n");
            printf(" you get a senior 20 percent discount\n");
            price *=0.7;
    }
    else{
        printf(" you get a student 10 percent discount\n");
        price *=0.9;
    }
}
    else{
        if(isSenior){
    
            
            printf(" you get a senior 20 percent discount\n");
            price *=0.8;
    }
    }

    
        
    
    printf("The price of a ticket is: $%.2f\n", price);
    return 0;
}