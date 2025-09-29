 

int	ft_atoi(char *str)
{
	int i;       // índice para caminhar pela string
	int sign;    // guarda o sinal final: +1 ou -1
	int result;  // acumula o valor numérico lido

	i = 0;                // começamos no início da string
	sign = 1;             // assume positivo por padrão
	result = 0;           // ainda não somamos nada

	// 1) Pular "whitespaces" do início:
	//    espaço ' ' (32) ou caracteres de controle 9..13: \t \n \v \f \r
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;              // avança enquanto só tiver espaço/controle

	// 2) Ler uma SEQUÊNCIA de sinais '+' e '-'
	//    Cada '-' inverte o sinal; '+' não muda nada.
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-') // se for '-', inverte o sinal acumulado
			sign = -sign;
		i++;               // avança para o próximo caractere (pode ser outro sinal)
	}

	// 3) Ler os dígitos e montar o número
	//    Enquanto o caractere estiver entre '0' e '9', acumulamos em result
	while (str[i] >= '0' && str[i] <= '9')
	{
		// result * 10 "anda uma casa para a esquerda"
		// (str[i] - '0') converte o char para seu valor numérico 0..9
		result = result * 10 + (str[i] - '0');
		i++; // avança para o próximo caractere
	}

	// 4) Aplica o sinal acumulado e retorna
	return (sign * result);
}
