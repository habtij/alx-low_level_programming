#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table content to stdout
 * @ht: A pointer to the hash table
 *
 * Decription: The function prints out the key/value pairs from the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
unsigned char comma = 0;

if (ht == NULL)
{
return;
}

printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (comma == 1)
{
print(", ");
}
node = ht->array[i];
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;

if (node != NULL)
{
print(", ");
}
}
comma = 1;
}
}
printf("}\n");
}
