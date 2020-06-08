/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 17:30:56 by daspark           #+#    #+#             */
/*   Updated: 2020/06/06 17:31:03 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//출력값 저장할 배열 arr 생성 & 초기화
void	init_array()
{
	int	i;
	int	j;
	int	**arr;

	arr = malloc(4*sizeof(char));
	*arr = malloc(4*sizeof(char));
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
}

//배열 출력
void	print_array(char colrow[4][4])
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

	//row-left 확인
	count = '1';
	i = 0;
	while (i < 3)
	{
		if ((arr[row][i] < arr[row][i+1]) && (arr[row][0] < arr[row][i+1]))
			count++;
		i++;
	}
	if (count != colrow[2][row])
		return (0);

	//row-right 확인
	count = '1';
	i = 3;
	while (i > 0)
	{
		if ((arr[row][i] < arr[row][i-1]) && arr[row][3] < arr[row][i-1])
			count++;
		i++;
	}
	if (count != colrow[3][row])
		return (0);

	//row-left, row-right을 모두 만족하는 경우
	return (1);
}

//칸이 모두 채워진 열이 col-up, col-down 조건을 만족하는지 확인
int		is_valid_col(int col, char **arr, char **colrow)
{
	//작성중
}

//같은 열, 같은 행에 해당 숫자가 있는지 확인하는 함수
void	is_unique(int n, int row, int col, char **arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr[row][i] == n)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (arr[i][col] == n)
			return (0);
		i++;
	}
	return (1);
}

//입력값 받아서 저장
int		main(int arc, char **arg)
{
	char	**colrow;
	int		i;
	int		j;
	int		k;

	colrow = malloc(4*sizeof(char));
	*colrow = malloc(4*sizeof(char));
	//colrow값 입력받아서 배열에 저장하기
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
}
