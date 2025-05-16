# Algoritmos y Estructuras de Datos


### COMANDOS GRALES
```bash
cd <direccion de carpeta> # esto cambia la ubicacion donde esta la terminal.

sudo <comando e.g: "sudo git clone ..."> # para ejecutar como administrador.

cat archivo # te muestra todo el contenido de un archivo en al terminal.

ls # te muestra las carpetas y archivos que hay.
```
```
#include <cassert> // para assert no para el static
// es un control para el compilador
// el siseof me indica el tamaño del sizeof que lo limita
static assett(siseof(long) == 8, " este programa necesita que long sea de 8 bytes");

int main(){
    assert(cuatro == 4); 
}
```

### COMANDOS DE GIT
```bash
git clone <url de github> # clona el repositorio de github, te crea una carpeta con el codigo en tu compu.

git status # muestra el estado actual del repositorio.

git add <archivo(s)> #agrega archivos que quiero guardar para hacer una mini version del codigo.

git add . #agrega todo de la carpeta donde me paro.

git commit -m "<mesage>" # guarda lo del git add, y puedo elejir que archivos. crea una version del codigo.

git push --set-upstream origin main # subir los cambios de mi compu a git hub cuando la rama es nueva.

git push # subir los cambios de mi compu a git hub. si es nuevo me avisa.

git switch <nombre-de-la-rama> # cambia la rama donde estas codeando

git switch -c <nombre-de-la-nueva-rama> # crea una rama **y te cambia hacia la rama**

git switch <hash-del-commit> --detach # cambias a una version (commit) diferente

git log # muestra el historial de commits del repositorio

git pull # "trae" los cambios que esten en el repositorio remoto y no en el local
```