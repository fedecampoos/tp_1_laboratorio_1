
float suma(float n1, float n2)
{

    float resultado;
    resultado = n1 + n2;
    return resultado;

}

float resta(float n1, float n2)
{

    float resultado;
    resultado = n1 - n2;
    return resultado;

}

float multiplicacion(float n1, float n2)
{

    float resultado;
    resultado = n1 * n2;
    return resultado;

}

float division(float n1, float n2)
{

    float resultado;
    while (n2 == 0)
    {
        printf("No se puede dividir por 0. Ingrese un divisor mayor a 0: ");
        scanf("%f", &n2);
    }
    resultado = (float) n1 / n2;

    return resultado;

}

int calcularFactorial(int n1)
{
    int factorial;
    if(n1==0)
    {
        factorial=1;
    }
    else
    {
        factorial= n1*calcularFactorial(n1 -1);

    }
    return factorial;
}
