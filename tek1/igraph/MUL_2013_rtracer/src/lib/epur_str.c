/*
** epur_str.c for rt in /home/gicque_p/rendu/MUL_2013_rtracer/src/new_lib
** 
** Made by Pierrick Gicquelais
** Login   <gicque_p@epitech.net>
** 
** Started on  Mon May 12 16:52:12 2014 Pierrick Gicquelais
** Last update Wed May 14 16:11:11 2014 Pierrick Gicquelais
*/

#include	<stdlib.h>
#include	"lib.h"

char		*epur_str(char *src)
{
  char		*dest;
  int		i;
  int		j;

  i = 0;
  j = 0;
  if ((dest = malloc((my_strlen(src) + 1) * sizeof(char))) == NULL)
    my_error("Can't alloc memory");
  while (src[i] == ' ' || src[i] == '\t')
    i++;
  while (src[i])
    {
      if ((src[i] != ' ' || src[i + 1] != ' ') && \
	  (src[i] != '\t' || src[i + 1] != '\t'))
	dest[j++] = src[i];
      i++;
    }
  dest[j] = '\0';
  if (dest[j - 1] == ' ' || dest[j - 1] == '\t')
    dest[j - 1] = '\0';
  return (dest);
}
