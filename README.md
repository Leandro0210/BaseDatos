# BaseDatos
* PROBLEMA
  
Se nos atraviesa un problema el cual tenemos que solucionar como desarrollador de c++, es el siguiente:
Una empresa nos pide una base de datos, la cual cumpla con sus necesidades, queremos guardar eventos con sus respectivas
fechas en las cuales estos se llevan a cabo.
A base de comandos, la empresa podra almacenar, ver y eliminar la cantidad de eventos que deseen.
* INVESTIGACION
Las bases de datos son sistemas organizados de recopilación y almacenamiento de datos, diseñados para permitir el fácil acceso, gestión y actualización de la información. Son útiles porque facilitan la organización y recuperación eficiente de datos, permitiendo a las empresas y organizaciones gestionar grandes cantidades de información de manera estructurada y segura.
Las bases de datos también son útiles porque:

1. Facilitan el acceso rápido a la información: Con consultas bien diseñadas, se puede recuperar la información necesaria en cuestión de segundos, lo que ahorra tiempo y mejora la productividad.

2. Promueven la integridad de los datos: Almacenar los datos de manera estructurada y aplicar restricciones de integridad garantiza que la información sea precisa y coherente.

3. Permiten compartir datos: Las bases de datos pueden ser accesibles para múltiples usuarios simultáneamente, lo que facilita la colaboración y el intercambio de información entre equipos y departamentos.

4. Mejoran la seguridad: Las bases de datos ofrecen mecanismos para controlar quién puede acceder, modificar y eliminar datos, lo que ayuda a proteger la información confidencial.

5. Facilitan el análisis de datos: Las funciones de consulta y análisis permiten extraer información útil y generar informes para la toma de decisiones informada

   La base de datos que usa Google es: Firebase Realtime Database es una base de datos alojada en la nube. Los datos se almacenan en formato JSON y se sincronizan en tiempo real con cada cliente conectado.
   Comparandolo con facebook que usa:
   Bases de Datos NoSQL: Para manejar grandes cantidades de datos, Facebook utiliza bases de datos NoSQL como Cassandra y RocksDB, que ofrecen una gran escalabilidad y rendimiento.
   La razon por la que mi base de datos ha sido creada es pa beneficiar y sacar el maximo provecho a esta empresa, que podra guardar una gran cantidad de informacion de forma rapida y segura.
   
* DESCRIPCION DE FUNCIONES Y ESTRUCTURAS

 En mi codigo se usa una estructura la cual nos ayuda a almacenar las fechas de cada uno de los eventos.
 Ahora en cuanto a funciones que se trata, existen 6 funciones:

  -Add: Agrega un evento con su fecha a la BD.
  
  -Del fecha evento: Elimina un evento con su fecha de la BD.
  
  -Del fechas: Elimina todos los eventos que existan en una fecha determinada.
  
  -Find fechas: Imprime todos los eventos de una fecha determinada linea por linea respetando un orden ascendente.
  
  -Print: Imprime todos los eventos con sus fechas de todo la BD, por orden de fechas.
  
  -Cerrar: Cuando el usuario quiera cerrar el programa, esta funcion lo hara.

* Creditos : Leandro Miranda y Daniela Torrez.
* Herramientas: C++, GitHub, Git Bash , Draw.io.
