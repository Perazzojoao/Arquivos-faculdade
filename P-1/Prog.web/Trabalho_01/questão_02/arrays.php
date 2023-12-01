<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <title>Questão 02</title>

    <style>
        body {
            font-family: Arial, Helvetica, sans-serif;
        }
    </style>
</head>

<body>
    <h1>Manipulação de arrays</h1>

    <?php
    $notas = [10, 5, 6.5, 8.5, 9, 5.5, 4.5, 8, 7.5];
    ?>
    <p>
        <?php
        echo "<b>Notas:</b> ";
        for ($i = 0; $i < count($notas); $i++) {
            echo number_format($notas[$i], 1, ',', '.') . "; ";
        }
        ?>
    </p>

    <p> <?php $somatorio = 0; ?>
        Somatório: <?php for ($i = 0; $i < count($notas); $i++) {
                        (float)$somatorio += $notas[$i];
                    }
                    echo $somatorio; ?>
    </p>

    <p>
        Média: <?php echo number_format(($somatorio / count($notas)), 2, ",", "."); ?>
    </p>

    <p>
        Quantidades de notas acima de 7:
        <?php
        $quant = 0;
        for ($i = 0; $i < count($notas); $i++) {
            if ($notas[$i] >= 7) {
                $quant++;
            }
        }
        echo $quant;
        ?>
    </p>
</body>

</html>