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
    <h1>Funções</h1>
    <?php 
        // Função clássica
        // function <nome_função>(<parâmetros>) {...}
        function imprimir($mensagem) {
            echo "Mensagem: $mensagem <br>";
        }
        imprimir("Adoro php!");
    ?>
    
</body>
</html>