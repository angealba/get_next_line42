/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analbarr <analbarr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:21:51 by analbarr          #+#    #+#             */
/*   Updated: 2022/12/15 19:11:44 by analbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*read_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	read_line = read_file(fd, read_line);
	if (!read_line)
		return (0);
	line = 


