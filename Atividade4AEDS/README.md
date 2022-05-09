# Atividade 4
<h1>Introdução</h1>
<p>Lista linear é uma estrutura de dados na qual os elementos de um <b>mesmo tipo de dados</b> estão organizados de maneira sequencial, obedecendo uma ordem lógica entre eles. Essa estrutura permite representar um conjunto de dados de forma a preservar a relação de ordem entre seus elementos (chamados de "nó").</p>
<p>O problema da máxima soma ou "<i>Maximum-Subarray Problem</i>", é um clássico na computação. Seu objetivo é encontrar um subarray que contenha a maior soma dos elementos dentro do mesmo, esses podem ser: positivos, negativos ou iguais a 0. Este problema foi proposto por Ulf Grenander em 1977.</p>
<hr/>

<h1>Sobre o projeto</h1>
<p>Neste exercício proposto, era esperado a criação de uma função que, ao receber uma lista 'A' onde cada posição corresponde a um elemento de um conjunto de números inteiros (positivos ou não), conseguisse encontrar a soma máxima entre os elementos.</p>

<h1>Lógica utilizada</h1>
<h2>Criação do conjunto e inserção na lista</h2>
<p>A coleta dos números do conjunto foi feita da maneira mais simples possível. Para adicionar um conjunto a lista, o usuário deve primeiro informar quantos elementos serão digitados. Após isso, uma estrutura for irá coletar dado por dado até que o limite informado pelo usuário seja atingido. Cada ciclo do for, antes de sua finalização, insere o último valor digitado na lista, utilizando a função <code>LInsert(&l, aux.numeros)</code>, onde "aux.numeros" corresponde ao item da lista que está sendo inserido agora. Essa parte do codigo eé exemplificada na figura 1.
<center>
    <img src="imgs/coleta_de_dados">
    <p><i>Figura 1: demonstração coleta de daddos.</i></p>   
</center>
