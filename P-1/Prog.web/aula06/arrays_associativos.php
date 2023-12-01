<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <title>Aula 06</title>
    <style>
        body {
            font-family: Arial, Helvetica, sans-serif;
            background-color: gray;
        }
    </style>
</head>
<body>
    <h1>Arrays associativos</h1>
    <?php 
        // Array associativo
        $alunos = [
            "a" => 10,
            "b" => 5,
            "c" => 8.5,
            "d" => 9
        ];

        // Loop simples
        // foreach (<array> as <iterador_chave>) {...}
        foreach ($alunos as $chave) {
            echo $chave . "<br>";
        }

        echo "<br>";

        // Loop chave e valor
        // foreach (<array> as <iterador_chave> => <iterador_valor>) {...}
        foreach ($alunos as $chave => $valor) {
            echo $chave . " = " . $valor . "<br>";
        }
        echo "<br>";

        // Array associativo + arrays
        $alunosArray = [
            "A" => [10, 9, 5.5],
            "B" => [5, 6.5, 9],
            "C" => [8.5, 5, 2],
        ];

        foreach ($alunosArray as $nome => $notas) {
            $acumulado = 0;
            for ($i = 0; $i<count($notas); $i++) {
                $acumulado += $notas[$i];
            }
            $media = $acumulado / count($notas);
            echo "Aluno: $nome, Média: $media <br>";
        }
    
    
    ?>
</body>
    </html>