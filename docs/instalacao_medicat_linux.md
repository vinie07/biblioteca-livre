#   Como Instalar o MediCat USB no Linux

##  Pré-requisitos

- SSD externo ou pendrive de **no mínimo 32GB (recomendado 64GB+)**
- Arquivo `MediCat.USB.v21.12.7z` já baixado (~23GB)
- Arquivo do **Ventoy** para Linux já baixado (ventoy-x.x.xx-linux.tar.gz)
- 7z instalado
- >sudo apt install p7zip-full

---

##  Passo 1 — Identificar os discos

```bash
lsblk
```

Exemplo de saída (referência desta instalação):

```
NAME        MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
sda           8:0    0 223,6G  0 disk <---SSD externo (alvo)
├─sda1        8:1    0 223,5G  0 part
└─sda2        8:2    0    32M  0 part
nvme1n1     259:0    0 476,9G  0 disk <---LINUX
├─nvme1n1p1 259:1    0  14,9G  0 part [SWAP]
├─nvme1n1p2 259:2    0   977M  0 part /boot/efi
├─nvme1n1p3 259:3    0  93,1G  0 part /
└─nvme1n1p4 259:4    0   368G  0 part /home
```

> **ATENÇÃO:** Confirme se o disco é o certo pelo: **tamanho/nome** antes de qualquer comando.
> 
> O ssd interno(sistema/linux) aqui é o `nvme1n1` (nvme). 
> 
> O SSD externo é o `sda`.

Para mais detalhes sobre os discos e partições:

```bash
sudo fdisk
```

---

##  Passo 2 — Instalar o Ventoy no SSD externo

1.  Extraia o Ventoy baixado e entra na pasta dele

2.  Instala o Ventoy no SSD externo:

```bash
./VentoyGUI.x86_64
```

> Isso vai criar duas partições automaticamente:
> - `sda1` → partição principal (onde ficam os arquivos do MediCat)
> - `sda2` → partição de boot do Ventoy (**NÃO MEXA**)

---

##  Passo 3 — Formatar a partição principal como NTFS

O MediCat exige NTFS porque contém arquivos maiores que 4GB:

```bash
sudo mkfs.ntfs -f /dev/sda1
```

O `-f` realiza uma formatação rápida

---

##  Passo 4 — Montar o SSD

```bash
sudo mkdir -p /mnt/medicat
sudo mount /dev/sda1 /mnt/medicat
```

Confirme que está montado e vazio:

```bash
ls /mnt/medicat/
```

Deve retornar vazio ou só a estrutura base do Ventoy.

---

##  Passo 5 — Extrair o MediCat para o SSD

```bash
sudo 7z x ~/X/Z/Y/MediCat.USB.v21.12.7z -o/mnt/medicat/
```
**Substituia** o caminho pelo local onde o arquivo `.7z` está na tua máquina.

**EXEMPLO:**

```bash
sudo 7z x ~/Documentos/MediCat.USB.v21.12.7z -o/mnt/medicat/
```

Saída esperada ao finalizar:

```
Everything is Ok
Folders: 4739
Files: 29655
Size:       28311227591
Compressed: 22994783619
```

OBS: Esse processo pode demorar alguns minutos dependendo do SSD.

---

## Passo 6 — Verificar e desmontar

Confirme que os arquivos estão lá:

```bash
ls /mnt/medicat/
```

Desmonte com segurança:

```bash
sudo umount /mnt/medicat
```

---

## Passo 7 — Bootando pelo MediCat

1. Mantenha o SSD/pendrive externo conectado
2. Reinicie o PC:
```bash
sudo reboot
```
3. Na tela de boot, pressiona **F12/DEL/ESC** para o menu de boot/bios
4. Seleciona o SSD/Pendrive externo
5. O menu do **Ventoy** vai aparecer com todas as opções do MediCat

---