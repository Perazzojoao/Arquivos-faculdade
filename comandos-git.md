# COMANDOS GIT
> url: https://guilhermeonrails.github.io/manual-do-git-e-github/

- git init: Inicia um novo repositório local vazio
- git clone <endereço_repositorio>: Copia a pasta completa. (OBS: Sobrescreve seu arquivo local.)
- git pull <endereço_repositorio>: Compara seu arquivo no repositório com o local, e atualiza as mudanças no seu arquivo local.
- git commit <arquivo> -m "descrição do commit": Salva as modificações localmente. (para enviar use "push")
- git branch -M main: Trocar a branch inicial master para main.
- git checkout -b <nova_branch>: Sai da branch atual e cria uma nova.
- git switch <branch_alvo>: Troca da branch atual para a especificada.
- git merge <branch>: Incorporar as mudanças de uma branch para a atual. Ao final, deve-se usar o "git push origin <branch_a_ser_atualizada>" para salvar no github.
- git remote add/set-url origin main <camionho_repositório>: Adiciona ou linka a origem de um novo repositório local à um já existente.
- git push origin main


- git log: mostra, de forma completa, todas as alterações feitas em um repositório.
- git log --oneline: mostra, de forma resumida, todas as alterações feitas em um repositório.
- git status: Informa todas as alterações feitas no seu arquivo local em relação ao seu repositório online.
- git restore --source <codigo_commit> <arquivo>: Restalra uma versão anterior.


## Dica:
Ao criar um novo repositório, recomendo criar direto no site github e depois clona-lo para o local desejado
Ex: 
- git clone; (Adicionar os arquivos manualmente na pasta clonada localmente)
- git add <arquivos_adicionados>;
- git commit -m "Mensagem de commit";
- git push origin main;

