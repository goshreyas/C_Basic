Ref: https://www.geeksforgeeks.org/c-operators-question-15/

#define VAL 32 // 2^5 : 2<<5

char toUpper(char ch) {
  return (ch & ~VAL);  // Reset 5th bit.
}

char toLower(char ch) {
  return (ch | VAL);   // Set 5th bit.
}



============================================================
// https://www.geeksforgeeks.org/c-string-question-10/
#include <stdio.h>

void my_toUpper(char* str, int index)
{
	*(str + index) &= ~32;
}

int main()
{
	char arr[10] = "geeksquiz";
	my_toUpper(arr, 0);
	my_toUpper(arr, 5);
	printf("%s", arr);
	return 0;
}
++++++++++++++++++++++++++++++
Output:
GeeksQuiz
============================================================
