# Laboratório de Estrutura de Dados
##### _Repositório com os exercícios da disciplina de Laboratório de Estrutura de Dados_

#### CONTEÚDOS

| Semana | Conteúdo |
| ------ | -------- |
| Semana 01 | Atividade Diagnóstica |
| Semana 02 |                       |


###### ATENÇÃO:
A primeira linha de todos os códigos fonte contidos neste repositório consiste em:
```sh
#!/usr/bin/tcc -run
```
Como explica o professor [Blau Araujo] em seu [Pequeno Manual do Bash] :

>"Os caracteres #! no começo da primeira linha de um arquivo com permissão de execução são interpretados pelo kernel como uma instrução
>para executar o programa indicado na linha da hashbang utilizando o restante do conteúdo do arquivo como dados de entrada. Do ponto de
>vista do shell, por sua vez, o caractere # indica um “comentário”, logo, tudo que vem depois dele é ignorado pelo interpretador."

Ou seja, neste repositório, estamos indicando na primeira linha de cada código fonte que este arquivo pode ser convertido para um executável e que, ao ser executado, o compilador TCC será chamado para trabalhar com o código fonte.

Para atribuir permissão de execução ao código fonte, utilize o seguinte comando:

```sh
chmod +x codigo_fonte.c
```

### O compilador Tiny C Compiler (TCC)

A opção por utilizar o TCC em detrimento do GCC, compilador padrão da maioria das distribuições Linux, se deveu por dois motivos:

- 1 - Os binários resultantes da compilação com o TCC são significativamente menores que os gerados pelo GCC.
- 2 - O tempo necessário para compilar o código fonte é sensívelmente menor utilizando o TCC.

Demonstração:
![](https://i.imgur.com/wh3Scjw.png)
#
Por se tratar de uma instrução para utilizar o TCC, caso o seu compilador seja o GCC, ou outro compilador, para evitar erros na compilação,
comente a primeira linha do código com seu editor de texto padrão: 

```sh
//  #!/usr/bin/tcc -run
```

O download dos releases do Tiny C compiler pode ser feito por [aqui]. E neste link encontramos a [Documentação]

[Blau Araujo]: <https://blauaraujo.com/>
[Pequeno Manual do Bash]: <https://blauaraujo.com/downloads/pmpgb.pdf>
[aqui]: <http://download.savannah.gnu.org/releases/tinycc/>
[Documentação]: <https://bellard.org/tcc/tcc-doc.html>
