/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 10:40:41 by daspark           #+#    #+#             */
/*   Updated: 2020/06/07 10:40:51 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//배열 출력
void	print_array(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%c, ", colrow[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

//칸이 모두 채워진 행이 row-left, row-right 조건을 만족하는지 확인
int		is_valid_row(int row, char **arr, char **colrow)
{
	char	count; //보이는 상자의 개수
	int		i;
	char	max;

	//row-left 확인
	max = '0';
	count = '1';
	i = 0;
	while (i < 4)
	{
		if (arr[row][i] > max)
		{
			count++;
			max = arr[row][i];
		}
		i++;
	}
	if (count > colrow[2][row])
		return (0);
	max = '0';
	count = '1';
	i = 3;
	while (i >= 0)
	{
		if (arr[row][i] > max)
		{
			count++;
			max = arr[row][i];
		}
		i--;
	}
	if (row == 3)
	{
		if (count != colrow[3][row])
			return (0);
	}
	else
	{
		if (count > colrow[3][row])
			return (0);
	}
	return (1);
}

int		is_valid_col(int col, char **arr, char **colrow)
{
	char	count; 
	int		i;
	char	max;

	max = '0';
	count = '1';
	i = 0;
	while (i < 4)
	{
		if (arr[i][col] > max)
		{
			count++;
			max = arr[i][col];
		}
		i++;
	}
	if (col == 3)
	{
		if (count != colrow[0][col])
			return (0);
	}
	else
	{
		if (count > colrow[0][col])
			return (0);
	}
	max = '0';
	count = '1';
	i = 3;
	while (i >= 0)
	{
		if (arr[i][col] > max)
		{
			count++;
			max = arr[i][col];
		}
		i--;
	}
	if (col == 3)
	{
		if (count != colrow[1][col])
			return (0);
	}
	else
	{
		if (count > colrow[1][col])
			return (0);
	}
	return (1);
}

int		is_unique(int n, int row, int col, char **arr)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (arr[row][i] == n)
			return (0);
		i++;
	}
	i = 0;
	while (i < row)
	{
		if (arr[i][col] == n)
			return (0);
		i++;
	}
	return (1);
}

void	backtracking(int row, int col, char **arr, char **colrow)
{
	if (row == 4 && col == 4) 
	{
		print_array(arr);
		return ;
	}



	if (col == 0)
	{
		
	}
	else
	{
		
	}

	if (arr[row][col] == '4')
		backtracking(row, col - 1, arr, colrow);
	


}

int		main(int arc, char **arg)
{
	char	**colrow;
	int		i;
	int		j;
	int		k;

	i = 0;
	colrow = malloc(4 * sizeof(char *));
	while (i < 4)
	{
		*colrow = malloc(4 * sizeof(char));
		i++;
		colrow++;
	}
	if (arc != 2)
		return (0);
	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (arg[1][k] == ' ')
				k++;
			colrow[i][j] = arg[1][k];
			k++;
			j++;
		}
		i++;
	}
	//입력값이 배열에 잘 저장됐는지 확인하기 위한 출력
	print_array(colrow);

	backtracking(0, '1');
}
