<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Document</title>

        <style>
            body
            {
                font-family: Arial, Helvetica, sans-serif;
            }
        </style>
    </head>

    <body>
        <?php
            $x=(float)$_POST["x"];
            $y=(float)$_POST["y"];
            $operacao=$_POST["operacao"];
            $resultado;

            switch ($operacao)
            {
                case $operacao=="Somar":
                    $resultado=$x+$y;
                    break;

                case $operacao=="Subtrair":
                    $resultado=$x-$y;
                    break;

                case $operacao=="Multiplicar":
                    $resultado=$x*$y;
                    break;

                case $operacao=="Dividir":
                    $resultado=$x/$y;
                    break;
            }

            $raredondado = number_format($resultado, 2, ',', '.');

            echo "Primeiro número: $x<br>";
            echo "Segundo número: $y<br><br>";

            echo "Resultado: $raredondado";
                

        ?>
    </body>
</html>