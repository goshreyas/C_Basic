
Declaring zero-length arrays i.e. a[0];

what does a structure element a[0] mean ? what is it used for ?



https://gcc.gnu.org/onlinedocs/gcc/Zero-Length.html


struct line {
  int length;
  char contents[0];
};

struct line *thisline = (struct line *)
  malloc (sizeof (struct line) + this_length);
thisline->length = this_length;


