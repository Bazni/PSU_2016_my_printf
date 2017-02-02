/*
** my_strdup.c for strdup in /home/gwendal.bazin/PSU_2016_my_printf
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Thu Nov 17 09:57:35 2016 Gwendal Bazin
** Last update Thu Nov 17 09:57:43 2016 Gwendal Bazin
*/

#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*my_string;
  int	i;

  i = 0;
  my_string = malloc(sizeof(char) * (my_strlen(str)));
  while (i < my_strlen(str))
    {
      my_string[i] = str[i];
      i++;
    }
  return (my_string);
}
