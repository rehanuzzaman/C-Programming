#include<stdio.h>
int main()
{
    printf("Weaver Calculator");
    
    float sgpa;
    
    printf("\n\nPlease enter your recent SGPA...");
    printf("\n\nSGPA:");
    scanf("%f", &sgpa);
    
    if (sgpa == 4.00)
    {
        printf("\n\nCongratulations!");
        printf("\nYou'll get 50% Weaver on upcoming Semester.\n");
        printf("Please contact with Weaver Section of Daffodil International University and apply for the Weaver.");
        
        printf("\nThank you.");
    }
    
    if (sgpa >= 3.90 && sgpa <= 3.99)
    {
        printf("\n\nCongratulations!");
        printf("\nYou'll get 30% Weaver on upcoming Semester.\n");
        printf("Please contact with Weaver Section of Daffodil International University and apply for the Weaver.");
        
        printf("\nThank you.");
    }
    
    if (sgpa >= 3.85 && sgpa <= 3.89)
    {
        printf("\n\nCongratulations!");
        printf("\nYou'll get 20% Weaver on upcoming Semester.\n");
        printf("Please contact with Weaver Section of Daffodil International University and apply for the Weaver.");
        
        printf("\nThank you.");
    }
    
    if (sgpa >= 3.80 && sgpa <= 3.84)
    {
        printf("\n\nCongratulations!");
        printf("\nYou'll get 10% Weaver on upcoming Semester.\n");
        printf("Please contact with Weaver Section of Daffodil International University and apply for the Weaver.");
        
        printf("\nThank you.");
    }
    
    if (sgpa < 3.80)
    {
        printf("\n\nSorry!");
        printf("\nYou're not eligable for the Weaver on upcoming Semester.\n");
        printf("Please contact with Weaver Section of Daffodil International University for more information.");
        
        printf("\nThank you.");
    }
    
    if (sgpa > 4.00)
    {
        printf("\n\nOops!!");
        printf("\nYou've entered a wrong SGPA.\n");
        printf("Please recheck and try again...");
        printf("\n\n\nIf you think the fault is in system, please contact with the IT Department.\n");
        printf("\n\nWish you all the best");
        
        printf("\nThank you.");
    }
}
