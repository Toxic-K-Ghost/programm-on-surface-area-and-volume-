//simple hello program
//single label comment
/*
Name:Kevin 
Reg:KipngenoPA106/G/28707/25
Describtion:programme to promt user to fill their age,height,Id no.,bank account balance

*/
#include <stdio.h> // Preprocessor Directive

int main() { // main function
    int age; // Declaration
    float height;
    int id_card_number;
    int bank_balance;
    
    printf("1:Enter your age: "); // to display message
    scanf("%d", &age); // to scan input from user
    
    printf("2:Enter your height in meters:");//to display message
    scanf("%f", &height);//to scan input from user
    
    printf("3:Enter your id_card_number: ");//to display message
    scanf("%d", &id_card_number); //to scan input from user
    
    printf("4:Enter bank_balance  is:");
    scanf("%d",&bank_balance);//to scan input from user
    return 0;
}
 

    
