/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:42:01 by marcsilv          #+#    #+#             */
/*   Updated: 2025/01/18 13:18:36 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include "./external_libs.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define LOWER "abcdefghijklmnopqrstuvwxyz"
# define UPPER "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define DIGIT "0123456789"
# define HEXADECIMAL "0123456789abcdef"
# define HEXADECIMAL_UPPER "0123456789ABCDEF"
# define ALL "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"



typedef struct s_list	t_list;

//CTYPE
bool	ft_islower(int c);
bool	ft_isupper(int c);
bool 	ft_isalpha(int c);
bool 	ft_isalnum(int c);
bool 	ft_isascii(int c);
bool 	ft_isdigit(int c);
bool	ft_isprint(int c);
bool	ft_isspace(int c);

int	ft_tolower(int c);
int	ft_toupper(int c);


//CUSTOM FUNCTIONS
//BOOLS
bool	in_range(int n, int min, int max);
bool 	is_neg(int n);
bool 	is_pos(int n);

//LENGTH
int 	numlen(int n);						//returns the length of a number (e.g. 420 = 3)
int 	tablen(int *tab);					//returns the length of an int array

//MATRIX(CHAR **)
void	free_matrix(char **matrix);

int	matrix_len(char **matrix);

char	**copy_matrix(char **matrix);
char	**add_str_matrix(char **matrix, char *str);
char	**rm_str_matrix_index(char **matrix, int index);


//INT ARRAY
int	lowest_number(int *tab, int size);
int	highest_number(int *tab, int size);




//MATH
int		ft_sqrt(int n);
double	ft_pow(double base, double exp);


//STDLIB
int		ft_abs(int n);
int		ft_atoi(const char *str);
int		*quicksort(int *tab, unsigned int size);
int		*r_quicksort(int *tab, unsigned int size);

double	ft_atof(const char *str);

void	*ft_realloc(void *ptr, size_t size);
void	*ft_calloc(size_t count, size_t size);

char	*ft_itoa(int n);

//PRINTS
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		lower(unsigned int decimalnumber);
int		ft_print_unsigned(unsigned int n);
int		ft_print_ptr(unsigned long long *ptr);
int		ft_printf(const char *my_string, ...);
int		ft_fprintf(int fd, const char *str, ...);
int		ft_strcmp(const char *s1, const char *s2);

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_fputnbr(int fd, int nbr, int *res);
void	ft_fputstr(int fd, char *s, int *res);
void	ft_fputchar(int fd, char c, int *res);
void	ft_fprintptr(int fd, void *ptr, int *res);
void	ft_fprintbase(int fd, unsigned long long nbr, char *simbol, int *res);


//STRINGS
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcspn(const char *s, const char *reject);

size_t	ft_strlen(const char *s);
size_t	ft_strspn(const char *s, const char *accept);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

char	*ft_strdup(const char *s);
char	*ft_strsjoin(char *s1, char *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_string_split(char *str, char c);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strscat(char *dest, const char *src);
char	*ft_strnchr(const char *s, int c, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strsncat(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *s, const char *a, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));


void	*safe_malloc(size_t size);

char	*get_next_line(int fd);
char	**ft_split(char const *str, char c);

char	*ft_strjoin_free(char *s1, char *s2);

char	*ft_replace(const char* str, const char* new_word, int index);

#endif
