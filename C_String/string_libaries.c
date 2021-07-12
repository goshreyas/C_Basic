

//================================================================================================================
// https://www.programiz.com/c-programming/online-compiler/
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void memcopy(void *dest, void *src) {
    printf("in memcopy()\n");
    printf("src: %s\n", (char*)src);
    int len = sizeof((char*)src);
    printf("len: %d\n", len);
    for(int i=0; i<len; i++) {
        *(char*)dest++ = *(char*)src++;
    }
    *((char*)dest) = '\0';
    return;
}

int main() {
    char dest[10];
    char *src = "ABC";
    memcopy(dest, src);
    printf("dest: %s\n", dest);
    // Write C code here
    printf("Hello world");
    
    return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

https://elixir.bootlin.com/linux/latest/source/lib/string.c#L881
void *memcpy(void *dest, const void *src, size_t count)
{
	char *tmp = dest;
	const char *s = src;

	while (count--)
		*tmp++ = *s++;
	return dest;
}

//================================================================================================================


















