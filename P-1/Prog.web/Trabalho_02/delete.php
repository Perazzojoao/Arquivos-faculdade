<?php 
  if(!empty($_GET['id'])) {
    include("conexao.php");

    $id = $_GET["id"];

    $sqlSelect = "SELECT * FROM paciente WHERE id=$id";
    $result = $mysqli->query($sqlSelect);

    if($result->num_rows > 0) {
      $sqlDelete = "DELETE FROM paciente WHERE id=$id";
      $resultDelete = $mysqli->query($sqlDelete);
    }
  }
  header("Location: tabela-pacientes.php");
?>