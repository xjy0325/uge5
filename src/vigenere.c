#include "vigenere.h"
#include <stdio.h>
#include <string.h>

char *vigenere_encrypt(char *plaintext, char *key) {
  int shift = 0, origin = 0;

  // runover values in 'plaintext'
  for (size_t counter = 0; plaintext[counter] != '\0'; counter++) {

    // check if the character is uppercase
    if (plaintext[counter] >= 'A' && plaintext[counter] <= 'Z') {

      // repeat key and transform key to integer
      if (counter == 0) {
        shift = key[counter] - 'A';
      } else {
        shift = key[counter % strlen(key)] - 'A';
      }

      // transform 'plaintext' to integer
      origin = plaintext[counter] - 'A';

      plaintext[counter] = (shift + origin) % 26 + 'A';
    }
  }

  return plaintext;
}
char *vigenere_decrypt(char *ciphertext, char *key) {
  int shift = 0, origin = 0;

  // runover values in 'ciphertext'
  for (size_t counter = 0; ciphertext[counter] != '\0'; counter++) {

    // check if the character is uppercase
    if (ciphertext[counter] >= 'A' && ciphertext[counter] <= 'Z') {

      // transform plaintext to integer
      origin = ciphertext[counter] - 'A';

      // repeat key and transform key to integer
      if (counter == 0) {
        shift = key[counter] - 'A';
      } else {
        shift = key[counter % strlen(key)] - 'A';
      }

      ciphertext[counter] = (origin - shift + 26) % 26 + 'A';
    }
  }

  return ciphertext;
}