<!DOCTYPE html>
<html lang="pt-Br">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Cadastro</title>
  <link rel="stylesheet" type="text/css" href="./css/cadastro-paciente.css"/>
  <script src="https://cdn.jsdelivr.net/npm/sweetalert2@11" defer></script>
  <script src="./src/cadastroPaciente.js" defer></script>
</head>

<body>
<?php
include("conexao.php");
session_start();

if (!isset($_SESSION["email"])) {
  header("location: login.php");  
} else {

  if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $nome = $_POST['nome'];
    $idade = $_POST["idade"];
    $peso = $_POST["peso"];
    $altura = $_POST["altura"];
    $imc = $peso / ($altura * $altura);

    $sql = "INSERT INTO paciente (nome, idade, peso, altura, imc) VALUES ('$nome', '$idade', '$peso', '$altura', '$imc')";
    mysqli_query($mysqli, $sql);
    header("location: tabela-pacientes.php"); 
  }
}
?>
  
  <h1>Cadastro de Paciente</h1>

  <div class="box">
    <div>
      <form class="form form-cadastro" action="cadastro-paciente.php" method="post">
        <fieldset>
          <h2>Cadastro de Paciente</h2>
          <p>
            <input class="nome" placeholder="Nome" type="text" name="nome" id="nome" required>
          </p>
          <p>
            <input class="idade" placeholder="Idade" type="text" name="idade" id="idade" required>
          </p>
          <p>
            <input class="peso" placeholder="Peso (kg)" type="text" name="peso" id="peso" required>
          </p>
          <p>
            <input class="altura" placeholder="Altura (m)" type="text" name="altura" id="altura" required>
          </p>
          <button type="submit" id="cadastrar">Cadastrar</button>
        </fieldset>
      </form>
    </div>
  </div>
</body>

</html>