#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *htable;
htable = malloc(sizeof(hash_table_t));
if (!htable)
return (NULL);
htable->size = size;
htable->array = calloc(size, sizeof(hash_node_t *));
if (!htable->array)
return (free(htable), NULL);
return (htable);
}
