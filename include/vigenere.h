#pragma once
/** @file vigenere.h
 *  @brief vigenere cipher only defined for upper-case ASCII
 */

char *vigenere_encrypt(char *plaintext, char *key);
/**
 * @brief Encrypt a single upper-case character
 * @note Non-uppercase characters are ignored. Uses char*key.
 * @return Same string encrypted
 */
char *vigenere_decrypt(char *ciphertext, char *key);
/**
 * @brief Decrypt a single upper-case character
 * @note Non-uppercase characters are ignored
 * @return Same string decrypted
 */
