#include <stdio.h> 
 main() 
 { 
     int K = 64; 
     printf("|%+20d|\n", K);  // right justification with +ve sign 
     printf("|%-20d|\n", K);  // left justification with no sign 
     printf("|%-+20d|\n", K); // left justification with +ve sign 
     printf("|%+-20d|\n", K); // left justification with +ve sign 
     printf("/%20d|\n", -K); // right justification with -ve sign 
     printf("|%-20d|\n", -K); // left justification with -ve sign 
 } 


zzzzzzzzzzzzzzzzzzzzz
