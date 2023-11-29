
/*Here is where dependency files are included*/
#include <stdio.h>
#include "types.h"


/*The operation options are defined as an enumeration*/
typedef enum
{
    enAddOperation = 0
    ,enSubstractOperation
    ,enMultiplyOperation
    ,enDivideOperation
}enOperations;


/*Here is where all functions are declared*/
int iPrintAddOperation(uint8 u8ArgX, uint8 u8ArgY);

void vPrintSubstractOperation(void);

void vPrintMultiplyOperation(void);

void vPrintDivideOperation(void);

void vPrintInvalidOperation(void);


enOperations enGetSelectedOperation(void);




/*This is the main function of the program*/
int main()
{
    uint8 u8Number1 = 3; /*First number value to be process is defined*/
    uint8 u8Number2 = 1; /*Second number value to be process is defined*/
    int iResult = 0; /*this variable will handle the operation result*/
    enOperations enOperationSelected = enGetSelectedOperation(); /*The required operation is requested*/


    /*Here we are evaluating which operation is required*/
    if (enAddOperation == enOperationSelected) /*The add operation will be executed*/
    {
        iResult = iPrintAddOperation(u8Number1, u8Number2);
        printf("The result is: %d\n",iResult);
    }
    else if (enSubstractOperation == enOperationSelected) /*The Substract operation will be executed*/
    {
        vPrintSubstractOperation();
    }
    else if (enMultiplyOperation == enOperationSelected) /*The Multiply operation will be executed*/
    {
        vPrintMultiplyOperation();
    }
    else if (enDivideOperation == enOperationSelected)   /*The Divide operation will be executed*/
    {
        vPrintDivideOperation();
    }   
    else                                                 /*An invalid operation was requested, nothing to do*/
    {
        vPrintInvalidOperation();
    }
       
    return 0;
}


/*Here is where all functions are implemented*/
int iPrintAddOperation(uint8 u8ArgX, uint8 u8ArgY)
{
    int iResult = u8ArgX + u8ArgY;
    printf("Add operation selected\n");
    return iResult;
}
void vPrintSubstractOperation(void)
{
        printf("Substract operation selected");
}

void vPrintMultiplyOperation(void)
{
        printf("Multiply operation selected");
}

void vPrintDivideOperation(void)
{
    printf("Divide operation selected");
}

void vPrintInvalidOperation(void)
{
    printf("Invalid operation selected");
}


enOperations enGetSelectedOperation(void)
{
    return enAddOperation;
}

