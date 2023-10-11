#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * @key: The key to get the index
 * @size: The size of the hash table array
 *
 * Return: The index of the key
 * Description: The function will use the djb2 algorithms.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
