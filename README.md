**DESCRIPCIÓN DE LA APLICACIÓN**

La aplicación es un simulador de rutas metabólicas que permite modelar y analizar sistemas de reacciones químicas 
mediante resolución numérica. El objetivo principal es facilitar el estudio del comportamiento dinámico de una ruta 
metabólica de forma visual e interactiva, permitiendo modificar fácilmente distintos elementos del modelo 
y estudiar sus variaciones.
<br><br>

**CÓMO EJECUTAR LA APLICACIÓN**

Descargue los archivos 'Prototipo.exe' y 'script.exe' ubicados en la carpeta ejecutable. Guárdalos en el mismo directorio y abre 'Prototipo.exe'.
<br><br>

**FLUJO PRINCIPAL DE LA INTERFAZ**

**1. Entrada de datos**: El usuario introduce una ruta metabólica indicando los METABOLITOS que participan en ella, 
las REACCIONES que la componen, qué tipo de MECANISMO sigue cada reacción y los PARÁMETROS de cinética química necesarios. 
Para cada elemento, hay un botón que indica cómo introducirlo. También puede usar el menú superior para subir plantillas 
ya guardadas o cargar un ejemplo de ruta de la glucólisis.

Después, el usuario VALIDA los datos introducidos mediante el botón 'Validar datos'. Si hay errores en la carga de datos, 
la aplicación indica la línea donde se encuentran y el motivo. Si la validación es satisfactoria, se calculan las ecuaciones 
cinéticas de cada reacción introducida y el sistema de ecuaciones asociado. El sistema contiene una ecuación por metabolito cargado 
y representa su variación de concentración en el tiempo. Se pueden visualizar mediante los botones de 'Mostrar Ec.Cinética' y 
'Mostrar Sistema de Ecuaciones'.

**2. Configuración de la simulación**: Una vez validados los datos, el usuario establece el intervalo temporal y los ciclos 
para la simulación, así como el método numérico a emplear. Se recomienda leer la información de los métodos numéricos 
para entender cuándo conviene usar cada uno de ellos.

**3. Salida**: Tras lanzar la simulación, el usuario puede visualizar los resultados obtenidos en forma de TABLA o GRÁFICA. 
En ellas se muestra la concentración de los metabolitos cargados en cada instante de la simulación, pudiendo analizar su evolución. 
La gráfica y la tabla son descargables usando el menú superior.
<br><br>

**INFORMACIÓN DE LA APLICACIÓN**

Simulador de Rutas Metabólicas <br>
Versión 1.0 <br>
Esta aplicación ha sido desarrollada como parte de un Trabajo Fin de Grado con el objetivo de facilitar la simulación de rutas metabólicas. 
Se ha utilizado Embarcadero C++ Builder 12 Community Edition para la implementación de la interfaz gráfica y la gestión de la estructura de datos interna, y las librerías SciPy, NumPy y Matplotlib de Python para la resolución de las ecuaciones diferenciales resultantes y su visualización. <br><br>
_Autora: Elena Torres Fernández_ <br>
_Universidad de Granada_ <br>
_Año_: 2026
