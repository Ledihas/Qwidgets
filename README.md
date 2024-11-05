# Proyecto Qwidgets

<p>
Esta es una aplicación de escritorio simple desarrollada en C++ utilizando Qt, diseñada para gestionar unas tablas de personas y libros(esta ultima no cuenta con una base de datos pero la de personas sí). La aplicación ofrece funcionalidades básicas como añadir, eliminar y visualizar registros, además de permitir guardar los datos en archivos locales.
</p>

## Tabla de Contenidos

- [Tecnologías utilizadas](#tecnologías-utilizadas)
- [Funcionalidades principales](#funcionalidades-principales)
- [Instalación](#instalación)
- [Archivos Principales](#archivos-principales)
- [Estructura de la Base de Datos](#estructura-de-la-base-de-datos)
- [Uso](#uso)
- [Contribución](#contribución)
- [Autor](#autor)


## Tecnologías Utilizadas

- **C++**: Lenguaje de programación utilizado para la aplicación de escritorio.

- **Qt**: Framework utilizado para desarrollar la interfaz gráfica.

- **CMake**: Herramienta de código abierto que permite crear, probar y empaquetar software en múltiples plataformas.



## Funcionalidades principales

<p>
   * **Añadir Persona:** Permite ingresar los datos de una nueva persona y almacenarlos en la base de datos.
   * **Eliminar Persona:** Elimina un registro de persona de la base de datos según el nombre ingresado.
  *  **Guardar Datos:** Guarda los datos de la tabla personas en un archivo local. El usuario debe especificar el nombre del archivo con su extensión (por ejemplo, datos.csv).
  *  **Visualizar Datos:** Muestra los datos de las personas en una tabla.
</p>

## Limitaciones

<p>
* **No hay edición de datos:** Los registros no pueden ser modificados una vez creados.
* **No hay búsqueda:** No existe una función de búsqueda específica para encontrar registros.
* **Validación básica:** Se realiza una validación simple para asegurar que el campo nombre no esté vacío.
</p>


## Instalación

**Prerrequisitos:** Qt, CMake, compilador C++.


### Pasos:
1. **Clonar el repositorio:**
   ```bash
   git clone -b main https://github.com/Ledihas/Qwidgets.git
   cd Qwidgets
   code .
   

2. **Configurar Cmake:**
  ```bash
    mkdir build
    cd build
    cmake ..



3. **Compilar y ejecutar:**
  ```bash
    make
    ./qwidgect
   
   
   
## Archivos Principales

<p>
- widget.cpp y widget.h: Estos archivos contienen la clase principal Widget, que es responsable de crear la interfaz de usuario principal. Aquí se gestionan los eventos de los botones, se actualiza la tabla de personas y se conecta con la base de datos.

- persondialog.cpp y persondialog.h: Definen la clase PersonDialog, un diálogo modal que se utiliza para agregar nuevas personas. Esta clase contiene los campos para ingresar el nombre, edad y salario de la persona, así como la lógica para guardar los datos en la base de datos.


- libdialog.cpp y libdialog.h: Similar a PersonDialog, esta clase define un diálogo para agregar nuevos libros.

- database.cpp: Este archivo contiene las funciones para conectarse a la base de datos SQLite, ejecutar consultas SQL y realizar operaciones CRUD (crear, leer, actualizar, eliminar) en la tabla de personas.
- eliminar.cpp y eliminar.h: Define un diálogo para eliminar personas de la base de datos.

- archivos XML que contienen la definicion de la UI.

* Explicación de las Funciones Clave

 - populateTableWidget(): Esta función se encarga de cargar los datos de la tabla "personas" desde la base de datos y mostrarlos en el QTableWidget de la interfaz.
 -  on_boton_clicked(), on_pushButton_clicked(): Estos slots se activan cuando el usuario hace clic en los botones "Agregar Persona" y "Agregar Libro", respectivamente. Invocan a los diálogos correspondientes para obtener los datos y guardarlos en la base de datos.
 -  on_eliminar_clicked(): Este slot se activa cuando el usuario hace clic en el botón "Eliminar Persona". Muestra un diálogo para solicitar el nombre de la persona a eliminar y luego ejecuta la consulta SQL correspondiente.
 -  saveTableToFile(): Esta función guarda los datos de una tabla en un archivo de texto, permitiendo al usuario exportar los datos.
</p>



## Estructura de la Base de Datos

* **nombre:** Nombre de la persona (texto).
* **edad:** Edad de la persona (entero).
* **salario:** Salario de la persona (decimal).

**Ejemplo de código para insertar un nuevo registro:**

  ```c++
query.prepare("INSERT INTO personas (nombre, edad, salario) VALUES (:nombre, :edad, :salario)");

## Uso

    en proceso...
    
    
## Contribuciones

Las contribuciones son bienvenidas. Para contribuir, por favor, crea una bifurcación del repositorio, realiza los cambios y envía una solicitud de fusión.

<ul>
   <li><p> Haz un fork del repositorio.</p></li>
    <li><p>Crea una nueva rama (git checkout -b feature/nueva-caracteristica).</p></li>
    <li><p>Realiza tus cambios y haz commit (git commit -m 'Agrega nueva característica').</p></li>
    <li><p>Haz push a la rama (git push origin feature/nueva-caracteristica).</p></li>
    <li><p>Abre un Pull Request.</p></li>
</ul>


# Autor
 ** *Ledihaz* **
# Correo

- chuchua441@gmail.com
# Qwidgets
