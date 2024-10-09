#include <stdio.h>

int main(){
  int customerID,unitsConsumed;
  double Amount,chargeperUnit, billIncrement;
  char customerName[]=("");
  
  printf("Enter your name:");
  scanf("%s", &customerName);

  printf("Enter the your ID:");
  scanf("%d",& customerID);
  
  printf("Enter units consumed:");
  scanf("%d",& unitsConsumed);
     
    printf("Your name is: %s\n", customerName);   
    printf("Your ID is : %d\n", customerID);
    printf("Your units consumed are : %d\n",unitsConsumed);

    
  if (unitsConsumed>0 && unitsConsumed<200)
  {
      chargeperUnit=1.2;
   
  }
  else if (unitsConsumed>=200 && unitsConsumed<400)
  {
      chargeperUnit=1.5;
  }
  else if (unitsConsumed >=400 && unitsConsumed<600)
  {
      chargeperUnit=1.8;
  }
  else if (unitsConsumed >=600)
  {
      chargeperUnit=2.0;   
  }
     
    else {
        printf("You haven't consumed any units\n");
    }
    
           printf("Your charge per unit is ksh%.2lf\n",                         chargeperUnit);
     
         Amount = unitsConsumed *chargeperUnit;    

 
      
if (Amount>400)
  {
      printf("Your Amount before the increment is ksh%.2lf\n",      Amount); 
      billIncrement = (15*Amount)/100;
      printf("Your bill increment is ksh%.2lf\n", billIncrement);  
       Amount=billIncrement + Amount;
       printf("Total Amount to pay is ksh%.2lf\n", Amount);
   
  }
      else if(Amount >0 && Amount<101) {
      printf("Total amount to pay is ksh100");
  }
      
      
      
      else if (Amount>100 && Amount<401){
      printf("Total Amount to pay is ksh%.2lf\n", Amount);
       
  }
 
      
   return 0;
}
