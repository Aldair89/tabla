# tabla
Este código en C++ permite al usuario crear y mostrar una tabla con datos en forma cuadriculada. A continuación, se describe qué hace cada función y la funcionalidad general del programa:

void mostrarTabla(const vector<vector<string>>& tabla): Esta función recibe como parámetro una tabla representada por un vector de vectores de cadenas (vector<vector<string>>). La función muestra los datos de la tabla en forma cuadriculada utilizando setw(10) para alinear correctamente los elementos en las columnas. Si la tabla está vacía, muestra un mensaje indicando que la tabla está vacía.

La función main(): En esta función, se solicita al usuario ingresar el número de filas y columnas para crear la tabla. Luego, se crea un vector de vectores de cadenas tabla con el tamaño especificado por el usuario. Posteriormente, se solicita al usuario ingresar los datos para cada celda de la tabla.

El programa muestra la tabla creada utilizando la función mostrarTabla(tabla).

El usuario interactúa con el programa proporcionando el número de filas y columnas para la tabla y luego ingresando los datos para cada celda. El programa almacena los datos en la tabla y finalmente muestra la tabla completa en forma de una cuadrícula con los datos alineados en columnas.

Es importante mencionar que en este programa, los datos ingresados por el usuario se tratan como cadenas (string) en la tabla. Si se desea trabajar con otros tipos de datos, es necesario realizar las conversiones adecuadas en la entrada y salida de datos. Además, este código asume que el usuario ingresará datos válidos sin realizar una validación exhaustiva. En un caso real, sería necesario agregar lógica adicional para manejar errores o excepciones en la entrada de datos.
