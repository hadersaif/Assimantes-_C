
#include <stdio.h>
#include "functions.h"

void Add(int x2, int x3){
	printf("%d + %d = %d\n", x2, x3, x2+x3);
}
void Sub(int x2, int x3){
	printf("%d - %d = %d\n", x2, x3, x2-x3);

}
void Mul(int x2, int x3){
	printf("%d * %d = %d\n",x2, x3, x2*x3);

}
void Div(int x2, int x3){
	printf("%d / %d = %d\n", x2, x3, x2/x3);

}
void Rem(int x2, int x3){
	printf("%d % %d = %d\n", x2, x3, x2%x3);

}
void And(int x2, int x3){
	printf("%d & %d = %d\n", x2, x3, x2&x3);

}
void Or(int x2, int x3){
	printf("%d | %d = %d\n", x2, x3, x2|x3);

}
void Not(int x2){
	printf("!%d = %d\n", x2, !x2);

}
void Xor(int x2, int x3){
	printf("%d ^ %d = %d\n", x2, x3, x2^x3);

}
void Inc(int x2){
	printf("++%d = %d\n", x2, ++x2);

}
void Dec(int x2){
	printf("--%d = %d\n",x2, x2);

}
