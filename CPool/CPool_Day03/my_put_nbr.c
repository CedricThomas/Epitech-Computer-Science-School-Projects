/*
** my_putnbr.c for my_putnbr in /home/RODRIG_1/rendu/Piscine_C_J03
** 
** Made by rodriguez gwendoline
** Login   <RODRIG_1@epitech.net>
** 
** Started on  Fri Oct 10 09:41:17 2014 rodriguez gwendoline
** Last update Fri Oct 10 09:48:35 2014 rodriguez gwendoline
*/

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    my_putnbr(nb / 10);
  my_putchar((nb % 10) + 48);
}
