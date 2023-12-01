<?php

    header('content-type:| charset=ISO-8859-1');

    $nome=$_GET["nome"];
    $nota1=$_GET["nota1"];
    $nota2=$_GET["nota2"];
    $media=($nota1+$nota2)/2;

    echo "$nome, sua média é $media";

?>