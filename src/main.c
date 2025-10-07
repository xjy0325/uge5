#include "../include/caesar.h"
#include "../include/vigenere.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  // deal with caesar
  if (strcmp(argv[2], "caesar")) {
    // check parameter-list
    if (argc != 3) {
      puts("Wrong format!(eg. e/d caesar text)");
      return 1;
    }

    if (strcmp(argv[1], "e")) {
      char *code = caesar_encrypt(argv[3]);
      printf("The code is %s", code);
      return 0;
    } else if (strcmp(argv[1], "d")) {
      char *code = caesar_decrypt(argv[3]);
      printf("The code is %s", code);
      return 0;
    } else {
      puts("Wrong format!(eg. e/d caesar text)");
      return 1;
    }
  }

  // deal with vigenere
  else if (strcmp(argv[2], "vigenere")) {
    // check parameter-list
    if (argc != 4) {
      puts("Wrong format!(eg. e/d vigenere text key)");
      return 1;
    }

    if (strcmp(argv[1], "e")) {
      char *code = vigenere_encrypt(argv[3], argv[4]);
      printf("The code is %s", code);
      return 0;
    } else if (strcmp(argv[1], "d")) {
      char *code = vigenere_decrypt(argv[3], argv[4]);
      printf("The code is %s", code);
      return 0;
    } else {
      puts("Wrong format!(eg. e caesar text)");
      return 1;
    }
  }
}