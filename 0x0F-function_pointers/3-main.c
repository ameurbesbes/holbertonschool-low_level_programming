#include "3-calc.h"
#include <stdlib.h>
/**
 * 
 * 
 *
 * 
 */
int main(int argc, char *argv[])
{
	int i, j, res;
	int (*fun)(int, int);
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	if(argc != 4)
	{
		printf("Error\n");
		return(98);
	}
        fun = get_op_func(argv[2]);
        if (fun == NULL)
        {
                printf("Error\n");
                return(99);
        }
        
        res = fun(i, j);
        printf("%d\n",res);

}