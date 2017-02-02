/*
** my_putcharer.c for my_putcharer in /home/gwendal.bazin/CPool_infinadd/lib/my
**
** Made by Gwendal Bazin
** Login   <gwendal.bazin@epitech.net>
**
** Started on  Mon Oct 24 09:27:14 2016 Gwendal Bazin
** Last update Mon Nov 07 13:52:44 2016 Gwendal Bazin
*/

#include "my.h"

#include <unistd.h>

void	 my_putcharer(char c)
{
  write(2, &c, 1);
}
