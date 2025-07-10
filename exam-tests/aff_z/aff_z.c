// percorre a string caracter por caracter e escreve 'z' seguido de nova linha caso encontrar;
// se nao existir 'z' o programa escreve 'z' seguido de uma nova linha (\n);
// se o numero de parametros passado nao eh 1, o programa mostra 'z' seguido de nova linha;

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int found;

	i = 0;
	found = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
			{
				write(1, "z\n", 2);
				return (0);
			}
			i++;
		}
	}
	write(1, "z\n", 2);
	return (0);
}