<?php 
  include("conexao.php");

  if ($_SERVER["REQUEST_METHOD"] == "POST") {

    $email= $mysqli->real_escape_string($_POST["email"]);
    $senha= $mysqli->real_escape_string($_POST["senha"]); 
    $sql_code= "SELECT * FROM cadastro WHERE email = '$email' AND senha ='$senha'";
    $resul= mysqli_query($mysqli, $sql_code);

    $quantidade=$resul->num_rows;
    
    if($quantidade==1) {

      $usuario=$resul->fetch_assoc();

      if(!isset($_SESSION)) {
        session_start();

        $_SESSION['id'] = $usuario['id'];
        $_SESSION['email'] = $usuario['email'];
        header("Location: tabela-pacientes.php");
      }
    } else {
      echo '<p id="erro">Usuário ou senha incorreto</p>';
    }
  }
?>

<!DOCTYPE html>
<html lang="pt-Br">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Login</title>
  <link rel="stylesheet" type="text/css" href="./css/login.css"/>
  <script src="./src/login.js" defer></script>
</head>

<body>
  <div class="box">
    <fieldset>
      <form class="form form-login" action="login.php" method="post">
        <h2>Faça seu login</h2>
        <p>
          <input class="input input-usuario" placeholder="Usuário" type="email" name="email" id="usuario">
        </p>
        <p>
          <input class="input input-senha" placeholder="Senha" type="password" name="senha" id="senha">
        </p>
        <button id="btnLogin" type="submit">Login</button>
        <p>
          <a href="./cadastro.php">Cadastre-se</a>
        </p>
      </form>
    </fieldset>
  </div>
</body>

</html>