#include <stdio.h>

size_t	ft_strlen(const char *str);

int main(int argc, char** argv){
	if (argc == 1)
		return (1);
	(void)argv;
	ft_strlen(NULL);
	return (0);
	
}