/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 12:46:53 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-10-29 12:46:53 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// #include <fcntl.h>    // For open

// int	main(void)
// {
// 	int		fd;
// 	char	buffer[2] = {0};

// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	// O_WRONLY tells it to open the file for writing.
// 	// O_CREAT creates the file if it doesn’t exist.
// 	// O_TRUNC clears any existing content in the file if it already exists.
// 	// 0644 is the permission setting that controls who can read/write the file.
// 	if (fd == -1)
// 	{
// 		perror("Error opening file");
// 		return (1);                    
// 	}
// 	If open succeeds, fd will be a positive integer. 
//	If it fails, fd will be -1.
// 	ft_putchar_fd('A', fd);

// 	close(fd); 
// 	//we close the file to ensure the content is saved:
// 	fd = open("output.txt", O_RDONLY);
// 	// we open the file again, this time in read-only mode:
// 	if (fd == -1)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}
// 	// The read function loads one character from the file into buffer, 
// and then we print buffer to see what it contains:
// 	read(fd, buffer, 1);
// 	printf("Character written to file: %s\n", buffer);

// 	close(fd);

// 	return (0);
// }
// int	main()
// {
// 	char	c = '0';
// 	ft_putchar_fd(c, 1);
// 	ft_putchar_fd('B', 2);
// 	ft_putchar_fd('\n', 2);
// 	return (0);
// }