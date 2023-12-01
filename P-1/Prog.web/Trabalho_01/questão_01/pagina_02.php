<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <title>Questão 01</title>

    <style>
        body {
            font-family: Arial, Helvetica, sans-serif;
        }

        table {
            border-collapse: collapse;
        }

        td {
            border: 1px solid black;
            text-align: center;
        }
    </style>
</head>

<body>
    <?php
    $valor = (float)$_POST["valor"];
    ?>

    <h1>Tabela de parcelamento</h1>

    <p>
        <?php
        $valor_formatado = number_format($valor * 0.8, 2, ',', '.');
        echo "Valor à vista: R$" . $valor_formatado;
        ?>
    </p>
    <p>
    <table>
        <tr style="background-color: gray;">
            <td><b>Quantidade de parcelas</b></td>
            <td><b>Valor total com o acréscimo</b></td>
        </tr>
        <tr>
            <td>6</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.03)) ?></td>
        </tr>
        <tr>
            <td>12</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.12)) ?></td>
        </tr>
        <tr>
            <td>18</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.18)) ?></td>
        </tr>
        <tr>
            <td>24</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.24)) ?></td>
        </tr>
        <tr>
            <td>30</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.3)) ?></td>
        </tr>
        <tr>
            <td>36</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.36)) ?></td>
        </tr>
        <tr>
            <td>42</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.42)) ?></td>
        </tr>
        <tr>
            <td>48</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.48)) ?></td>
        </tr>
        <tr>
            <td>54</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.54)) ?></td>
        </tr>
        <tr>
            <td>60</td>
            <td><?php echo ($valor_formatado = number_format($valor * 1.6)) ?></td>
        </tr>
    </table>
    </p>
</body>

</html>