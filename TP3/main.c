#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "Funciones.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    int resultado;

    LinkedList* listaEmpleados = ll_newLinkedList();


    do
    {
        resultado = 1;
        printf("\n                        MENU  \n");
        printf(" 1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n");
        printf(" 2. Cargar los datos de los empleados desde el archivo data.bin (modo binario).\n");
        printf(" 3. Alta de empleado\n");
        printf(" 4. Modificar datos de empleado\n");
        printf(" 5. Baja de empleado\n");
        printf(" 6. Listar empleados\n");
        printf(" 7. Ordenar empleados\n");
        printf(" 8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
        printf(" 9. Guardar los datos de los empleados en el archivo data.bin (modo binario).\n");
        printf("10. Salir\n");
        option = inputIntDesdeHasta("Su opcion : ",1,10);
        switch(option)
        {
        case 1:
            resultado = controller_loadFromText("data.csv",listaEmpleados);

            break;
        case 2:
            resultado = controller_loadFromBinary("data.bin", listaEmpleados);
            break;
        case 3:
            resultado = controller_addEmployee(listaEmpleados);
            break;
        case 4:
            resultado = controller_editEmployee(listaEmpleados);
            break;
        case 5:
            resultado = controller_removeEmployee(listaEmpleados);
            break;
        case 6:
            resultado = controller_ListEmployees(listaEmpleados);
            break;
        case 7:
            resultado = controller_sortEmployee(listaEmpleados);
            break;
        case 8:
            resultado = controller_saveAsText("data.csv",listaEmpleados);
            break;
        case 9:
            resultado = controller_saveAsBinary("data.bin",listaEmpleados);
            break;

        }
        switch(resultado)
        {
        case 0:
            printf("\nOPERACION TERMINADA CON PROBLEMAS\n");
            break;
        case 1:
            printf("\nOPERACION TERMINADA CON EXITO\n");
            break;
        case 2:
            printf("\nOPERACION CANCELADA POR EL USUARIO\n");
            break;
        }

    }while(option != 10);

    ll_clear(listaEmpleados);
    ll_deleteLinkedList(listaEmpleados);

    return 0;
}
