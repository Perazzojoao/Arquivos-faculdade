<!DOCTYPE html>
<html lang="pt">

<head>
  <meta charset="UTF-8">
  <title>Atividade 1</title>
  <style>
    body {
      font-family: Arial, Helvetica, sans-serif;
    }
  </style>
</head>

<body>
  <h1>Loops em arrays</h1>
  <?php
  $idades = [18, 21, 65, 32, 80, 44, 25, 52, 38];
  $soma = 0;

  foreach ($idades as $i) {
    $soma += $i;
  }

  $media = number_format(($soma / count($idades)), 2, ",", ".");

  $maior = 0;
  foreach ($idades as $key) {
    if ($key > $maior) {
      $maior = $key;
    }
  }
  echo "O somatório das idades é: $soma <br>";
  echo "A média das idades é: $media <br>";
  echo "A maior idade é: $maior <br>";
  ?>

</body>

</html>