<?php
$hostname="localhost";//aonde o banco esta
$bancodedados="usuarios";//nome do banco
$usuario="root";
$senha="";

 
$mysqli= new mysqli($hostname,$usuario, $senha, $bancodedados);
if($mysqli -> connect_errno){
   //conferindo se houve erro com a conexão com o banco 
   echo("Erro de conexão: " . $mysqli->connect_error);

} else {
      
   
   }
?>
