programa {
  funcao inicio() {
    //Declaração de variáveis.
    cadeia nome 
    inteiro idade
    inteiro nota1, nota2, nota3, nota4
    inteiro media

    //Solicitando dados do usuário.

    escreva("Digite o nome do aluno: ")
    leia(nome)

    escreva("Digite a idade do aluno: ")
    leia(idade)

    escreva("Informe a nota da primeira unidade: ")
    leia(nota1)

    escreva("Informe a nota da segunda unidade: ")
    leia(nota2)

    escreva("Informe a nota da terceira unidade: ")
    leia(nota3)

    escreva("Informe a nota da quarta unidade: ")
    leia(nota4)

    //Realizar cálculos

    media = (nota1 + nota2 + nota3 + nota4) / 4

    //Exibindo resultados para o usuário
    limpa()
    escreva("=== Exibindo resultados === ")
    escreva("\nNome: ", nome)
    escreva("\nIdade: ", idade)
    escreva("\nMédia Aritimética: ", media)







  }
}
