#include "rot.h"

int decrypt(const char *ciphertext, const int rotations)
{
    // Make sure we're not passed a NULL-pointer
    if (ciphertext == NULL)
    {
        return EXIT_FAILURE;
    }

    // Decrypt ciphertext
    (void) fprintf(stdout, "Plaintext: ");
    for (size_t i = 0; i < strlen(ciphertext); i++)
    {
        (void) fprintf(stdout, "%c", (char) ciphertext[i] - (int) rotations);
    }
    (void) fprintf(stdout, "\n");

    return EXIT_SUCCESS;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        (void) fprintf(stderr, "Usage: %s <ciphertext> <rotations>\n", argv[0]);
        return EXIT_FAILURE;
    }

    (void) fprintf(stdout, "Ciphertext: %s\n", argv[1]);

    return decrypt(argv[1], atoi(argv[2]));
}

