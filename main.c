#include <stdio.h>
#include <math.h>


int main (){ 
    
    int a=1;
    
    while(a!=0){
        
    printf("Type the students age\n");
    scanf ("%d", &a);           //inputs the student's age
    
    if(a<5)
        printf("The student has to be above 5 years old") //defense
    
    else if(a>=5&&a<=7)
      printf("Infant A\n");
    
    else if(a>=8&&a<=10)
        printf("Infant B\n");
    
    else if (a<=1&&a<=13)
        printf("Juvenile A\n");
    
    else if (a>=14&&a<=17)
        printf("Juvenile B\n");
    
    else
        printf("Adult\n");
    }
        
  return 0;
}
