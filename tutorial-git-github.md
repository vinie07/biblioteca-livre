# Tutorial Git & GitHub

## Sumário

1. [Conceitos Fundamentais](#1-conceitos-fundamentais)
2. [Configuração Inicial](#2-configuração-inicial)
3. [Iniciando um Repositório](#3-iniciando-um-repositório)
4. [Fluxo Básico](#4-fluxo-básico)
5. [Commits](#5-commits)
6. [Desfazendo Alterações](#6-desfazendo-alterações)
7. [Branches](#7-branches)
8. [GitHub — Conectando ao Remoto](#8-github--conectando-ao-remoto)
9. [SSH — Autenticação Segura](#9-ssh--autenticação-segura)
10. [Pull Request](#10-pull-request)
11. [Rebase](#11-rebase)
12. [Git Clone](#12-git-clone)
13. [Dicas Gerais](#13-dicas-gerais)

---

## 1. Conceitos Fundamentais

Antes de qualquer comando, é fundamental entender onde seus arquivos estão em cada etapa:

| Área | Descrição |
|---|---|
| **Working Directory** | Seus arquivos locais — onde você edita o código |
| **Stage (Staging Area)** | Área de preparação — arquivos prontos para o próximo commit |
| **Local Repository** | Repositório na sua máquina — onde os commits ficam salvos |
| **Remote (GitHub)** | Repositório na nuvem — cópia de segurança e colaboração |

O fluxo geral é:

```
Working Directory → (git add) → Stage → (git commit) → Local Repo → (git push) → GitHub
```

E no sentido inverso:

```
GitHub → (git pull) → Local
```

> Pense no GitHub como um Google Drive para código: você tem tudo salvo localmente e sobe uma cópia na nuvem.

---

## 2. Configuração Inicial

Antes de usar o Git pela primeira vez, configure seu nome e e-mail — essas informações aparecem em todos os seus commits:

```bash
git config --global user.name "seu-usuario"
git config --global user.email "seu@email.com"
```

Para verificar as configurações salvas:

```bash
git config -l
```

Definir `main` como branch padrão em todos os novos repositórios:

```bash
git config --global init.defaultBranch main
```

---

## 3. Iniciando um Repositório

### Criar um repositório do zero

```bash
git init .
```

Cria um repositório Git vazio na pasta atual.

### Mudar a branch principal para `main` no repositório atual

```bash
git branch -m main
```

---

## 4. Fluxo Básico

### `git status`

Mostra o estado atual dos arquivos: qual branch você está, o que foi modificado, o que está no stage etc.

```bash
git status
```

### `git add` — Adicionando ao Stage

| Comando | O que faz |
|---|---|
| `git add .` | Adiciona todos os arquivos **a partir da pasta atual** |
| `git add -A` ou `git add --all` | Adiciona **tudo** da árvore, independente da pasta onde você está |
| `git add *` | Adiciona arquivos novos/modificados, mas **não** os deletados |
| `git add ARQUIVO` | Adiciona apenas um arquivo específico |
| `git add *.txt` | Adiciona todos os `.txt` novos/modificados (exceto deletados) |

> **Diferença importante:** `git add .` respeita a hierarquia de pastas (adiciona a partir de onde você está). Já `git add -A` sempre adiciona tudo da raiz do repositório.

### Removendo do Stage

```bash
git rm --cached ARQUIVO     # remove um arquivo do stage
git rm -r --cached .        # remove TUDO do stage (mantém os arquivos no disco)
```

---

## 5. Commits

### Criar um commit

```bash
git commit -m "mensagem descritiva do que foi feito"
```

### Atalho: add + commit em um comando

```bash
git commit -am "mensagem"
```

> Equivale a `git add .` + `git commit`. Muito útil no dia a dia!

### Ver o histórico de commits

```bash
git log                             # histórico completo
git log --oneline                   # resumo em uma linha por commit
git log --oneline --graph --all     # gráfico visual de todas as branches
```

Exemplo de saída do `--graph`:

```
* c2cfc52 (HEAD -> main) Commit c: altera o main após criação da feature
| * 9e8a0d6 (feature) Commit E: adiciona linha 3 na frente
| * a421926 Commit D: adiciona linha 2 na feature
|/
* fe48ec6 commit A: adicionado arquivo texto.txt
```

Sobre o que aparece no log:

- `(HEAD -> main)` → commit existe **apenas localmente**
- `(origin/main)` → commit já foi enviado ao **GitHub**

### Ver detalhes de um commit específico

```bash
git show HASH_DO_COMMIT
```

### Ver linhas alteradas ainda não commitadas

```bash
git diff
```

### Corrigir a mensagem do último commit

```bash
git commit --amend -m "nova mensagem corrigida"
```

---

## 6. Desfazendo Alterações

| Comando | O que faz |
|---|---|
| `git restore ARQUIVO` | Desfaz alterações não salvas no arquivo (Working Directory) |
| `git reset` | Desfaz o `git add` (tira do stage) |
| `git reset HEAD~` | Desfaz o último commit **e** o add (volta ao Working Directory) |
| `git reset --hard` | Volta os arquivos ao estado do último commit (descarta tudo) |

### Excluindo arquivos via Git

```bash
git rm ARQUIVO          # remove o arquivo e já adiciona ao stage
git rm -f ARQUIVO       # força a remoção caso o Git recuse
git rm -r DIRETORIO     # remove um diretório inteiro (recursivo)
```

Flags de `git rm`:

- `--force` → remove completamente
- `--cached` → remove apenas do stage (mantém o arquivo no disco)

### Voltar o projeto a um commit antigo

```bash
git checkout HASH_DO_COMMIT
```

---

## 7. Branches

Branches são linhas de desenvolvimento paralelas. Permitem trabalhar em uma nova funcionalidade sem afetar o código principal.

```
main  ──────────────────────────────────────────*──►
              |                                 |
              └──► feature-1 ── commit ── commit┘ (merge)
```

### Comandos de Branch

```bash
git branch                  # lista branches locais
git branch -r               # lista branches remotas
git branch -a               # lista locais + remotas
git branch NOME             # cria uma nova branch
git branch -d NOME          # deleta uma branch
```

### Trocar de branch

```bash
git checkout NOME           # troca para a branch especificada
git checkout -              # troca rapidamente para a branch anterior
git checkout -b NOME        # cria e já troca para a nova branch
```

### Merge — unindo branches

Estando na branch que vai **receber** as mudanças (geralmente `main`):

```bash
git merge development -m "Merging development into main"
```

### Push de uma branch nova

Ao criar uma branch localmente e tentar fazer `git push`, você verá um erro pedindo para configurar o upstream. Resolva com:

```bash
git push --set-upstream origin NOME_DA_BRANCH
# ou
git push -u origin feature-1
```

Nos pushes seguintes dessa mesma branch, basta:

```bash
git push
```

---

## 8. GitHub — Conectando ao Remoto

### Vincular repositório local ao GitHub

Após criar um repositório **vazio** no GitHub (sem README), copie o link e execute:

```bash
git remote add origin "URL_SSH_OU_HTTPS"
```

Depois envie seus arquivos:

```bash
git push -u origin main
```

> **Dica:** Prefira SSH ao HTTPS — é mais seguro e você não precisa digitar senha toda hora.

### Verificar a conexão remota

```bash
git remote -v
```

Saída esperada:

```
origin  git@github.com:usuario/repositorio.git (fetch)
origin  git@github.com:usuario/repositorio.git (push)
```

### Git Push e Pull

```bash
git push        # envia commits locais para o GitHub
git pull        # baixa e integra as mudanças do GitHub no local
```

---

## 9. SSH — Autenticação Segura

Ao usar SSH pela primeira vez, você precisará gerar e cadastrar uma chave no GitHub.

### 1. Gerar a chave SSH

```bash
ssh-keygen -t ed25519 -C "seu@email.com"
```

Pressione **Enter** três vezes (aceita o caminho padrão e sem senha).

### 2. Copiar a chave pública

A chave pública fica em `~/.ssh/id_ed25519.pub`. Copie o conteúdo do arquivo (o que tem a extensão `.pub`).

```bash
cat ~/.ssh/id_ed25519.pub
```

### 3. Cadastrar no GitHub

Acesse: **GitHub → Settings → SSH and GPG keys → New SSH key**

Cole o conteúdo copiado e salve.

### 4. Testar a conexão

```bash
ssh -T git@github.com
```

Após isso, `git push` e `git pull` funcionarão sem senha.

> Referência oficial: [Conectando ao GitHub com SSH](https://docs.github.com/pt/authentication/connecting-to-github-with-ssh)

---

## 10. Pull Request

Um Pull Request (PR) é o mecanismo do GitHub para **propor a integração** de uma branch na `main`. Muito usado em times para revisão de código.

**Fluxo completo:**

1. Crie uma branch e faça seus commits
2. Envie a branch ao GitHub: `git push -u origin nome-da-branch`
3. Acesse o repositório no GitHub — ele vai sugerir abrir um PR automaticamente
4. Preencha a descrição e submeta o PR
5. Um revisor avalia e aprova (ou pede alterações)
6. Após aprovação, o merge é feito
7. Delete a branch no GitHub (botão disponível após o merge)
8. Atualize sua máquina local:

```bash
git pull
```

---

## 11. Rebase

O rebase "reaplica" os commits de uma branch em cima de outra, mantendo o histórico mais limpo que um merge comum.

### Quando usar

Você está na branch `feature` e quer trazer as novidades que vieram para o `main`:

```bash
git rebase main
```

### Resolvendo conflitos no rebase

Se houver conflito:

```
CONFLITO (conteúdo): conflito de mesclagem em arquivo.txt
```

**Passo a passo para resolver:**

1. Abra o arquivo conflitante e resolva manualmente (remova os marcadores `<<<`, `===`, `>>>`)
2. Adicione o arquivo resolvido:
   ```bash
   git add .
   ```
3. Continue o rebase:
   ```bash
   git rebase --continue
   ```
4. Repita até não haver mais conflitos. Ao final:
   ```
   Successfully rebased and updated refs/heads/feature.
   ```

### Outros comandos de rebase

```bash
git rebase --skip    # pula o commit conflitante
git rebase --abort   # cancela e volta ao estado anterior
```

---

## 12. Git Clone

Clonar traz um repositório completo do GitHub (com todo o histórico, commits, branches e tags) para sua máquina.

```bash
git clone URL
git clone URL nome-da-pasta    # define o nome da pasta de destino
```

> Não é necessário `git init` após o clone — ele já inicializa o repositório automaticamente.

### Onde encontrar a URL

No GitHub, clique no botão verde **`<> Code`** e copie o link HTTPS ou SSH.

| Protocolo | Vantagem |
|---|---|
| HTTPS | Mais rápido para configurar |
| SSH | Mais seguro, sem necessidade de senha |

---

## 13. Dicas Gerais

**Combo útil para o dia a dia:**

```bash
git add . && git status && git commit -m "sua mensagem"
git log --oneline
git show HASH
```

**Mensagens de commit:** sempre escreva mensagens claras e informativas. Outros desenvolvedores (e você mesmo no futuro) precisam entender o que mudou sem ter que ler todo o código.

```bash
# ruim
git commit -m "fix"

# bom
git commit -m "corrige bug no cálculo de desconto no carrinho"
```

**Resumo do fluxo completo:**

```
git init                          # inicia o repositório
git add .                         # prepara os arquivos
git commit -m "mensagem"          # salva localmente
git remote add origin URL         # conecta ao GitHub (primeira vez)
git push -u origin main           # envia para o GitHub (primeira vez)
git push                          # envia nos pushes seguintes
git pull                          # baixa atualizações do GitHub
```

---

> **Git é offline** — você pode versionar código sem internet. O GitHub é a camada de nuvem que permite backup e colaboração. Se seu PC explodir, seu código está seguro :)