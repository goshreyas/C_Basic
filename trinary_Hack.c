Ref: https://www.geeksforgeeks.org/c-c-quiz-107-question-1/

#include <stdio.h>
int main()
{
    int a=1, b=2, c, d, k;
    a>b ? (c=10) : (d=10); // Valid
    //a>b ? c=10 : d=10;  // Invalid: l-value require.
    k = a>b ? 10 : 10;  // Valid
    a>b ? (c=10,d=20) : (c=20,d=10);  // Valid
	return 0;
}
