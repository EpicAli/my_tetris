/*
** my_put_nbr.c for my_put_nbr.c in /home/Froxy/CPool_Day07/lib/my
** 
** Made by Yoann Kersulec
** Login   <Froxy@epitech.net>
** 
** Started on  Wed Oct 12 07:46:16 2016 Yoann Kersulec
** Last update Mon Feb 27 17:32:06 2017 Yoann Kersulec
*/

#include "../include/tetris.h"

void	my_put_nbr(int nb)
{
  int	nomb;

  nomb = 0;
  if (nb <= 9 && nb >= 0)
    my_putchar(nb + '0');
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (- 1);
      if (nb <= 9 && nb >=0)
	my_put_nbr(nb);
    }
  if (nb > 9)
    {
      nomb = nb % 10;
      my_put_nbr(nb / 10);
      my_putchar(nomb + '0');
    }
}
