#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HEAPSIZE (128*1024)

typedef enum {
    MP_PARSE_SINGLE_INPUT,
    MP_PARSE_FILE_INPUT,
    MP_PARSE_EVAL_INPUT,
} mp_parse_input_kind_t;

int main()
{
	mp_stack_ctrl_init();
	mp_stack_set_limit(40000);
	char *heap = malloc(HEAPSIZE);
    gc_init(heap, heap + HEAPSIZE);
    
    mp_init();
    
    do_my_str("import test.py",MP_PARSE_SINGLE_INPUT);
    
    free(heap);
	return 0;
}
