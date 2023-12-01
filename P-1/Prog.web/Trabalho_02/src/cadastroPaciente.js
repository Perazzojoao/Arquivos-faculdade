const form = document.querySelector('.form-cadastro');
const nome = document.querySelector('#nome');
const idade = document.querySelector('#idade');
const peso = document.querySelector('#peso');
const altura = document.querySelector('#altura');

function validaNome() {
  const nomeRegex = /^[a-zA-ZÀ-ÖØ-öø-ÿ\s'-]+$/i;

  nome.addEventListener('change', () => {
    nome.classList.remove('invalido');
  });

  if(nomeRegex.test(nome.value)) {
    return true;
  } else {
    nome.classList.add('invalido');
    return false;
  }
}

function validaIdade() {
  const valorIdade = Number(idade.value);

  idade.addEventListener('change', () => {
    idade.classList.remove('invalido');
  });

  if(valorIdade < 1 || valorIdade > 125 || !Number.isInteger(valorIdade)) {
    idade.classList.add('invalido');
    return false;
  } else {
    return true;
  }
}

function validaPeso() {
  const valorPeso = Number(peso.value);

  peso.addEventListener('change', () => {
    peso.classList.remove('invalido');
  });

  if(valorPeso < 1 || valorPeso > 300 || Number.isNaN(valorPeso)) {
    peso.classList.add('invalido');
    return false;
  } else {
    return true;
  }
}

function validaAltura() {
  const valorAltura = Number(altura.value);

  altura.addEventListener('change', () => {
    altura.classList.remove('invalido');
  });

  if(valorAltura <= 0 || valorAltura > 3 || Number.isNaN(valorAltura)) {
    altura.classList.add('invalido');
    return false;
  } else {
    return true;
  }
}



form.addEventListener('submit', event => {
  event.preventDefault();
  if(validaNome() && validaIdade() && validaPeso() && validaAltura()) {
    Swal.fire({
      icon: 'success',
      title: 'Cadastro realisado com sucesso!',
      showConfirmButton: false,
      timer: 2000
    })
    setTimeout("form.submit()", 2000);
  }


});