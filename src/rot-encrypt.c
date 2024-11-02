#include "rot.h"

int encrypt(const char *plaintext, const int rotations)
{
    // Make sure we're not passed a NULL-pointer
    if (plaintext == NULL)
    {
        (void) fprintf(stderr, "xor-encrypt.c:3: argument 'plaintext' is NULL\n");
        return EXIT_FAILURE;
    }

    // Encrypt plaintext
    (void) fprintf(stdout, "Ciphertext: ");
    for (size_t i = 0; i < strlen(plaintext); i++)
    {
        (void) fprintf(stdout, "%c", (char) plaintext[i] + (int) rotations);
    }
    (void) fprintf(stdout, "\n");

    return EXIT_SUCCESS;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        (void) fprintf(stderr, "Usage: %s <plaintext> <rotations>\n", argv[0]);
        return EXIT_FAILURE;
    }

    (void) fprintf(stdout, "Plaintext: %s\n", argv[1]);

    return encrypt(argv[1], atoi(argv[2]));
}
