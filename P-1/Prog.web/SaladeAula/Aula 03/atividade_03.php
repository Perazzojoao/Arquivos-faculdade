<!DOCTYPE html>
<html lang="pt">
    <head>
        <meta charset="UTF-8">
        <title>Atividade Investimento</title>

        <style>
            body
            {
                font-family: Arial, Helvetica, sans-serif;
            }
        </style>
    </head>

    <body>
        <?php
            $tipo=(int)$_POST["tipo"];
            $valor=(float)$_POST["valor"];
            $rmensal;

            if ($tipo==1)
            {
                $rmensal=number_format($valor*0.03, 2, ',', '.');
            } else
            {
                $rmensal=number_format($valor*0.04, 2, ',', '.');
            }

            $descricao;

            if ($tipo==1)
            {
                $descricao="Poupança";
            } else
            {
                $descricao="Fundos de renda fixa";
            }

            echo "Tipo de investimento escolhido: $descricao<br><br>";
            
            echo "Sua renda mensal será de: R$ $rmensal";
        ?>
    </body>
</html>