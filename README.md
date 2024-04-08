# Gerador de Senhas

Este gerador de senhas foi construído usando a linguagem C. Ele permite gerar senhas com um comprimento mínimo de 15 caracteres, conforme recomendado por especialistas em segurança cibernética para aumentar a eficácia contra ataques de força bruta. Além disso, o programa limita o comprimento máximo das senhas a 50 caracteres para evitar senhas excessivamente longas. As senhas geradas são misturas de letras minúsculas, maiúsculas, símbolos e números, o que torna mais difícil para os invasores adivinharem a senha.

## Futuras funcionalidades

- Gerar senhas continuidamente e únicas;
- Apertar '0' para sair e '1' para continuar;
- Criar senhas usando acrônimos de frases que você goste. Ex.: "A pressa é a inimiga da vitória. O fraco não tem espaço e o covarde morre sem tentar!" -> "APEAIDVOTFNTESOCSMT";
- Escolher se vai utilizar letras maiúsculas, minúsculas, símbolos ou números;
- Implementar gerenciador de senhas com autenticação.

## Utilização

### Windows

Instale o MinGW ou o GCC Compiler antes.

```bash
# Exemplo de compilação com GCC:
gcc -o [nome desejado para o executável].exe main.c
# Para executar:
[nome desejado para o executável].exe
```

### Linux e macOS (e os demais Unix-like)

```bash
# Compilação
gcc -o [nome desejado para o executável] main.c

# Para executar:
./[nome desejado para o executável]
```

## Contribuição

Sinta-se à vontade para contribuir no projeto. Se encontrar algum problema ou desejar fazer melhorias, não hesite em enviar um pull request ou abrir uma nova issue.

## Licença

Este projeto é licenciado sob a Licença MIT.
