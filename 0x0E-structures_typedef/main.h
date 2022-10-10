#ifndef _ECI_MAIN_H
#define _ECI_MAIN_H

/* Return: char printed */
/* @c: input char */
int _putchar(char c);

/* Return: 1 or 0 */
/* @c: input char */
int _islower(int c);

/* Return: 1 or 0 */
/* @c: input char */
int _isalpha(int c);

/* Return: absolute value of number */
/* @n: input number */
int _abs(int n);

/* Return: 1 or 0 */
/* @c: input char */
int _isupper(int c);

/* Return: 1 or 0 */
/* @c: input char */
int _isdigit(int c);

/* Return: 1 or 0 */
/* @a: first number */
/* @b: second number */
int mul(int a, int b);

/* @s: the string to get its length */
/* Return: the length of the string excluding the null terminator. */
int _strlen(char *s);

/* @str: the string to print */
void _puts(char *str);

/* @dest: destination buffer */
/* @src: source string */
char *_strcpy(char *dest, char *src);

/* @s: the string containing the text to convert to integer */
/* Return: the converted integer or zero. */
int _atoi(char *s);

/* @dest: destination buffer */
/* @src: source string */
char *_strcat(char *dest, char *src);

/* @dest: destination buffer */
/* @src: source string */
/* @n: the number of characters to copy */
char *_strncat(char *dest, char *src, int n);

/* @dest: destination buffer */
/* @src: source string */
/* @n: the number of characters to copy */
char *_strncpy(char *dest, char *src, int n);

/* @s1: string 1 */
/* @s2: string 2 */
int _strcmp(char *s1, char *s2);

int _strncmp(char *s1, char *s2, int n);

/* @s: the buffer  */
/* @b: the char to copy  */
/* @n: the number of characters  */
char *_memset(char *s, char b, unsigned int n);

/* @dest: the dest buffer  */
/* @src: the src to copy  */
/* @n: the number of characters to copy */
/* Return: the new dest */
char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void _set_n(char *s2, unsigned int *n);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

void free_dog(dog_t *d);

#endif
