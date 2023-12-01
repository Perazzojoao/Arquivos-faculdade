<!DOCTYPE html>
<html lang="pt">

<head>
  <meta charset="UTF-8">
  <title>Atividade 2</title>
  <style>
    body {
      font-family: Arial, Helvetica, sans-serif;
    }
  </style>
</head>

<body>
  <h1>Arrays associativos</h1>
  <?php
  $pessoas = [
    "Ana" => ["idade" => 50, "peso" => 100, "altura" => 1.85],
    "Maria" => ["idade" => 25, "peso" => 65, "altura" => 1.60],
    "Pedro" => ["idade" => 32, "peso" => 110, "altura" => 1.98],
    "Joana" => ["idade" => 20, "peso" => 120, "altura" => 1.80],
    "João" => ["idade" => 65, "peso" => 62, "altura" => 1.70],
    "Paulo" => ["idade" => 28, "peso" => 95, "altura" => 1.90],
  ];

  $soma = 0;
  foreach ($pessoas as $nome => $array) {
    $soma += $array["idade"];
  }
  $media = number_format(($soma / count($pessoas)), 2, ",", ".");
  echo "<p>A média de todas as idades é: $media </p>";

  $somaPeso = 0;
  foreach ($pessoas as $nome => $array) {
    $somaPeso += $array["peso"];
  }
  echo "<p>O somatório de todos os pesos é: $somaPeso </p>";
  ?>
  <p>
    <?php
    function imc($peso, $altura)
    {
      $imc = $peso / ($altura * $altura);
      return number_format($imc, 2, ",", ".");
    }

    foreach ($pessoas as $nome => $array) {
      $imc = imc($array["peso"], $array["altura"]);
      echo "<b>$nome</b> tem um <b>IMC</b> calculado de: <b>$imc</b><br>";
    }
    ?>
  </p>

  <?php
  function pesoIdeal($imc)
  {
    if ($imc >= 18.6 && $imc < 25)
      return true;
    else
      return false;
  }

  foreach ($pessoas as $nome => $array) {
    if (pesoIdeal(imc($array["peso"], $array["altura"]))) {
      echo "<b>$nome</b> está no seu peso ideal!";
    }
  }
  ?>
</body>

</html>