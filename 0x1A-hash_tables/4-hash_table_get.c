#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with a key in a hash table
 * @ht: A pointer to the hash table
 * @key: The key to get the value
 *
 * Return: If the does not exist - NULL. Otherwise - value associated.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL || *key == '\0' || key == NULL)
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
{
return (NULL);
}

node = ht->array[index];
while (node && strcmp(node->key, key) != 0)
{
node = node->next;
}

return ((node != NULL) ? node->value : NULL);
}
