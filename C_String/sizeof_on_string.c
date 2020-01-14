

char *str3 = "GeeksQuiz";
int *ip; char *cp; float *fp; void *vp;
sizeof() on above variables are same.

    
# include <stdio.h>
#include <string.h>

int main()
{

    char *str = "GeeksQuiz";  // sizeof() will return pointer size i.e. system dependent.
    int *ip; char *cp; float *fp; void *vp;

    printf("sizeof(str) = %lu\n", sizeof(str));
    printf("sizeof(ip) = %lu, sizeof(cp) = %lu, sizeof(fp) = %lu, sizeof(vp) = %lu\n", \
        sizeof(ip), sizeof(cp), sizeof(fp), sizeof(vp));

    
    return 0;
}

Output:
sizeof(str) = 8
sizeof(ip) = 8, sizeof(cp) = 8, sizeof(fp) = 8, sizeof(vp) = 8
    
    


----------------------------------------------------------------------------------------------------
// https://ide.geeksforgeeks.org/YLtwTCs8Bd
# include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "GeeksQuiz";
    char str2[] = {'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z', '\0'};
    char *str3 = "GeeksQuiz";  // sizeof() will return pointer size i.e. system dependent.
    int *ip; char *cp; float *fp; void *vp;
    int n1 = sizeof(str1)/sizeof(str1[0]);
    int n2 = sizeof(str2)/sizeof(str2[0]);
    int n3 = sizeof(str3)/sizeof(str3[0]);
    
    printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
    printf("strlen(str1) = %lu, strlen(str2) = %lu, strlen(str3) = %lu\n", \
        strlen(str1), strlen(str2), strlen(str3));
    printf("sizeof(str1) = %lu, sizeof(str2) = %lu, sizeof(str3) = %lu\n", \
        sizeof(str1), sizeof(str2), sizeof(str3));
    printf("sizeof(str1[0]) = %lu, sizeof(str2[0]) = %lu, sizeof(str3[0]) = %lu\n", \
        sizeof(str1[0]), sizeof(str2[0]), sizeof(str3[0]));
    printf("sizeof(ip) = %lu, sizeof(cp) = %lu, sizeof(fp) = %lu, sizeof(vp) = %lu\n", \
        sizeof(ip), sizeof(cp), sizeof(fp), sizeof(vp));

    
    return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Output:
n1 = 10, n2 = 10, n3 = 8
strlen(str1) = 9, strlen(str2) = 9, strlen(str3) = 9
sizeof(str1) = 10, sizeof(str2) = 10, sizeof(str3) = 8
sizeof(str1[0]) = 1, sizeof(str2[0]) = 1, sizeof(str3[0]) = 1
sizeof(ip) = 8, sizeof(cp) = 8, sizeof(fp) = 8, sizeof(vp) = 8
----------------------------------------------------------------------------------------------------
