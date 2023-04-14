#include "hash_tables.h"
/**
* key_index - index of key stored in an array of a ht.
* @key: key to get its index.
* @size: size of array of ht.
* Return: index of the key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
