/*
Ư������
for�� �̿�
}
1������
*
**
***
****
*****
2������
		*
	   **
	  ***
	 ****
	*****
3������
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