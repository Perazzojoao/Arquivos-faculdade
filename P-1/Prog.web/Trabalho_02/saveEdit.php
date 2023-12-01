<?php 
  include("conexao.php");

    $id = $_POST["id"];
    $nome = $_POST['nome'];
    $idade = $_POST["idade"];
    $peso = $_POST["peso"];
    $altura = $_POST["altura"];
    $imc = $peso / ($altura * $altura);

    $sqlUpdate = "UPDATE paciente SET nome='$nome', idade='$idade', peso='$peso', altura='$altura', imc='$imc' WHERE id='$id'";

    $result = $mysqli->query($sqlUpdate);
    header("Location: tabela-pacientes.php");
?>