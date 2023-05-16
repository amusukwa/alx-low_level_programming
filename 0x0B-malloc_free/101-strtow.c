#include <stdlib.h>
#include "main.h"
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - locates index marking end of line
 * @str:string to be searched
 * Return:index marking the end of line
 */
int word_len(char *str)
{
int index = 0;
int len = 0;

while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}

/**
 * count_words - counts words in a string
 * @str:string to be counted
 * Return:number of words in string
 */
int count_words(char *str)
{
int index = 0, words = 0, len = 0;
for (index = 0; *(str + index); index++)
len++;
for (index = 0; index < len; index++)
{
if (*(str + index)!= ' ')
{
words++;
index += word_len(str + index);
}
}
	return (words);
}

/** 
 * strtow -  splits a string into words
 * @str:string to be split
 * Return:pointer to split words
 */
char **strtow(char *str)
{
char **strings;
int index, words, w, letters, l;

if (str == NULL || str[0] == '\0')
{
return (NULL);
}
words = count_words(str);
if (words == 0)
{
return (NULL);
}
strings = malloc(sizeof(char *) * words + 1);
if (strings == NULL)
{
return (NULL);++
for (w = 0; w < words; w++)
{
while (str[index] == ' ')
{
index++;
letters = word_len(str + index);
strings[w] = malloc(sizeof(char) * letters + 1);
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);	
for (l = 0; l < letters; l++)
strings[w][l] = str[index++];
strings[w][l] = '\0';
}
}
strings[w] = NULL;
return (strings);
}}
