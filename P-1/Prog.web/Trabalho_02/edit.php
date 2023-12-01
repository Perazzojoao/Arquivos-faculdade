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
  if (!empty($_GET['id'])) {
    include("conexao.php");

    $id = $_GET["id"];

    $sqlSelect = "SELECT * FROM paciente WHERE id=$id";
    $result = $mysqli->query($sqlSelect);

    if($result->num_rows > 0) {
      while($user_data = mysqli_fetch_assoc($result)) {
        $nome = $user_data["nome"];
        $idade = $user_data["idade"];
        $peso = $user_data["peso"];
        $altura = $user_data["altura"];
        $imc = $peso / ($altura * $altura);
      }
    } else {
      header("Location: tabela-pacientes.php");
    }
  } else {
    header("Location: tabela-pacientes.php");
  }
?>
  
  <h1>Cadastro de Paciente</h1>

  <div class="box">
    <div>
      <form class="form form-cadastro" action="saveEdit.php" method="POST">
        <fieldset>
          <h2>Cadastro de Paciente</h2>
          <p>
            <input class="nome" placeholder="Nome" type="text" name="nome" id="nome" value="<?php echo $nome ?>" required>
          </p>
          <p>
            <input class="idade" placeholder="Idade" type="text" name="idade" id="idade" value="<?php echo $idade  ?>" required>
          </p>
          <p>
            <input class="peso" placeholder="Peso (kg)" type="text" name="peso" id="peso" value="<?php echo $peso ?>" required>
          </p>
          <p>
            <input class="altura" placeholder="Altura (m)" type="text" name="altura" id="altura" value="<?php echo $altura ?>" required>
          </p>
          <input type="hidden" name="id" value="<?php echo $id?>">
          <input type="submit" name="update" id="update">
        </fieldset>
      </form>
    </div>
  </div>
</body>

</html>