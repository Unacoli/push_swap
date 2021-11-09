void	arg_error(int ac, char **av)
{
	ac += 1;
	while (ac)
	{
		while (*av[ac])
		{
			if (*av[ac] < "0" && *av[ac] > "9")
			{
				write(1, "Error/n", 6);
				exit;
			}
		}
		ac += 1;
	}
}				

int	main(int ac, char **av)
{
	if (ac <= 0)
	{
		write(1, "Error/n", 6);
		exit;
	}
	arg_error(ac, av);
}
