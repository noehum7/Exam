char    *ft_strcpy(char *s1, char *s2)
{
	char *dest = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (dest);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}