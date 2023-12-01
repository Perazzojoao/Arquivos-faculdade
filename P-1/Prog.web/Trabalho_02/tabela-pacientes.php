<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lista de Pacientes</title>
    <link rel="stylesheet" type="text/css" href="./css/tabela-pacientes.css"/>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <script src="./src/tabelaPaciente.js" defer></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL" crossorigin="anonymous" defer></script>
</head>
<body>
    <?php
        include('conexao.php');
        session_start();
        if(!isset($_SESSION["email"])){
            header("location: login.php");
        } else {
            $sql = "SELECT * FROM paciente ORDER BY id ASC";

            $result = $mysqli->query($sql);
        }
    ?>

    <div class="box">
        <div class="h1">
            <h1>Lista de Pacientes</h1>
        </div>
        <table>
            <thead>
                <tr class="titulos">
                <th scope="col">#</th>
                <th scope="col">Nome</th>
                <th scope="col">Idade</th>
                <th scope="col">Peso (kg)</th>
                <th scope="col">Altura (m)</th>
                <th scope="col">IMC</th>
                <th scope="col">...</th>
                </tr>
            </thead>
            <tbody>
                <?php 
                    $i = 0;
                    while($user_data = mysqli_fetch_assoc($result)) {
                        $i++;
                        echo "<tr class='dados'>";
                        echo "<td>" . $i . "</td>";
                        echo "<td>" . $user_data['nome'] . "</td>";
                        echo "<td>" . $user_data['idade'] . "</td>";
                        echo "<td>" . number_format($user_data['peso'], 2, ',', '.') . "</td>";
                        echo "<td>" . number_format($user_data['altura'], 2, ',', '.') . "</td>";
                        echo "<td>" . number_format($user_data['imc'], 2, ',', '.') . "</td>";
                        echo "<td>
                            <a class='btn btn-sm btn-primary' href='edit.php?id=$user_data[id]' role='button'>
                                <svg xmlns='http://www.w3.org/2000/svg' width='16' height='16' fill='currentColor' class='bi bi-pencil' viewBox='0 0 16 16'>
                                    <path d='M12.146.146a.5.5 0 0 1 .708 0l3 3a.5.5 0 0 1 0 .708l-10 10a.5.5 0 0 1-.168.11l-5 2a.5.5 0 0 1-.65-.65l2-5a.5.5 0 0 1 .11-.168l10-10zM11.207 2.5 13.5 4.793 14.793 3.5 12.5 1.207 11.207 2.5zm1.586 3L10.5 3.207 4 9.707V10h.5a.5.5 0 0 1 .5.5v.5h.5a.5.5 0 0 1 .5.5v.5h.293l6.5-6.5zm-9.761 5.175-.106.106-1.528 3.821 3.821-1.528.106-.106A.5.5 0 0 1 5 12.5V12h-.5a.5.5 0 0 1-.5-.5V11h-.5a.5.5 0 0 1-.468-.325z'/>
                                </svg>
                            </a>
                            <a class='btn btn-sm btn-danger' href='delete.php?id=$user_data[id]' role='button'>
                                <svg xmlns='http://www.w3.org/2000/svg' width='16' height='16' fill='currentColor' class='bi bi-trash3-fill' viewBox='0 0 16 16'>
                                    <path d='M11 1.5v1h3.5a.5.5 0 0 1 0 1h-.538l-.853 10.66A2 2 0 0 1 11.115 16h-6.23a2 2 0 0 1-1.994-1.84L2.038 3.5H1.5a.5.5 0 0 1 0-1H5v-1A1.5 1.5 0 0 1 6.5 0h3A1.5 1.5 0 0 1 11 1.5Zm-5 0v1h4v-1a.5.5 0 0 0-.5-.5h-3a.5.5 0 0 0-.5.5ZM4.5 5.029l.5 8.5a.5.5 0 1 0 .998-.06l-.5-8.5a.5.5 0 1 0-.998.06Zm6.53-.528a.5.5 0 0 0-.528.47l-.5 8.5a.5.5 0 0 0 .998.058l.5-8.5a.5.5 0 0 0-.47-.528ZM8 4.5a.5.5 0 0 0-.5.5v8.5a.5.5 0 0 0 1 0V5a.5.5 0 0 0-.5-.5Z'/>
                                </svg>
                            </a>
                        </td>";
                        echo "<tr>";
                    }
                ?>
            </tbody>
        </table>
        <p id="buttonCadastro"><button class="cadastrar">Cadastrar</button></p>
        <p id="logout">
            <a class='btn btn-sm btn-danger'  href="./logout.php">Logout</a>
        </p>
    </div>
</body>
</html>