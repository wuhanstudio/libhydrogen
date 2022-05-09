#include <rtthread.h>
#include <hydrogen.h>

#include <stdio.h>

#define CONTEXT "Examples"
#define MESSAGE "Arbitrary data to hash"
#define MESSAGE_LEN 22

void hydrogen_generic_hash(void)
{
    uint8_t hash[hydro_hash_BYTES];

    hydro_hash_hash(hash, sizeof hash, MESSAGE, MESSAGE_LEN, CONTEXT, NULL);

    printf("\nMessage: %s\n", MESSAGE);
    printf("Hash: ");
    for (int i = 0; i < hydro_hash_BYTES; ++i) {
        printf("%02x", (unsigned int) hash[i]);
    }
    printf("\n\n");
}
MSH_CMD_EXPORT(hydrogen_generic_hash, single-part example without a key)
