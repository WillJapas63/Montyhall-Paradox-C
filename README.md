# Montyhall-Paradox-C
Demonstração do paradoxo de MontyHall em C.
Básicamente esse paradoxo nasceu em uma série de TV chamada "Let's Make a Deal", aonde o apresetador chamado Monty Hall, apresentada 3 portas para o convidado, uma contendo um prêmio e as outras contendo uma cabra.
Então o convidado escolhia uma porta, e após isso o apresentador, sabendo aonde estava o prêmio sempre abria uma outra porta não escolhida que continha uma cabra.
Após o ato, ele dava a opção para o convidado escolher se ele queria trocar para a porta remanescente.


Muito se foi discutido se havia vantagem ou não em abrir a outra porta, afinal tendo só duas portas a chance era 50% certo?

Na verdade após um tempo fizeram um estudo e comprovaram que escolher a outra porta, aumentava a probabilidade de vitória para 66%.

Basicamente eu fiz isso, porém em C.



Explicação do código:

1. Primeiramente, eu inclui as bibliotecas necessárias para o código rodar.
2. Após isso eu declarei a existência das funções de {limpar_buffer} e {texto}, e criei uma porta aleatória.
3. Iniciei meu programa e criei as variaveis: (Escolha, prêmio, casos, porta aberta e troca)
4. Após isso fiz uma introdução com um texto e dei a opção do jogador escolher uma porta.

Note nessa parte que eu entrei com uma condicional que tinha apenas os casos de: (Se a porta for a que contenha prêmio || Se a porta não contiver o prêmio). Isso porque como eu disse, ele sempre vai abrir uma porta errada, ou seja, sempre vai ser ou porta certa ou errada, logo, if (!porta_certa){placeholder}else{placeholder}.

5. Eu entrei com um switch para ambos os casos{


Caso (Escolha = Prêmio){
1. Para o primeiro caso eu entrei com um looping que fala basicamente "Determine a porta aberta, gerando um numero aleatorio de 1 a 3 até que a porta aberta seja diferente da porta premiada"
2. Eu puxei a função texto, que aponta para essa porta, a parte que o apresentador abre a porta errada.
3. Dou a opção do jogador trocar de porta
4. Nesse caso que ele tinha escolhido a porta prêmiada, eu gero uma condicional, se ele trocar ele perde, ao contrário, vitória!
}

Caso (Escolha != Prêmio){

1. Para o segundo caso o looping diz outra coisa "Determine a porta aberta, gerando um numero aleatório de 1 a 3, enquanto a porta aberta for diferente do prêmio e da escolha"
Isso pois, agora temos 2 portas que são erradas, então essa parte é essẽncial para o código funcionar
2. Eu puxei a função texto, que aponta para essa porta, a parte que o apresentador abre a outra porta errada.
3. Dou a opção do jogador trocar de porta
4. Nesse caso, se o jogador trocar de porta ele vence :)
}

}
6. Por fim eu implementei as funções abaixo do meu programa para respeitas os principios de códigos limpos.