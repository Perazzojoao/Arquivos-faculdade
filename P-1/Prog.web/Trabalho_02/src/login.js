const usuario = document.querySelector('#usuario');
const senha = document.querySelector('#senha');
const form = document.querySelector('.form-login');
const mensagemErro = document.querySelector('#erro');
const h2 = document.querySelector('h2');



function verificaUsuario() {
  if(mensagemErro) {
    console.log("existe!");
    
    h2.appendChild(mensagemErro);
  }
}

verificaUsuario();

form.addEventListener('submit', (evento) => {
  evento.preventDefault();
  verificaUsuario();
  form.submit();
});