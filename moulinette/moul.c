/*
** student_tests.c for asm_minilibc in /home/auzou_t/rendu/asm_minilibc/moulinette
** 
** Made by Thibaud Auzou
** Login   <auzou_t@epitech.net>
** 
** Started on  Tue Mar 10 13:58:19 2015 Thibaud Auzou
** Last update Wed Mar 11 13:32:08 2015 Thibaud Auzou
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

static void	goUp(char *str)
{
  int		i = 0;

  while (str[i])
    {
      if (rand() % 2 == 0)
	str[i] = toupper(str[i]);
      ++i;
    }
}

int		main()
{
  char		buff1[512];
  char		buff2[512];
  char		buff3[512];
  char		buff4[512];
  char		buff5[512];
  char		buff6[512];
  char		buff7[512];
  char		buff8[512];
  char		buff9[512];
  char		buff10[512];
  char		ascii[] = {'A', ' ', 'k', '4', 'm', '/', '|', 'g', 'p', 'f',
			   'd', '9', '0', '2', '(', ')', ':', 'Z', 'B', 'C',
			   'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
			   'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
			   'X', 'Y', '-', '+', '*', '%', '<', '>', '_', ']'};
  char		*tmp;

  bzero(buff1, 512);
  bzero(buff2, 512);
  bzero(buff3, 512);
  bzero(buff4, 512);
  bzero(buff5, 512);
  bzero(buff6, 512);
  bzero(buff7, 512);
  bzero(buff8, 512);
  bzero(buff9, 512);
  bzero(buff10, 512);

  sprintf(buff1, "zrfErGSeRGergh86576ra");
  sprintf(buff2, "PuT tHe lIme iN tHe CocoNut !!");
  sprintf(buff3, "");
  sprintf(buff4, "        \t\t\t\t\n\n\n\n\n        ");
  sprintf(buff5, "1654gGERTgertgeuu8756gseraaa45");

  goUp(strcpy(buff6, buff1));
  goUp(strcpy(buff7, buff2));
  goUp(strcpy(buff8, buff3));
  goUp(strcpy(buff9, buff4));
  goUp(strcpy(buff10, buff5));

  /*
  ** STRLEN
  */
  printf("\x1b[1;31;40mSTRLEN\x1b[0m\n");
  sleep(2);
  printf("%lu\n", (strlen(buff1) + 1));
  printf("%lu\n", (strlen(buff2) + 1));
  printf("%lu\n", (strlen(buff3) + 1));
  printf("%lu\n", (strlen(buff4) + 1));
  printf("%lu\n", (strlen(buff5) + 1));

  /*
  ** STRCMP
  */
  printf("\x1b[1;31;40mSTRCMP\x1b[0m\n");
  sleep(2);
  printf("%d\n", strcmp(buff1, buff2));
  printf("%d\n", strcmp(buff1, buff3));
  printf("%d\n", strcmp(buff1, buff4));
  printf("%d\n", strcmp(buff1, buff5));
  printf("%d\n", strcmp(buff1, buff1));

  printf("%d\n", strcmp(buff2, buff1));
  printf("%d\n", strcmp(buff2, buff3));
  printf("%d\n", strcmp(buff2, buff4));
  printf("%d\n", strcmp(buff2, buff5));
  printf("%d\n", strcmp(buff2, buff2));

  printf("%d\n", strcmp(buff3, buff1));
  printf("%d\n", strcmp(buff3, buff2));
  printf("%d\n", strcmp(buff3, buff4));
  printf("%d\n", strcmp(buff3, buff5));
  printf("%d\n", strcmp(buff3, buff3));

  printf("%d\n", strcmp(buff4, buff1));
  printf("%d\n", strcmp(buff4, buff2));
  printf("%d\n", strcmp(buff4, buff3));
  printf("%d\n", strcmp(buff4, buff5));
  printf("%d\n", strcmp(buff4, buff4));

  printf("%d\n", strcmp(buff5, buff1));
  printf("%d\n", strcmp(buff5, buff2));
  printf("%d\n", strcmp(buff5, buff3));
  printf("%d\n", strcmp(buff5, buff4));
  printf("%d\n", strcmp(buff5, buff5));

  /*
  ** STRNCMP
  */
  printf("\x1b[1;31;40mSTRNCMP\x1b[0m\n");
  printf("%d\n", strncmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff1, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff2, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff3, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff4, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff5, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff1, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff2, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff3, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff4, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff5, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff1, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff2, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff3, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff4, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff5, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncmp(buff1, buff1, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncmp(buff2, buff2, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncmp(buff3, buff3, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncmp(buff4, buff4, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncmp(buff5, buff5, rand() % (strlen(buff5) + 1)));

  /*
  ** STRCHR
  */
  printf("\x1b[1;31;40mSTRCHR\x1b[0m\n");
  sleep(2);
  if ((tmp = strchr(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strchr(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  /*
  ** RINDEX
  */
  printf("\x1b[1;31;40mRINDEX\x1b[0m\n");
  sleep(2);
  if ((tmp = rindex(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff1, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff2, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff3, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff4, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = rindex(buff5, ascii[rand() % strlen(ascii)])) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  /*
  ** STRCASECMP
  */
  printf("\x1b[1;31;40mSTRCASECMP\x1b[0m\n");
  sleep(2);
  printf("%d\n", strcasecmp(buff1, buff2));
  printf("%d\n", strcasecmp(buff1, buff3));
  printf("%d\n", strcasecmp(buff1, buff4));
  printf("%d\n", strcasecmp(buff1, buff5));
  printf("%d\n", strcasecmp(buff1, buff1));
  printf("%d\n", strcasecmp(buff1, buff6));

  printf("%d\n", strcasecmp(buff2, buff1));
  printf("%d\n", strcasecmp(buff2, buff3));
  printf("%d\n", strcasecmp(buff2, buff4));
  printf("%d\n", strcasecmp(buff2, buff5));
  printf("%d\n", strcasecmp(buff2, buff2));
  printf("%d\n", strcasecmp(buff2, buff7));

  printf("%d\n", strcasecmp(buff3, buff1));
  printf("%d\n", strcasecmp(buff3, buff2));
  printf("%d\n", strcasecmp(buff3, buff4));
  printf("%d\n", strcasecmp(buff3, buff5));
  printf("%d\n", strcasecmp(buff3, buff3));
  printf("%d\n", strcasecmp(buff3, buff8));

  printf("%d\n", strcasecmp(buff4, buff1));
  printf("%d\n", strcasecmp(buff4, buff2));
  printf("%d\n", strcasecmp(buff4, buff3));
  printf("%d\n", strcasecmp(buff4, buff5));
  printf("%d\n", strcasecmp(buff4, buff4));
  printf("%d\n", strcasecmp(buff4, buff9));

  printf("%d\n", strcasecmp(buff5, buff1));
  printf("%d\n", strcasecmp(buff5, buff2));
  printf("%d\n", strcasecmp(buff5, buff3));
  printf("%d\n", strcasecmp(buff5, buff4));
  printf("%d\n", strcasecmp(buff5, buff5));
  printf("%d\n", strcasecmp(buff5, buff10));

  /*
  ** STRNCASECMP
  */
  printf("\x1b[1;31;40mSTRNCASECMP\x1b[0m\n");
  sleep(2);
  printf("%d\n", strncasecmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff1, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff6, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncasecmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff2, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff7, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncasecmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff3, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff8, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncasecmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff4, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff9, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncasecmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff5, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff10, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncasecmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff1, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff6, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncasecmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff2, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff7, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncasecmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff3, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff8, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncasecmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff4, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff9, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncasecmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff5, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff10, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncasecmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff1, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff6, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncasecmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff2, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff7, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncasecmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff3, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff8, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncasecmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff4, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff9, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncasecmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff5, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff10, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncasecmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff1, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff6, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncasecmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff2, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff7, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncasecmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff3, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff8, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncasecmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff4, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff9, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncasecmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff5, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff10, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncasecmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff1, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff6, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncasecmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff2, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff7, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncasecmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff3, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff8, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncasecmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff4, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff9, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncasecmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff5, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff10, rand() % (strlen(buff5) + 1)));

  printf("%d\n", strncasecmp(buff1, buff2, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff3, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff4, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff5, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff1, rand() % (strlen(buff1) + 1)));
  printf("%d\n", strncasecmp(buff1, buff6, rand() % (strlen(buff1) + 1)));

  printf("%d\n", strncasecmp(buff2, buff1, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff3, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff4, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff5, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff2, rand() % (strlen(buff2) + 1)));
  printf("%d\n", strncasecmp(buff2, buff7, rand() % (strlen(buff2) + 1)));

  printf("%d\n", strncasecmp(buff3, buff1, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff2, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff4, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff5, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff3, rand() % (strlen(buff3) + 1)));
  printf("%d\n", strncasecmp(buff3, buff8, rand() % (strlen(buff3) + 1)));

  printf("%d\n", strncasecmp(buff4, buff1, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff2, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff3, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff5, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff4, rand() % (strlen(buff4) + 1)));
  printf("%d\n", strncasecmp(buff4, buff9, rand() % (strlen(buff4) + 1)));

  printf("%d\n", strncasecmp(buff5, buff1, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff2, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff3, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff4, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff5, rand() % (strlen(buff5) + 1)));
  printf("%d\n", strncasecmp(buff5, buff10, rand() % (strlen(buff5) + 1)));

  /*
  ** STRCSPN
  */
  printf("\x1b[1;31;40mSTRCSPN\x1b[0m\n");
  sleep(2);
  printf("%lu\n", strcspn(buff1, buff1));
  printf("%lu\n", strcspn(buff1, buff2));
  printf("%lu\n", strcspn(buff1, buff3));
  printf("%lu\n", strcspn(buff1, buff4));
  printf("%lu\n", strcspn(buff1, buff5));
  printf("%lu\n", strcspn(buff1, buff6));
  printf("%lu\n", strcspn(buff1, buff7));
  printf("%lu\n", strcspn(buff1, buff8));
  printf("%lu\n", strcspn(buff1, buff9));
  printf("%lu\n", strcspn(buff1, buff10));

  printf("%lu\n", strcspn(buff2, buff1));
  printf("%lu\n", strcspn(buff2, buff2));
  printf("%lu\n", strcspn(buff2, buff3));
  printf("%lu\n", strcspn(buff2, buff4));
  printf("%lu\n", strcspn(buff2, buff5));
  printf("%lu\n", strcspn(buff2, buff6));
  printf("%lu\n", strcspn(buff2, buff7));
  printf("%lu\n", strcspn(buff2, buff8));
  printf("%lu\n", strcspn(buff2, buff9));
  printf("%lu\n", strcspn(buff2, buff10));

  printf("%lu\n", strcspn(buff3, buff1));
  printf("%lu\n", strcspn(buff3, buff2));
  printf("%lu\n", strcspn(buff3, buff3));
  printf("%lu\n", strcspn(buff3, buff4));
  printf("%lu\n", strcspn(buff3, buff5));
  printf("%lu\n", strcspn(buff3, buff6));
  printf("%lu\n", strcspn(buff3, buff7));
  printf("%lu\n", strcspn(buff3, buff8));
  printf("%lu\n", strcspn(buff3, buff9));
  printf("%lu\n", strcspn(buff3, buff10));

  printf("%lu\n", strcspn(buff4, buff1));
  printf("%lu\n", strcspn(buff4, buff2));
  printf("%lu\n", strcspn(buff4, buff3));
  printf("%lu\n", strcspn(buff4, buff4));
  printf("%lu\n", strcspn(buff4, buff5));
  printf("%lu\n", strcspn(buff4, buff6));
  printf("%lu\n", strcspn(buff4, buff7));
  printf("%lu\n", strcspn(buff4, buff8));
  printf("%lu\n", strcspn(buff4, buff9));
  printf("%lu\n", strcspn(buff4, buff10));

  printf("%lu\n", strcspn(buff5, buff1));
  printf("%lu\n", strcspn(buff5, buff2));
  printf("%lu\n", strcspn(buff5, buff3));
  printf("%lu\n", strcspn(buff5, buff4));
  printf("%lu\n", strcspn(buff5, buff5));
  printf("%lu\n", strcspn(buff5, buff6));
  printf("%lu\n", strcspn(buff5, buff7));
  printf("%lu\n", strcspn(buff5, buff8));
  printf("%lu\n", strcspn(buff5, buff9));
  printf("%lu\n", strcspn(buff5, buff10));

  printf("%lu\n", strcspn(buff6, buff1));
  printf("%lu\n", strcspn(buff6, buff2));
  printf("%lu\n", strcspn(buff6, buff3));
  printf("%lu\n", strcspn(buff6, buff4));
  printf("%lu\n", strcspn(buff6, buff5));
  printf("%lu\n", strcspn(buff6, buff6));
  printf("%lu\n", strcspn(buff6, buff7));
  printf("%lu\n", strcspn(buff6, buff8));
  printf("%lu\n", strcspn(buff6, buff9));
  printf("%lu\n", strcspn(buff6, buff10));

  printf("%lu\n", strcspn(buff7, buff1));
  printf("%lu\n", strcspn(buff7, buff2));
  printf("%lu\n", strcspn(buff7, buff3));
  printf("%lu\n", strcspn(buff7, buff4));
  printf("%lu\n", strcspn(buff7, buff5));
  printf("%lu\n", strcspn(buff7, buff6));
  printf("%lu\n", strcspn(buff7, buff7));
  printf("%lu\n", strcspn(buff7, buff8));
  printf("%lu\n", strcspn(buff7, buff9));
  printf("%lu\n", strcspn(buff7, buff10));

  printf("%lu\n", strcspn(buff8, buff1));
  printf("%lu\n", strcspn(buff8, buff2));
  printf("%lu\n", strcspn(buff8, buff3));
  printf("%lu\n", strcspn(buff8, buff4));
  printf("%lu\n", strcspn(buff8, buff5));
  printf("%lu\n", strcspn(buff8, buff6));
  printf("%lu\n", strcspn(buff8, buff7));
  printf("%lu\n", strcspn(buff8, buff8));
  printf("%lu\n", strcspn(buff8, buff9));
  printf("%lu\n", strcspn(buff8, buff10));

  printf("%lu\n", strcspn(buff9, buff1));
  printf("%lu\n", strcspn(buff9, buff2));
  printf("%lu\n", strcspn(buff9, buff3));
  printf("%lu\n", strcspn(buff9, buff4));
  printf("%lu\n", strcspn(buff9, buff5));
  printf("%lu\n", strcspn(buff9, buff6));
  printf("%lu\n", strcspn(buff9, buff7));
  printf("%lu\n", strcspn(buff9, buff8));
  printf("%lu\n", strcspn(buff9, buff9));
  printf("%lu\n", strcspn(buff9, buff10));

  printf("%lu\n", strcspn(buff10, buff1));
  printf("%lu\n", strcspn(buff10, buff2));
  printf("%lu\n", strcspn(buff10, buff3));
  printf("%lu\n", strcspn(buff10, buff4));
  printf("%lu\n", strcspn(buff10, buff5));
  printf("%lu\n", strcspn(buff10, buff6));
  printf("%lu\n", strcspn(buff10, buff7));
  printf("%lu\n", strcspn(buff10, buff8));
  printf("%lu\n", strcspn(buff10, buff9));
  printf("%lu\n", strcspn(buff10, buff10));

  /*
  ** STRPBRK
  */
  printf("\x1b[1;31;40mSTRPBRK\x1b[0m\n");
  sleep(2);
  if ((tmp = strpbrk(buff1, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff9)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff1, buff10)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strpbrk(buff2, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff9)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff2, buff10)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strpbrk(buff3, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff9)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff3, buff10)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strpbrk(buff4, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff9)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff4, buff10)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strpbrk(buff5, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff9)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff5, buff10)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strpbrk(buff6, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff9)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff6, buff10)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strpbrk(buff7, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff9)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strpbrk(buff7, buff10)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  /*
  ** STRSTR
  */
  printf("\x1b[1;31;40mSTRSTR\x1b[0m\n");
  sleep(2);
  if ((tmp = strstr(buff1, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff2, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff3, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff4, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff5, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff6, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff7, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff8, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff9, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff10, &(ascii[rand() % strlen(ascii)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strstr(buff1, "")) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff2, "")) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff3, "")) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff4, "")) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strstr(buff1, buff1)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff2, buff2)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff3, buff3)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff4, buff4)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff5, buff5)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff6, buff6)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff7, buff7)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff8, buff8)) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  if ((tmp = strstr(buff1, &(buff1[rand() % strlen(buff1)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff2, &(buff2[rand() % strlen(buff2)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff4, &(buff4[rand() % strlen(buff4)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff5, &(buff5[rand() % strlen(buff5)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff6, &(buff6[rand() % strlen(buff6)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff7, &(buff7[rand() % strlen(buff7)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff9, &(buff9[rand() % strlen(buff9)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");
  if ((tmp = strstr(buff10, &(buff10[rand() % strlen(buff10)]))) != NULL)
    printf("%s\n", tmp);
  else
    printf("null\n");

  /*
  ** MEMSET
  */
  printf("\x1b[1;31;40mMEMSET\x1b[0m\n");
  sleep(2);
  printf("%s\n", memset(buff1, rand() % 77, rand() % strlen(buff1)));
  printf("%s\n", memset(buff2, rand() % 77, rand() % strlen(buff2)));
  printf("%s\n", memset(buff4, rand() % 77, rand() % strlen(buff4)));
  printf("%s\n", memset(buff5, rand() % 77, rand() % strlen(buff5)));
  printf("%s\n", memset(buff6, rand() % 77, rand() % strlen(buff6)));
  printf("%s\n", memset(buff7, rand() % 77, rand() % strlen(buff7)));
  printf("%s\n", memset(buff9, rand() % 77, rand() % strlen(buff9)));
  printf("%s\n", memset(buff10, rand() % 77, rand() % strlen(buff10)));

  /*
  ** MEMCPY
  */
  printf("\x1b[1;31;40mMEMCPY\x1b[0m\n");
  sleep(2);
  printf("%s\n", memcpy(buff1, buff2, rand() % strlen(buff1) % strlen(buff2)));
  printf("%s\n", memcpy(buff1, buff3, strlen(buff3)));
  printf("%s\n", memcpy(buff1, buff4, rand() % strlen(buff1) % strlen(buff4)));
  printf("%s\n", memcpy(buff1, buff5, rand() % strlen(buff1) % strlen(buff5)));
  printf("%s\n", memcpy(buff1, buff6, rand() % strlen(buff1) % strlen(buff6)));
  printf("%s\n", memcpy(buff1, buff7, rand() % strlen(buff1) % strlen(buff7)));
  printf("%s\n", memcpy(buff1, buff8, strlen(buff8)));
  printf("%s\n", memcpy(buff1, buff9, rand() % strlen(buff1) % strlen(buff9)));
  printf("%s\n", memcpy(buff1, buff10, rand() % strlen(buff1) % strlen(buff10)));

  printf("%s\n", memcpy(buff2, buff1, rand() % strlen(buff2) % strlen(buff1)));
  printf("%s\n", memcpy(buff2, buff3, strlen(buff3)));
  printf("%s\n", memcpy(buff2, buff4, rand() % strlen(buff2) % strlen(buff4)));
  printf("%s\n", memcpy(buff2, buff5, rand() % strlen(buff2) % strlen(buff5)));
  printf("%s\n", memcpy(buff2, buff6, rand() % strlen(buff2) % strlen(buff6)));
  printf("%s\n", memcpy(buff2, buff7, rand() % strlen(buff2) % strlen(buff7)));
  printf("%s\n", memcpy(buff2, buff8, strlen(buff8)));
  printf("%s\n", memcpy(buff2, buff9, rand() % strlen(buff2) % strlen(buff9)));
  printf("%s\n", memcpy(buff2, buff10, rand() % strlen(buff2) % strlen(buff10)));

  printf("%s\n", memcpy(buff4, buff2, rand() % strlen(buff4) % strlen(buff2)));
  printf("%s\n", memcpy(buff4, buff3, strlen(buff3)));
  printf("%s\n", memcpy(buff4, buff1, rand() % strlen(buff4) % strlen(buff1)));
  printf("%s\n", memcpy(buff4, buff5, rand() % strlen(buff4) % strlen(buff5)));
  printf("%s\n", memcpy(buff4, buff6, rand() % strlen(buff4) % strlen(buff6)));
  printf("%s\n", memcpy(buff4, buff7, rand() % strlen(buff4) % strlen(buff7)));
  printf("%s\n", memcpy(buff4, buff8, strlen(buff8)));
  printf("%s\n", memcpy(buff4, buff9, rand() % strlen(buff4) % strlen(buff9)));
  printf("%s\n", memcpy(buff4, buff10, rand() % strlen(buff4) % strlen(buff10)));

  printf("%s\n", memcpy(buff5, buff2, rand() % strlen(buff5) % strlen(buff2)));
  printf("%s\n", memcpy(buff5, buff3, strlen(buff3)));
  printf("%s\n", memcpy(buff5, buff4, rand() % strlen(buff5) % strlen(buff4)));
  printf("%s\n", memcpy(buff5, buff1, rand() % strlen(buff1) % strlen(buff5)));
  printf("%s\n", memcpy(buff5, buff6, rand() % strlen(buff5) % strlen(buff6)));
  printf("%s\n", memcpy(buff5, buff7, rand() % strlen(buff5) % strlen(buff7)));
  printf("%s\n", memcpy(buff5, buff8, strlen(buff8)));
  printf("%s\n", memcpy(buff5, buff9, rand() % strlen(buff5) % strlen(buff9)));
  printf("%s\n", memcpy(buff5, buff10, rand() % strlen(buff5) % strlen(buff10)));

  /*
  ** MEMMOVE
  */
  printf("\x1b[1;31;40mMEMMOVE\x1b[0m\n");
  sleep(2);
  printf("%s\n", memmove(&(buff1[rand() % strlen(buff1)]), &(buff1[rand() % strlen(buff1)]), rand() % 77));
  printf("%s\n", memmove(&(buff2[rand() % strlen(buff2)]), &(buff2[rand() % strlen(buff2)]), rand() % 77));
  printf("%s\n", memmove(&(buff4[rand() % strlen(buff4)]), &(buff4[rand() % strlen(buff4)]), rand() % 77));
  printf("%s\n", memmove(&(buff5[rand() % strlen(buff5)]), &(buff5[rand() % strlen(buff5)]), rand() % 77));
  printf("%s\n", memmove(&(buff6[rand() % strlen(buff6)]), &(buff6[rand() % strlen(buff6)]), rand() % 77));
  printf("%s\n", memmove(&(buff7[rand() % strlen(buff7)]), &(buff7[rand() % strlen(buff7)]), rand() % 77));
  printf("%s\n", memmove(&(buff9[rand() % strlen(buff9)]), &(buff9[rand() % strlen(buff9)]), rand() % 77));
  printf("%s\n", memmove(&(buff10[rand() % strlen(buff10)]), &(buff10[rand() % strlen(buff10)]), rand() % 77));
  printf("%s\n", memmove(&(buff1[rand() % strlen(buff1)]), &(buff1[rand() % strlen(buff1)]), rand() % 77));
  printf("%s\n", memmove(&(buff2[rand() % strlen(buff2)]), &(buff2[rand() % strlen(buff2)]), rand() % 77));
  printf("%s\n", memmove(&(buff4[rand() % strlen(buff4)]), &(buff4[rand() % strlen(buff4)]), rand() % 77));
  printf("%s\n", memmove(&(buff5[rand() % strlen(buff5)]), &(buff5[rand() % strlen(buff5)]), rand() % 77));
  printf("%s\n", memmove(&(buff6[rand() % strlen(buff6)]), &(buff6[rand() % strlen(buff6)]), rand() % 77));
  printf("%s\n", memmove(&(buff7[rand() % strlen(buff7)]), &(buff7[rand() % strlen(buff7)]), rand() % 77));
  printf("%s\n", memmove(&(buff9[rand() % strlen(buff9)]), &(buff9[rand() % strlen(buff9)]), rand() % 77));
  printf("%s\n", memmove(&(buff10[rand() % strlen(buff10)]), &(buff10[rand() % strlen(buff10)]), rand() % 77));
  printf("%s\n", memmove(&(buff1[rand() % strlen(buff1)]), &(buff1[rand() % strlen(buff1)]), rand() % 77));
  printf("%s\n", memmove(&(buff2[rand() % strlen(buff2)]), &(buff2[rand() % strlen(buff2)]), rand() % 77));
  printf("%s\n", memmove(&(buff4[rand() % strlen(buff4)]), &(buff4[rand() % strlen(buff4)]), rand() % 77));
  printf("%s\n", memmove(&(buff5[rand() % strlen(buff5)]), &(buff5[rand() % strlen(buff5)]), rand() % 77));
  printf("%s\n", memmove(&(buff6[rand() % strlen(buff6)]), &(buff6[rand() % strlen(buff6)]), rand() % 77));
  printf("%s\n", memmove(&(buff7[rand() % strlen(buff7)]), &(buff7[rand() % strlen(buff7)]), rand() % 77));
  printf("%s\n", memmove(&(buff9[rand() % strlen(buff9)]), &(buff9[rand() % strlen(buff9)]), rand() % 77));
  printf("%s\n", memmove(&(buff10[rand() % strlen(buff10)]), &(buff10[rand() % strlen(buff10)]), rand() % 77));
  printf("%s\n", memmove(&(buff1[rand() % strlen(buff1)]), &(buff1[rand() % strlen(buff1)]), rand() % 77));
  printf("%s\n", memmove(&(buff2[rand() % strlen(buff2)]), &(buff2[rand() % strlen(buff2)]), rand() % 77));
  printf("%s\n", memmove(&(buff4[rand() % strlen(buff4)]), &(buff4[rand() % strlen(buff4)]), rand() % 77));
  printf("%s\n", memmove(&(buff5[rand() % strlen(buff5)]), &(buff5[rand() % strlen(buff5)]), rand() % 77));
  printf("%s\n", memmove(&(buff6[rand() % strlen(buff6)]), &(buff6[rand() % strlen(buff6)]), rand() % 77));
  printf("%s\n", memmove(&(buff7[rand() % strlen(buff7)]), &(buff7[rand() % strlen(buff7)]), rand() % 77));
  printf("%s\n", memmove(&(buff9[rand() % strlen(buff9)]), &(buff9[rand() % strlen(buff9)]), rand() % 77));
  printf("%s\n", memmove(&(buff10[rand() % strlen(buff10)]), &(buff10[rand() % strlen(buff10)]), rand() % 77));
  printf("%s\n", memmove(&(buff1[rand() % strlen(buff1)]), &(buff1[rand() % strlen(buff1)]), rand() % 77));
  printf("%s\n", memmove(&(buff2[rand() % strlen(buff2)]), &(buff2[rand() % strlen(buff2)]), rand() % 77));
  printf("%s\n", memmove(&(buff4[rand() % strlen(buff4)]), &(buff4[rand() % strlen(buff4)]), rand() % 77));
  printf("%s\n", memmove(&(buff5[rand() % strlen(buff5)]), &(buff5[rand() % strlen(buff5)]), rand() % 77));
  printf("%s\n", memmove(&(buff6[rand() % strlen(buff6)]), &(buff6[rand() % strlen(buff6)]), rand() % 77));
  printf("%s\n", memmove(&(buff7[rand() % strlen(buff7)]), &(buff7[rand() % strlen(buff7)]), rand() % 77));
  printf("%s\n", memmove(&(buff9[rand() % strlen(buff9)]), &(buff9[rand() % strlen(buff9)]), rand() % 77));
  printf("%s\n", memmove(&(buff10[rand() % strlen(buff10)]), &(buff10[rand() % strlen(buff10)]), rand() % 77));
  printf("%s\n", memmove(&(buff1[rand() % strlen(buff1)]), &(buff1[rand() % strlen(buff1)]), rand() % 77));
  printf("%s\n", memmove(&(buff2[rand() % strlen(buff2)]), &(buff2[rand() % strlen(buff2)]), rand() % 77));
  printf("%s\n", memmove(&(buff4[rand() % strlen(buff4)]), &(buff4[rand() % strlen(buff4)]), rand() % 77));
  printf("%s\n", memmove(&(buff5[rand() % strlen(buff5)]), &(buff5[rand() % strlen(buff5)]), rand() % 77));
  printf("%s\n", memmove(&(buff6[rand() % strlen(buff6)]), &(buff6[rand() % strlen(buff6)]), rand() % 77));
  printf("%s\n", memmove(&(buff7[rand() % strlen(buff7)]), &(buff7[rand() % strlen(buff7)]), rand() % 77));
  printf("%s\n", memmove(&(buff9[rand() % strlen(buff9)]), &(buff9[rand() % strlen(buff9)]), rand() % 77));
  printf("%s\n", memmove(&(buff10[rand() % strlen(buff10)]), &(buff10[rand() % strlen(buff10)]), rand() % 77));
  printf("%s\n", memmove(&(buff1[rand() % strlen(buff1)]), &(buff1[rand() % strlen(buff1)]), rand() % 77));
  printf("%s\n", memmove(&(buff2[rand() % strlen(buff2)]), &(buff2[rand() % strlen(buff2)]), rand() % 77));
  printf("%s\n", memmove(&(buff4[rand() % strlen(buff4)]), &(buff4[rand() % strlen(buff4)]), rand() % 77));
  printf("%s\n", memmove(&(buff5[rand() % strlen(buff5)]), &(buff5[rand() % strlen(buff5)]), rand() % 77));
  printf("%s\n", memmove(&(buff6[rand() % strlen(buff6)]), &(buff6[rand() % strlen(buff6)]), rand() % 77));
  printf("%s\n", memmove(&(buff7[rand() % strlen(buff7)]), &(buff7[rand() % strlen(buff7)]), rand() % 77));
  printf("%s\n", memmove(&(buff9[rand() % strlen(buff9)]), &(buff9[rand() % strlen(buff9)]), rand() % 77));
  printf("%s\n", memmove(&(buff10[rand() % strlen(buff10)]), &(buff10[rand() % strlen(buff10)]), rand() % 77));

  printf("\n\nBY AUZOU_T & VIEIRA_Q\n");
  return (0);
}
