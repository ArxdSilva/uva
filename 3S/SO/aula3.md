26.02 - Lemos

Barramento:

- Canal de comunicação de dados entre os sistemas do SO;
- Dados (vias: 'palavra' - 32 ou 64 bits);
- Endereço (do dispositivo, mecanismo de interrupção);
- Controle;

Princípios: 
1. Top-down
2. Localidade
3. Modular

tipos de so's:
- monoprogramaveis
- multiprogramaveis
- multiplos processadores

Maquina de niveis

Deadlock:

- exclusao mutua: apenas um processo de cada vez pode usar um recurso;
- manter e esperar: um processo mantendo pelo menos um recurso está esperando para adquirir outros recursos mantidos por outros processos;
- Não preempção: recurso só pode ser liberado voluntariamente pelo processo que o mantém, depois que esse processo tiver terminado sua tarefa;
- Espera circular: existe um conjunto cíclico de processos esperando por um recurso que é mantido pelo próximo;

Prevencao de deadlock:
- Exclusão mutua: nao exigido para recursos compartilhaveis; deve manter para recursos nao compartilhaveis;
- manter e esperar: deve garantir que sempre que um processo solicita um recurso, ele mantem

- Sem preempção
    - se um processo esta mantendo alguns recursos e solicitar outro recurso que não pode ser alocado imetiatamente a ele, 

- Espera circular: impoe uma ordem total de dados de todos os tipos de recursos ... (ver slides)


prova: 
- arquitetura, ciclo de execucao de funcoes (primeira aula)
- pipeline, tamanho de palavra, barramento e cache
- maquina virtual
- deadlock (15 linhas no maximo)
- mo cap 1 (conceitos gerais)
- analise grafica ligada a processos
- maquina de estados de processo e thread
- mo: grafico de deadlock