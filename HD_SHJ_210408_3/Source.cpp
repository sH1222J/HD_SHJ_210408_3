/*
특별문제
for문 이용
}
1번문제
*
**
***
****
*****
2번문제
		*
	   **
	  ***
	 ****
	*****
3번문제
  *
  **
  *
  ***
  *
  ****
  *
  *****

*/
#include<stdio.h>
void main() {
	for (int q = 0; q < 4; q++) {
		printf("*\n");
		for (int w = 0; w <= q + 1; w++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}