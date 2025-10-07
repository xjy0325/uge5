#pragma once
/** @file caesar.h
 *  @brief Caesar cipher only defined for upper-case ASCII
 */

#ifndef CAESAR_SHIFT
#define CAESAR_SHIFT 3 /**< Shift for each letter. */
#endif

char *caesar_encrypt(char *plaintext);
/**
 * @brief Encrypt a single upper-case character
 * @note Non-uppercase characters are ignored. Uses @ref CAESAR_SHIFT.
 * @return Same string encrypted
 */
char *caesar_decrypt(char *ciphertext);
/**
 * @brief Decrypt a single upper-case character
 * @note Non-uppercase characters are ignored
 * @return Same string decrypted
 */
