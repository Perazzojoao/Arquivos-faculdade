<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <title>Questão 03</title>

    <style>
        body {
            font-family: Arial, Helvetica, sans-serif;
        }

        table {
            border-collapse: collapse;
        }

        td {
            border: 1px solid black;
            width: 150px;
        }
    </style>
</head>

<body>
    <h1>Carrinho de compras</h1>
    <?php
    $codigo = (int)$_POST["codigo"];
    $quant = (int)$_POST["quant"];
    $preco_produto = 0;

    switch ($codigo) {
        case $codigo > 0 && $codigo <= 10:
            $preco_produto = 10;
            break;

        case $codigo > 10 && $codigo <= 20:
            $preco_produto = 15;
            break;

        case $codigo > 20 && $codigo <= 30:
            $preco_produto = 20;
            break;

        case $codigo > 30 && $codigo <= 40:
            $preco_produto = 30;
            break;
    }

    $valor_total = $preco_produto * $quant;
    $desconto = 0;

    switch ($valor_total) {
        case $valor_total <= 250:
            $desconto = 0.05;
            break;

        case $valor_total > 250 && $valor_total <= 500:
            $desconto = 0.1;
            break;

        case $valor_total > 500:
            $desconto = 0.15;
            break;
    }

    $preco_total = $valor_total * (1 - $desconto);
    ?>

    <table>
        <tr style="background-color: gray;">
            <td><b>Dados da compra</b></td>
            <td></td>
        </tr>
        <tr>
            <td>Preço Unitário</td>
            <td><?php echo "R$" . number_format($preco_produto, 2, ',', '.') ?></td>
        </tr>
        <tr>
            <td>Preço Total</td>
            <td><?php echo "R$" . number_format($valor_total, 2, ',', '.') ?></td>
        </tr>
        <tr>
            <td>Desconto</td>
            <td><?php echo "R$" . number_format($desconto * $valor_total, 2, ',', '.') ?></td>
        </tr>
        <tr>
            <td>Preço Final</td>
            <td><?php echo "R$" . number_format($preco_total, 2, ',', '.') ?></td>
        </tr>
    </table>
</body>

</html>