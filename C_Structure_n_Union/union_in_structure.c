// Union inside Structure:
-------------------------------------------------------------------------------
#include <stdio.h>

struct {
    int s;
    union {
        int y;
        long z;
    };   // <--------------------- VALID
}t;

int main()
{
    t.s = 10;
    t.y = 1;
    t.z = 123;
    printf("s: %d, y: %d, z: %d\n", t.s, t.y, t.z); // <--------------------- VALID
	return 0;
}

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

struct {
    int s;
    union {
        int y;
        int z;
    }u;     // <--------------------- VALID
}t;

int main()
{
    t.s = 10;
    t.u.y = 1;
    t.u.z = 123;
    printf("s: %d, y: %d, z: %d\n", t.s, t.u.y, t.u.z); // <--------------------- VALID
	return 0;
}
-------------------------------------------------------------------------------


