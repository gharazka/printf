#include "ft_printf.h"

int     main(void)
{
        char    initial = -128;
        char    *surname = "Harazka";
        int     age = 230;
	void	*ptr;
	char	*abc = "";

	ptr = &age;
	ft_printf("ft_printf: hello %c %s aged %x, %%, %d\n", initial, surname, age, 100);
	printf("printf: hello %c %s aged %x, %%, %d\n", initial, surname, age, 100);
	printf("printf: %p\n", ptr);
	ft_printf("ft_printf: %p\n", ptr);
	age = printf("printf: %%tttt\n");
	printf("%i\n", age);
	age = ft_printf("ft_printf: %%tttt\n");
	printf("%i\n", age);
}
