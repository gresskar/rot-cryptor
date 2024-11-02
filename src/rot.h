#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char **argv);
int encrypt(const char *plaintext, const int rotations);
int decrypt(const char *ciphertext, const int rotations);
