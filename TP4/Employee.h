#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr);
Employee* employee_newParametrosInt(int idStr,char* nombreStr,int horasTrabajadasStr, int sueldo);

void employee_delete();

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);

int employee_sortId(void* id1 , void* id2);
int employee_sortNombre(void* nombre1, void* nombre2);
int employee_sortHorasTrabajadas(void* hora1 , void* hora2);
int employee_sortSueldo(void* sueldo1 , void* sueldo2);


int employee_SueldoMayorDe50000(void* empleado);
int employee_nombreComienzaConR(void* empleado);
int employee_nombreMasLargoQue12Caracteres(void* empleado);

int employee_nombreContieneLetra(void* empleado, char caracter);
int employee_nombreConId(void* empleado, int numero);
int employee_nombreConHorasTrabajadas(void* empleado, int numero);
int employee_nombreConSueldo(void* empleado, int numero);

#endif // employee_H_INCLUDED
