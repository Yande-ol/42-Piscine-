int ft_recursive_power(int nb, int power)
{
    // 🔹 Regra 1: potência negativa retorna 0
    if (power < 0)
        return (0);

    // 🔹 Regra 2: caso base, qualquer número elevado a 0 é 1
    if (power == 0)
        return (1);

    // 🔹 Passo recursivo:
    // Multiplica nb pela potência do número com power-1
    return (nb * ft_recursive_power(nb, power - 1));
}
