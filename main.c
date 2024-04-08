/*
Gerador de senhas random ->
- especificar numeros de caracteres (máx de 50) OK
- opções:
- letra maiuscula OK
- letra minúscula OK
- números OK
- símbolos
*/

#include <stdio.h>
#include <time.h>

#define MAX_LENGTH 50

// função que gera a senha
void generatePassword(char *password, int length)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand((unsigned int)time(NULL));
    for (int i = 0; i < length; i++)
    {

        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }
    /*garante que a string gerada seja terminada com o caractere nulo ('\0').*/
    password[length] = '\0';
}

int main()
{
    // +1 pro caractere nulo '\0'
    char password[MAX_LENGTH + 1];
    int length;

    printf("---------------------------------\n");
    printf("    ||| GERADOR DE SENHAS |||\n");
    printf("---------------------------------\n");

    printf("Bem-vindo(a) ao nosso sistema!\n");

    printf("Quantos caracteres você deseja que sua senha tenha? (Obs.: mínimo 1 e máximo %d): ", MAX_LENGTH);
    scanf("%d", &length);

    if (length <= 0 || length > MAX_LENGTH)
    {
        printf("Por favor, digite um tamanho válido e tente novamente!");
        return 1;
    }

    generatePassword(password, length);
    printf("Senha gerada: %s\n", password);

    return 0;
}