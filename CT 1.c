#include <stdio.h>
//RA2111027010043
int main()
{
    int a = 10,b = 15, result;
    //Arithmetic operator
  result = a+b;
  printf("Addition: a+b = %d \n",result);
  result = a-b;
  printf("Subtraction: a-b = %d \n",result);
  result = a*b;
  printf("Multiplication: a*b = %d \n",result);
  result = a/b;
  printf("Division: a/b = %d \n",result);
  result = a%b;
  printf("Modulo Division: %d \n",result);
  result = ++a;
  printf("Increment the value of a by 1: %d \n",result);
  result = --b;
  printf("Decremented the value of b by 1: %d \n",result);
  // Relational operator
  //RA2111027010043
  int s = 6, t = 4;
  printf("%d == %d is %d \n", s, t, s == t);
  printf("%d > %d is %d \n", s, t, s > t);
  printf("%d < %d is %d \n", s, t, s < t);
  printf("%d != %d is %d \n", s, t, s != t);
  printf("%d >= %d is %d \n", s, t, s >= t);
  printf("%d <= %d is %d \n", s, t, s <= t);
  // Logical operator
  //RA2111027010043
  int i = 5, j = 5, k = 10, final;
  printf("i is equal to j or k greater than j is is %d \n", (i == j) && (k > j));
  printf("i is equal to j or k less than j is %d \n", (i == j) || (k < j));
  printf("i not equal to j or k less than j is %d \n", (i != j) || (k < j));
  // Assignment operator
  //RA2111027010043
  int u = 21;
   int v ;
   v =  u;
   printf("  =  , Value of v = %d\n", v );
   v +=  u;
   printf("  += , Value of v = %d\n", v );
   v -=  u;
   printf("  -= , Value of v = %d\n", v );
   v *=  u;
   printf("  *= , Value of v = %d\n", v );
   v /=  u;
   printf("  /= , Value of v = %d\n", v );
   v = 200;
   v %=  u;
   printf("  %= , Value of v= %d\n", v );
   v <<=  2;
   printf("  <<= , Value of v = %d\n", v );
   v >>=  2;
   printf(" >>= , Value of v = %d\n", v );
   v &=  2;
   printf(" &= , Value of v = %d\n", v );
   v ^=  2;
   printf(" ^= , Value of v = %d\n", v );
   v |=  2;
   printf(" |= , Value of v = %d\n", v );
  // Increment operator
  //RA2111027010043
  int e = 10;
  ++e;
  printf("Value of e: %d\n",e);
  // Decrement operator
  //RA2111027010043
  int f = 10;
  --f;
  printf("Value of f: %d\n",f);
  //Conditional operator
  //RA2111027010043
  int number=13;
(number>14)? (printf("It is greater than number 14!")) : (printf("It is less than number 14!"));  // conditional operator  
  //Bitwise operator
  //RA2111027010043
  int a1 = 50;      
  int b1 = 5;    
  int result1 = 0;        
  result1 = a1 & b1;     // Binary AND Operator
  printf("\n\nBinary AND Operator of a1 and b1 is %d\n", result1 );
  result1 = a1 ^ b1;     // Binary XOR Operator
  printf("Binary XOR Operator of a1 and b1 is %d\n", result1 );
  result1 = ~a1;        // Binary Ones Complement Operator
  printf("Binary Ones Complement Operator of a1 is %d\n", result );
  result1 = a1 << 2;   // Binary Left Shift Operator
  printf("Binary Left Shift Operator of a1 is %d\n", result1 );
  result1 = a1 >> 2;   // Binary Right Shift Operator
  printf("Binary Right Shift Operator of a is %d\n", result1 );
  //Special operator
  //RA2111027010043
   printf("Sizes of int, char and float...\n");
  printf("int is: %d bytes\n", sizeof(int));
  printf("char is: %d bytes\n", sizeof(char));
  printf("float is: %d bytes\n", sizeof(float));
    return 0;
}