// Show semantics of modulo.
//
// The modulo function % in C has a semantics 
// that DOES NOT conform to usual mathematical conventions.
// It is not wrong.
//
// For positive numbers, there is no difference
// 4 % 7 = 4   (rest 4)
// 9 % 7 = 2   (rest 2)
//
// However, the interseting details can be seen for negativ numbers!
//
// in C:
//        -4 % 7 = -4
// which  is not in line with the usual mathematical convention
// that the number choosen as the representative of the residue class is always positive.
//
// If the %-operator in C was compatible with residue class arithmetics
// it would yield -4 mod 7 = 3 as a result.
//
// The residue class '[3] mod 7' that contains the integer 3
// contains exactly the numbers
// 
// [3] mod 7 = { m | m = 3 + k*7; k arbitrary integer}
//
//           = { ..., -11, -4 , 3, 10, 17, ...}
//
// For all integers (in a mathematical sense) the following
// property holds:
//
// m mod n = (m-n) mod n = (m+n) mod n
//
// Therefore, -4 mod 7 = (-4 + 7) mod 7 = 3 mod 7 = 3
//
// However in C: -4 % 7 = -4  != 3 = 3 % 7
//

#include<stdio.h>
#include<stdlib.h>

int main(void){
  
  printf("%3d %% %3d = %3d\n", 4,7,4%7);
  printf("%3d %% %3d = %3d\n", 9,7,9%7);
  printf("%3d %% %3d = %3d\n", -4,7,-4%7);
  return EXIT_SUCCESS;
}
