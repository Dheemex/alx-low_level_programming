#include "hash_tables.h"

/**
 * key_index - This get the index at which key/value
 *      pair should be stored in array of hash table
 *      @key: Shows the key to get index of.
 * @size: Shows the size of the array of hash table.
 *
 * Return: Shows the index of the key.
 * Description: shows Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
