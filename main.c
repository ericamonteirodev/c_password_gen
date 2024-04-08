#include <stdio.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH 50
#define MIN_LENGTH 15

// função que gera a senha
void generatePassword(char *password, int length)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char symbols[] = "!?;':\"(){}<>|\\/~`&$#@%^*";

    srand((unsigned int)time(NULL));

    char expanded_charset[strlen(charset) + strlen(symbols) + 1];
    strcpy(expanded_charset, charset);
    strcat(expanded_charset, symbols);

    for (int i = 0; i < length; i++)
    {

        int index = rand() % strlen(expanded_charset);
        password[i] = expanded_charset[index];
    }
    /*garante que a string gerada seja terminada com o caractere nulo ('\0')*/
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

    printf("Quantos caracteres você deseja que sua senha tenha? (Obs.: mínimo %d e máximo %d): ", MIN_LENGTH, MAX_LENGTH);
    scanf("%d", &length);

    if (length <= 0 || length > MAX_LENGTH || length < MIN_LENGTH)
    {
        printf("Por favor, digite um tamanho válido e tente novamente!");
        return 1;
    }

    generatePassword(password, length);
    printf("Senha gerada: %s\n", password);

    return 0;
}