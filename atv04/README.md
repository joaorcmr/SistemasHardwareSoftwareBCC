# Atv04 – Condicionais e Funções (local)

Arquivos de referência locais para exercitar as traduções de assembly para C conforme o handout.

Implementações:
- ex1.c – Aritmética + expressão booleana (setge/movzbl)
- ex2.c – Chamada de função `vezes2` + condicional
- ex3.c – Comparações e escrita via ponteiros (lt/eq/gt)
- ex4.c – Condicionais com `cmp`/`ja`/retornos constantes

Inclui `vezes2_ref.c` apenas para permitir a compilação e testes locais.

Como compilar e testar localmente:

```bash
make -C atv04
./atv04/atv04
```

Observação: Para a entrega oficial, use seu repositório do Classroom em `atv/04-condicionais-funcoes` e siga o README de lá. Copie apenas as implementações exigidas e remova `vezes2_ref.c` se o avaliador já prover esta função.