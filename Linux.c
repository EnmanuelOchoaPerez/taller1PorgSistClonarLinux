// https://potential-fishstick-7vvvjq49vqx7cr75w.github.dev/(ide)
#include <stdio.h>
struct Usuario{
    int id; 
    char nombre[15];
    char apellido[15];
    char usuario[15];
    char grupo[15];
    int clave;
    signed estado;
}

do {
    printf(" [1] Crear usuario \n");
    
    if (i == 1){

        FILE *archivo = fopen("usuarios.dat", "w");
        if (archivo == NULL) {
            printf("Error al crear el archivo.\n");
        return 1;
        }

        fprintf("Ingrese nombre:  %s\n ", Usuario.nombre);
    
        fprintf("Ingrese apellido: %s\n ", Usuario.apellido);
    
        Usuario.usuario[0]= Usuario.nombre[0]
    
        for[int i=0 ; i<5 ; i++]{
            Usuario.usuario[i +1]= Usuario.apellido[i];
        }
        Usuario.usuario[6] = '\0';
        
        fprintf("Su usuario es: %s\n", Usuario.usuario);
    
        fprintf("Que grupo pertenece: %s\n ", Usuario.grupo);
    
        fprintf("Contraseña: %d\n ", Usuario.clave);
    
        signed Usuario.estado= 1;
        fprintf(archivo, "Estado ACTIVO %d\n", Usuario.estado);
    
        fclose(archivo);
        printf("Datos de texto guardados con exito.\n");
        return 0;
    }

    printf(" [2] Listar todos los usuarios \n");
    printf(" [4] Bloquear / desbloquear usuario \n");
    printf(" [0] Eliminar usuario \n");
    if
}while ((i = getchar()) != '0')




//Ochoa Pérez Enmanuel Ignacio 
//Negrete Alvarado Daniel José
