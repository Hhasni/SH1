


int	main(void)
{
	int		ret;
	char	*line;

	while ((ret = get_next_line(0, &line)) > 0)
	{
		free(line);
	}
	return (0);
}
