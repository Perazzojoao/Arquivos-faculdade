<!DOCTYPE html>
<html lang="pt">

<head>
  <meta charset="UTF-8">
  <title>Atividade 3</title>
  <style>
    body {
      font-family: Arial, Helvetica, sans-serif;
    }
  </style>
</head>

<body>
  <h1>IMC calculado</h1>
  <?php
  function imc($peso, $altura)
  {
    $imc = $peso / ($altura * $altura);
    return number_format($imc, 2, ",", ".");
  }

  $peso = (float)$_GET["peso"];
  $altura = (float)$_GET["altura"];

  $imc = imc($peso, $altura);

  echo "Seu <b>IMC</b> calculado é:  <b>$imc</b><br>";

  switch ($imc) {
    case ($imc <= 18.5):
      echo "Você está abaixo do peso!";
      break;
    case ($imc > 18.5 && $imc < 25):
      echo "Você está no seu peso ideal!";
      break;
    case ($imc >= 25 && $imc < 30):
      echo "Você está levemente acima do peso.";
      break;
    case ($imc >= 30 && $imc < 35):
      echo "Você está com obesidade grau 1!";
      break;
    case ($imc >= 35 && $imc < 40):
      echo "Você está com obesidade grau 2!";
      break;
    case ($imc >= 40):
      echo "Você está com obesidade grau 3!";
      break;
  }

  ?>

</body>

</html>