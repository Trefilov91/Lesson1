#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef enum {
  PLUS            = '+',
  MINUS           = '-',
  MILTIPLEKATION  = '*',
  DIVISION        = '/'
} Operators_TypeDef;

int main()
{
    int x, y, result;
//    char operation;
    char userString[3];
    scanf ("%s",userString);
    //scanf ("%s",&operation);
    //scanf ("%f.2",&y);

    x = userString[0] & (~0x30);
    y = userString[2] & (~0x30);

    if (x >= 0 && x < 10){
        if (y >= 0 && y < 10){
            switch (userString[1]){
              case PLUS:            result = x + y;
                                    break;
              case MINUS:           result = x - y;
                                    break;
              case MILTIPLEKATION:  result = x * y;
                                    break;
              case DIVISION:        result = x / y;
                                    break;
              default:              printf("false operation");
                                    return 3;
            }
        }
        else {
                printf("y is not digit");
                return 2;
        }
    }
    else {
            printf("x is not digit");
            return 1;
    }


    printf("result = %d\n\r", result);

    return 7;
	



	//remote3
	

}
