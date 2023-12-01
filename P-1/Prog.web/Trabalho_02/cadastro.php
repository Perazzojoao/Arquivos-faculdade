<?php  include('conexao.php')?>

<?php 
function verificarExistencia($mysqli, $email) {
  $sql = "SELECT COUNT(*) as total FROM cadastro WHERE email = '$email'";
  $resultado = mysqli_query($mysqli, $sql);

  if ($resultado) {
    $row = mysqli_fetch_assoc($resultado);
    return $row['total'] > 0;
  } else {
    return false; 
  }
}

if (isset($_POST["email"]) && isset($_POST["senha"])) {
  $email = $_POST["email"];
  $senha = $_POST["senha"];

  // Verificar se o e-mail já existe no banco de dados
  if (verificarExistencia($mysqli, $email)) {
    echo '<p id="erro">E-mail já registrado.<p>';
  } else {
      
    $sql = "INSERT INTO cadastro (email, senha) VALUES ('$email', '$senha')";
    mysqli_query($mysqli,$sql);

    echo '<!DOCTYPE html>
    <html lang="pt-Br">
    <head> 
      <script src="https://cdn.jsdelivr.net/npm/sweetalert2@11"></script>
      </head>
      <body>
      <script>Swal.fire({
        icon: "success",
        title: "Cadastro realisado com sucesso!",
        showConfirmButton: false,
        timer: 2000
      });
      setTimeout("window.location.href = `login.php`", 2000);</script>
    </body>
    </html>';
  
  }
}
?>

<!DOCTYPE html>
<html lang="pt-Br">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Cadastro</title>
  <link rel="stylesheet" type="text/css" href="./css/cadastro.css"/>
  <script src="https://cdn.jsdelivr.net/npm/sweetalert2@11" defer></script>
  <script src="./src/cadastro.js" defer></script>
</head>

<body>
  <div class="box">
    <div>
      <form class="form form-cadastro" action="cadastro.php" method="post">
        <fieldset>
          <h2>Cadastro de usuário</h2>
          <p id="erro"></p>
          <p>
            <input class="input input-email" placeholder="E-mail" type="text" name="email" id="email" required>
          </p>
          <p>
            <input class="input input-senha" placeholder="Senha" type="password" name="senha" id="senha" required>
          </p>
          <p>
            <input class="input input-confirmaSenha" placeholder="Confirme sua Senha" type="password" name="confirmaSenha" id="confirmaSenha" required>
          </p>
          <button type="submit" id="cadastrar">Cadastrar</button>
        </fieldset>
      </form>
    </div>
    <div class="form padrao-senha">
      <p>
        Padrão de senha:
      <ul>
        <li>Entre 6 e 12 caracteres.</li>
        <li>Pelomenos um caracter numérico.</li>
        <li>Pelomenos um caracter especial (!@#$%^&*).</li>
      </ul>
      </p>
    </div>
  </div>
</body>

</html>