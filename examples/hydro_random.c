#include <rtthread.h>
#include <hydrogen.h>

#include <stdio.h>
#include <stdlib.h>

void hydrogen_random_u32(int argc, char* argv[])
{
    rt_uint32_t range = 100;
    rt_uint32_t result = 0;

    if(argc == 2) {
        range = atoi(argv[1]);
    }

    int i, num0 = 0, num1 = 0;
    const int max_test = 10;

    printf("\n");
    for (i = 0; i < max_test; i++)
    {
        result = hydro_random_u32() % range;
        printf(" num: %d\n", result);
        result%2 ? num1++ : num0++;
    }
    printf("\n odd: %d, even: %d\n\n",num1, num0);
}
MSH_CMD_EXPORT(hydrogen_random_u32, generate an unpredictable value between 0 and 0xffffffff)

void hydrogen_random_uniform(int argc, char* argv[])
{
    rt_uint32_t range = 50;
    rt_uint32_t result = 0;

    if(argc == 2) {
        range = atoi(argv[1]);
    }

    int i, num0 = 0, num1 = 0;
    const int max_test = 10;

    printf("\n");
    for (i = 0; i < max_test; i++)
    {
        result = hydro_random_uniform(range);
        printf(" num: %d\n", result);
        result%2 ? num1++ : num0++;
    }
    printf("\n odd: %d, even: %d\n\n",num1, num0);
}
MSH_CMD_EXPORT(hydrogen_random_uniform, generate an unpredictable value between 0 and upper_bound (excluded))

