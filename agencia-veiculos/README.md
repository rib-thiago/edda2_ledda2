# Atividade Desafio
## _Cadastro de Veículos_

Escreva um programa em C/C++ para realizar um pequeno controle de uma agência de veículos. O sistema deverá ser responsável por realizar as seguintes operações, armazenando os dados em memória: cadastrar um novo veículo, listar os veículos cadastrados e localizar um veículo. Planeje seu projeto para a utilização correta de funções, visando uma boa organização do código, reaproveitamento de código e boa leitura.

As especificações de cada funcionalidade são descritas abaixo.

- As informações necessárias para armazenar sobre um Veículo, são: placa, ano de fabricação, marca, modelo, cor e valor de venda. Crie uma estrutura de dados que represente um objeto Veiculo na memória de seu sistema.

- O sistema deve apresentar um menu ao usuário como forma de interação. As opções disponíveis em seu menu são:
  > -- Cadastrar novo Veículo
    -- Listar Veículos
    -- Buscar Veículo por Placa
    -- Buscar Veículo por Ano de Fabricação
    -- Sair

- Seu programa deve ser capaz de armazenar o conjunto de Veiculos cadastrados no sistema em uma estrutura linear (vetor) de Veiculos, contendo apenas a quantidade de elementos cadastrados. Ao cadastrar um novo veículo, seu programa deve ser capaz de aumentar a quantidade de elementos na estrutura. Utilize as funções de alocação dinâmica de memória!

- O item de menu Listar Veículos deve realizar a impressão de todos os veículos cadastrados até o momento no sistema.

- O item Buscar Veículo por Placa, deve ser capaz de realizar a busca por um veículo cadastrado até o momento pelo número de sua placa. Caso seja encontrado um veículo com a placa pesquisada, o sistema deve exibir os dados deste veículo. Caso contrário, exibir uma mensagem ao usuário de que o veículo procurado não foi encontrado.

- O item Buscar Veículo por Ano de Fabricação deve ser capaz de realizar uma busca por veículos cadastrados que estejam entre dois anos de fabricação informados pelo usuário. Por exemplo: ao escolher este item de menu o sistema deverá perguntar o Ano de Fabricação Inicial e o Ano de Fabricação Final, e ao obter estes dados do usuário, o sistema deve buscar e imprimir os dados de todos os veículos cujo o Ano de Fabricação informado esteja entre as duas datas informadas pelo usuário. Caso nenhum veículo seja encontrado, exibir uma mensagem orientando o usuário sobre a inexistência de veículos na faixa informada.
