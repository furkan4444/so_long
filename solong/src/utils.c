#include "so_long.h"

int	close_frame(t_game *game)
{
	mlx_destroy_window(game->mlx, game->mlx_win);
	exit(1);
	return (1);
}

int pplace(t_game *game)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(game->map[i] != 0)
	{
		
		while(game->map[i][j] != '\0')
		{
			if(game->map[i][j] == 'P')
			{
				game->prowplace = i;
				game->pcolumnplace = j;
				return (1);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int collect(t_game *game)
{
	int i;
	int j;
	int x;
	
	x = 0;
	i = 0;
	j = 0;
	while (game->map[i] != 0)
	{
		j = 0;
		while(game->map[i][j] != '\0')
		{
			if (game->map[i][j] == 'C')
				x++;
			j++;
		}
		i++;
	}
	return (x);
}

int rowc(t_game *game)
{
	int i;
	i = 0;
	while (game->map[i] != 0)
		i++;
	return(i * 64);
}

int	row_count(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			x++;
		i++;
	}
	return (x);
}

int columnc(t_game *game)
{
	int i;
	int j;
	
	j = 0;
	i = 0;
	while (game->map[i][j] != '\0')
		j++;
	return(j * 64);
}
