## Singly linked lists
- A linked list is a linear data structure ``like arrays``, in which the elements are not stored at contiguous memory locations ``unlike arrays``.
- The elements in a linked list are linked using pointers.
- A linked list consists of **nodes** where each node contains a ``data field`` and a ``pointer``(link) to the next node in the list.
- In C, we can represent a node using structures.
## Adantages of Linked list over Arrays
1. Dynamic size
2. Ease of insertion/deletion
### For this project we use this data structure
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

```