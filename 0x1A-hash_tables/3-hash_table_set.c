#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: A pointer to the hash table
 * @key: The key to add. NB: The key cannot be an empty string.
 * @value: The value to be associated with the key.
 *
 * Return: On failure - 0, otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *val_copy;
unsigned long int index, i;

if (ht == NULL || *key == '\0' || key == NULL || value  == NULL)
{
return (0);
}
val_copy = strdup(value);
if (val_copy == NULL)
{
return (0);
}
index  = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = val_copy;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(val_copy);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = val_copy;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
