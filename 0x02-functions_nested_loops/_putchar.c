#include <unistd.h>
nt _putchar(char c)
{
		return (write(1, &c, 1));
}
