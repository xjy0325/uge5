#include "caesar.h"
#include <stdio.h>

char *caesar_encrypt(char *plaintext) {

  for (size_t counter = 0; plaintext[counter] != '\0'; counter++) {

    if (plaintext[counter] >= 'A' && plaintext[counter] <= 'W')
      plaintext[counter] += CAESAR_SHIFT;
    else if (plaintext[counter] >= 'X' && plaintext[counter] <= 'Z') {
      plaintext[counter] = plaintext[counter] - 26 + CAESAR_SHIFT;
    }
  }

  return plaintext;
}

char *caesar_decrypt(char *ciphertext) {

  for (size_t counter = 0; ciphertext[counter] != '\0'; counter++) {

    if (ciphertext[counter] >= 'D' && ciphertext[counter] <= 'Z')
      ciphertext[counter] -= CAESAR_SHIFT;
    else if (ciphertext[counter] >= 'A' && ciphertext[counter] <= 'C') {
      ciphertext[counter] = ciphertext[counter] + 26 - CAESAR_SHIFT;
    }
  }
  return ciphertext;
}