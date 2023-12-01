const form = document.querySelector('form');
const mensagemErro = document.querySelector('#erro');

function validaEmail(email, evento) {
  const emailRegex = /^\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*$/i;
  if(!emailRegex.test(email.value)) {
    evento.preventDefault();
    email.classList.add('invalido');
    return false;
  }
  else if(email.classList.contains('invalido'))
    email.classList.remove('invalido');
    return true;
}

function validaSenha(senha, confirmaSenha, evento) {
  const senhaRegex = /^(?=.*[0-9])(?=.*[!@#$%^&*])[a-zA-Z0-9!@#$%^&*]{6,12}$/i; //Requerimento: 6-12 digitos, pelomenos 1 caracter numérico e 1 especial
  
  senha.addEventListener('change', () => senha.classList.remove('invalido'));
  confirmaSenha.addEventListener('change', () => confirmaSenha.classList.remove('invalido'));
  
  if(!senhaRegex.test(senha.value)) {
    evento.preventDefault();
    senha.classList.add('invalido');
    return false
  } else if(senha.value != confirmaSenha.value) {
    evento.preventDefault();
    confirmaSenha.classList.add('invalido');
    return false;
  }
  return true;
}

function verificaEmailRepetido() {
  const tagH2 = document.querySelector('h2');

  tagH2.appendChild(mensagemErro);
}

function confirmacaoDeEnvio() {
  Swal.fire({
    icon: 'success',
    title: 'Cadastro realisado com sucesso!',
    showConfirmButton: false,
    timer: 2000
  })
  setTimeout("form.submit()", 2000);
}

verificaEmailRepetido();

form.addEventListener('submit', (evento) => {
  evento.preventDefault();
  const tagEmail = document.querySelector('#email');
  const tagSenha = document.querySelector('#senha');
  const tagConfirmaSenha = document.querySelector('#confirmaSenha')
  
  
  validaEmail(tagEmail, evento);
  validaSenha(tagSenha, tagConfirmaSenha, evento);
  
  if(validaEmail(tagEmail, evento) && validaSenha(tagSenha, tagConfirmaSenha, evento)) {
    form.submit();
  }
});
