var number = 0;
function start(){
    document.getElementById('box').innerHTML = number;
}

function adicionar(){
    number += 1;
    document.getElementById('box').innerHTML = number;
}

function zerar(){
    number = 0;
    document.getElementById('box').innerHTML = number;
}
start();
document.getElementById('botao').addEventListener('click', adicionar);
document.getElementById('botao2').addEventListener('click', zerar);