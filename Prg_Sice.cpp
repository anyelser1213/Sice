#include <cstdlib>//para utilizar system
#include <stdio.h>//entrada y salida de lenguaje c
#include <iostream>//para poder utilizar la entrada y salida de c++
#include <string>//para utilizas cadenas de caracteres
#include <windows.h>//para poder utilizar el tiempo Sleep

using namespace std;//para especificar que el namespace std va a utilizarse frecuentemente en el programa


#define Registro_P "efrain" //esta es una manera de declarar constante en lenguaje C
#define PASS "123321"

struct Corte_1{//Estructura del primer corte
       float Nota_Unica;
       };
       
       struct Corte_2{//Estructura del segundo corte
              
              float Nota[2];
              
              
              
              };
              
       struct Corte_3{//Estructura del tercer corte
              
              float Nota[3];
              
              };

struct informacion{//Creacion de la Estructura Principal
       
       int comparacion;
       char nombre[15];
       char apellido[15];
       int cedula;
       float Nota_Definitiva;
       char materia[15];
       short seccion;
       struct Corte_1 dir_Notas_Corte_1;
       struct Corte_2 dir_Notas_Corte_2;
       struct Corte_3 dir_Notas_Corte_3;
            float promedio;
       
       };//fin de la estructura principal
       
   //FUNCIONES    
void menor(int *T,float n[]);
void Promedio(float,float, float,float,float,float,int ,float*);
void Verificar_Notas_15(float*,bool*);// funcion para recortar codigo 
void Verificar_Notas_Todas(float*,bool*);
void Defecto_Normal();//funcion para los defectos
void gotoxy(int ,int );//funcion para manipular las posiciones
 
 
int main(int argc, char *argv[])//inicio de la funcion principal
{       
        
        
                           /* const char profesor[]= "efrain"; declaracion de constantes en c++*/
                           
                           
                           
    string usuario,clave_prof;
    int longitud;//Esta variable sera para los for de mensajes
    char Mensaje_Principal[]="Sistema Integrado De Control De Estudios";
    

system("color 02");
cout<<"\n\n\n\t\t******     *****    ****    ******";Sleep(400);
cout<<"\n\n\t\t*    *       *     *        *";Sleep(400);
cout<<"\n\n\t\t*            *     *        *";Sleep(400);
cout<<"\n\n\t\t **          *     *        ****"; Sleep(400);
cout<<"\n\n\t\t   **        *     *        *";Sleep(400);
cout<<"\n\n\t\t     *       *     *        *";Sleep(400);
cout<<"\n\n\t\t*    *       *     *        *";Sleep(400);
cout<<"\n\n\t\t******     *****    ****    ******";Sleep(400);
    
   
    cout<<endl<<endl;
        longitud=strlen(Mensaje_Principal);
        cout<<"\t\t";
         Sleep(2000);
        gotoxy(14,19);
        for(int i=0;i<longitud;i++){
            cout<<Mensaje_Principal[i];
            Sleep(30);
        }//fin del for
        
        system("pause>nul");
short contador=0;//contador para el do while

 bool ingreso=false;
    do{//inicializacion de el do while
            system("cls");
          system("color 06");//para cambiar el fondo y color de las letras
        cout<<"\n\t\tIniciar Sesi"<<char(162)<<"n\n"<<endl;
        Sleep(200);
        cout<<"\tUsuario: ";
        Sleep(200);
        cout<<"\n\tContrase"<<char(164)<<"a: ";
        gotoxy(16,3);
    fflush(stdin);
    cin.clear();
        getline(cin,usuario);//con getline leemos cadenas de caracteres 
        gotoxy(19,4);
        fflush(stdin);//sirve para limpiar el buffer 
    cin.clear();//los mismo que lo de arriba
        getline(cin,clave_prof);

        if(usuario==Registro_P && clave_prof==PASS){//primer condicional
            ingreso=true;
             system("cls");
        }else if(usuario==Registro_P && clave_prof!=PASS){//segundo condicional
              contador++;
              system("cls");
            char Mensaje1[]="La clave es incorrecta, intentelo de nuevo por favor";
            longitud=strlen(Mensaje1);
            gotoxy(3,2);
            for(int i=0;i<longitud;i++){
                  cout<<Mensaje1[i];
                  Sleep(40);   
            }//fin del for
            
            Sleep(2000);
            
        }else  if(usuario!=Registro_P && clave_prof==PASS){//tercer condicional
               system("cls");
               contador++;
               char Mensaje1[]="El usuario es incorrecto, intentelo de nuevo por favor";
            longitud=strlen(Mensaje1);
            gotoxy(3,2);
            for(int i=0;i<longitud;i++){//inicio del for
                  cout<<Mensaje1[i];
                  Sleep(40);   
            }//fin del for
            
               Sleep(2000);
               
        }else if(usuario!=Registro_P && clave_prof!=PASS){//ultima condicional
              system("cls");
              contador++;
              char Mensaje1[]="El usuario y la clave son incorrectos, intentelo de nuevo por favor";
            longitud=strlen(Mensaje1);
            gotoxy(3,2);
            for(int i=0;i<longitud;i++){//inicio del for
                  cout<<Mensaje1[i];
                  Sleep(40);   
            }//fin del for
            
              Sleep(2000);
              }//fin de las condicionales


        }while(ingreso==false && contador<2);// finalización del do while
        system("cls");
        
        if(ingreso==false){
                  cout<<"\n\tUsted no ha podido ingresar\n\tal programa este se cerrara para evitar problemas ";
                  Sleep(2000);
                  return 0;      
        }else{
              char puntos[]=".....";
              gotoxy(15,10);
         cout<<"\n\n\tCARGANDO";
int j=0;
     for(int i=1;i<=15;i++){
      cout<<puntos[j];
         j++;
        Sleep(500);
          if(j==5){
          j=0;
             system("cls");
          gotoxy(15,10);
         cout<<"\n\n\tCARGANDO";
         }
  }//fin del for de carga
  system("cls");
              gotoxy(5,4);
            cout<<"Carga Completa Bienvenido Al Sistema"<<endl;
              Sleep(2000);
              
                }
                
                
                bool ingreso1=false,ingreso2=false,ingreso3=false;//ingresos internos y externos
             int opc;//para seleccionar una opcion
             float Prueba_Notas=0;//para comparar
             system("cls");
             short opc1,opc2;//variable para tomar decisiones mas internas
             
             
             float suma=0,promedio=0,promedio_general=0,cantidad_notas=6;//Estas variables son para el promedio
             
             
             
              short cambio1=0;
             int tamanio=0;//para indicar el numero de estudiantes
            do{ system("cls");
              ingreso=false;
              gotoxy(6,4);
                    	cout<<"Cuantos estudiantes tienes: ";
                    	fflush(stdin);
                    	cin.clear();
                     cin>>tamanio;//se declara el tamaño de los estudiantes
                     if(tamanio>1 && tamanio<31) ingreso=true;
                     else cout<<"\n\tCorrija la respuesta";
                     Sleep(1000);
             }while(ingreso==false); 
             
             informacion alumnos[tamanio];//declaracion de la variable alumnos con el tipo de dato creado
             system("cls");
             gotoxy(6,4);
             cout<<"\n\tMateria que cursan: ";cin>>alumnos[0].materia;
             system("cls");
             gotoxy(6,4); 
            cout<<"\n\tSecci"<<char(162)<<"n: ";cin>>alumnos[0].seccion;
             
        	 
              
		        for(int i=0;i<tamanio;i++){
                        
					alumnos[i].dir_Notas_Corte_1.Nota_Unica=0;
					
                          for(int j=0;j<=2;j++){
             		           alumnos[i].dir_Notas_Corte_2.Nota[j]=0;
              	               alumnos[i].dir_Notas_Corte_2.Nota[j]=0;
                          }//fin del primer for interno
                                    for(int k=0;i<=3;i++){
             	                      	alumnos[i].dir_Notas_Corte_3.Nota[k]=0;
             	                     	alumnos[i].dir_Notas_Corte_3.Nota[k]=0;
             	                      	alumnos[i].dir_Notas_Corte_3.Nota[k]=0;
                                    }//fin del segundo for interno
				 }//fin del for general para agregarle o a sus cuentas
				 
				 
				 for(int i=0;i<tamanio;i++){// CON ESTE FOR COLOCAMOS VALOR PARA COMPARAR
             
                                    alumnos[i].comparacion=i;
             }//FIN DEL FOR DE COMPARACION
				
				
				 
				 system("cls");
					 for(int i=0;i<tamanio;i++){
                     	fflush(stdin);
                     	cin.clear();
                     	system("cls");
                             cout<<"\n\n\tCual es el nombre del alumno " <<i+1<<":";
                             cin>>alumnos[i].nombre;system("cls");
                             cout<<"\n\n\tCual es el apellido del alumno "<<alumnos[i].nombre<<":";
                             cin>>alumnos[i].apellido;system("cls");
                             cout<<"\n\n\tCual es la c"<<char(130)<<"dula del alumno "<<alumnos[i].nombre<<":";
                             cin>>alumnos[i].cedula;system("cls");
                             
                             cout<<"\n\n\tAhora ingresaras las notas del alumno "<<alumnos[i].nombre<<":\n";
                      
     
         cout<<"\n\tPrimer Corte:";
         cout<<"\n\tNota 1: ";
        Verificar_Notas_15(&alumnos[i].dir_Notas_Corte_1.Nota_Unica,&ingreso1);
        
        
        
        
        for(int a=0;a<2;a++){
         cout<<"\n\tSegundo Corte:";
         cout<<"\n\tNota "<<a+1<<": ";
         Verificar_Notas_Todas(&alumnos[i].dir_Notas_Corte_2.Nota[a],&ingreso1);                       
                                
        
        }//fin del primer dor interno
        
        for(int j=0;j<3;j++){
        
         cout<<"\n\tTercer Corte:";
         cout<<"\n\tNota "<<j+1<<": ";
         Verificar_Notas_15(&alumnos[i].dir_Notas_Corte_3.Nota[j],&ingreso1);                       
                              
        
        }//fin del segundo dor interno
                       
                             
                             }//fin del for externo
					 
					 
					 //APARTAR
				
				
				 for(int k=0;k<tamanio;k++){
                              
  				Promedio(alumnos[k].dir_Notas_Corte_1.Nota_Unica , alumnos[k].dir_Notas_Corte_2.Nota[0] ,
  alumnos[k].dir_Notas_Corte_2.Nota[1] , alumnos[k].dir_Notas_Corte_3.Nota[0] , 
  alumnos[k].dir_Notas_Corte_3.Nota[1] , alumnos[k].dir_Notas_Corte_3.Nota[2],cantidad_notas,&alumnos[k].promedio );
	
	}//FIN DEL FOR DE PROMEDIO
  
  
  //APARTTAR 
					 
			

             /*AQUI COMIENZA EL MENU GENERAL*/
             
            do{//Este es el do de todas las opciones
            
            
            	/*PARA LAS FRECUENCIAS*/
                float Orden_descendente[tamanio];
                     float aux=0;//para ordenar es el auxiliar;
                     float notas_definitivas[tamanio];//Con esta variable haras las frecuencias
					 float frecuencias[tamanio][2];//Con esto calculamos las frecuencias
					 int numero_diferente=0;//con esto para incrementar en caso de que no exista un numero
						int fre_modal_mayor=INT_MIN;//esta variable es para determinar la frecuencia mayor
						
						int k=0,j=0;//Esto es para el for interno
						
						bool existe=false;
                     int contador=0;//importante para la moda
                     float Notas_cortes1[tamanio];//para los cortes 
                      float Notas_cortes2[tamanio];//para los cortes 
                       float Notas_cortes3[tamanio];//para los cortes 
                     /*Esto es las variables de frecuencias*/
            
            
            
            
                     ingreso=false;
                system("cls");
                cout<<"\n\n\t1.Verificar datos de los estudiantes"<<endl;
                cout<<"\t2.Modificar datos de los estudiantes"<<endl;
                cout<<"\t3.Verificar Promedio de uno o varios estudiantes"<<endl;
                cout<<"\t4.Verificar el promedio general"<<endl;
                cout<<"\t5.Verificar la moda de los cortes"<<endl;
                cout<<"\t6.Verificar la moda de las notas definitivas"<<endl;
                cout<<"\t0.Salir del programa"<<endl;
                fflush(stdin);
                cin.clear();
                cin>>opc;
                 system("cls");//limpiar la pantalla
                switch(opc){
                            
                case 1://INICIO DEL CASE 1
                     
                     
                     //verificar datos de los estudiantes
                     system("cls");
                     cout<<"\n\tInformacion general de los alumnos:"<<endl;
                     
                     cout<<"\n\tMateria que cursan: ";cout<<alumnos[0].materia;
             
                     cout<<"\n\tSecci"<<char(162)<<"n: ";cout<<alumnos[0].seccion<<"\n\n";
                     
     for(int i=0;i<tamanio;i++){
  cout<<"--------------------------------------------------------------------------------"; 
  cout<<"\n\tEl alumno "<<i+1<<" es:"<<endl;
  cout<<"\n\t"<<alumnos[i].nombre<<" "<<alumnos[i].apellido<<"\n\n\tportador de la c"<<char(130)<<"dula "<<alumnos[i].cedula;
  cout<<"\n\n\tPrimer corte: "<<endl;
  cout<<"\n\t\tNota Unica: ";
  cout<<alumnos[i].dir_Notas_Corte_1.Nota_Unica;
  cout<<"\n\n\tSegundo corte: "<<endl;
  for(int a=0;a<2;a++){
  if(a==0)cout<<"\n\t\tNota 1: ";
  if(a==1)cout<<"\n\t\tNota 2: ";
  cout<<alumnos[i].dir_Notas_Corte_2.Nota[a];
  
  }//fin del primer for interno
  cout<<"\n\n\tTercer corte: "<<endl;
  for(int k=0;k<3;k++){
  if(k==0)cout<<"\n\t\tNota 1: ";
  if(k==1)cout<<"\n\t\tNota 2: ";
  if(k==2)cout<<"\n\t\tNota 3: ";
  cout<<alumnos[i].dir_Notas_Corte_3.Nota[k];
  
  }//fin del segundo for interno  
  cout<<endl;              
                            
                             }//fin del for
  cout<<"--------------------------------------------------------------------------------";
                             Sleep(1000);
                             system("pause>nul");
                     
                     
                break;
                
                
                
                case 2:// INICIO DEL CASE 2
                short opc3;
               do{
                  ingreso1=false;
                     system("cls");
                     cout<<"\n\tEn cual estudiante desea modificar su informaci"<<char(162)<<"n: "<<endl;
                     
                     for(int i=0;i<tamanio;i++){//inicio del for
                             cout<<"\t"<<i+1<<"."<<alumnos[i].nombre<<" "<<alumnos[i].apellido<<endl;
                             
                             }//fin del for
                             cout<<"\t"<<tamanio+1<<".Regresar al men"<<char(163);
                             fflush(stdin);
                             cin.clear();    
                             cout<<"\n\t--->";                        
                             cin>>opc;
                             opc-=1;
                             
                             for(int k=0;k<tamanio;k++){
                                     
                                     if(opc==alumnos[k].comparacion){
                                        short cambio=0;//variable para cambiar informacion                             
                      
                             do{
                                
                                         
                                        ingreso2=false;
                                     if(cambio==0){
                                                   system("cls");
                                                   cambio++;
                                        cout<<"\n\tQue Desea modificar de "<<alumnos[k].nombre<<" "<<alumnos[k].apellido<<endl;
                                        cout<<"\n\n\t1.Nombre";
                                        cout<<"\n\n\t2.Apellido";
                                        cout<<"\n\n\t3.C"<<char(130)<<"dula";
                                        cout<<"\n\n\t4.Notas";
                                        cout<<"\n\n\t5.Cancelar modificacion"<<endl;
                                        cout<<"\t-->";
                                     }else{
                                           system("cls");
                                           cout<<"\n\tDesea modificar otra caracteristica de "<<alumnos[k].nombre<<" "<<alumnos[k].apellido<<endl;
                                        cout<<"\n\n\t1.Nombre";
                                        cout<<"\n\n\t2.Apellido";
                                        cout<<"\n\n\t3.C"<<char(130)<<"dula";
                                        cout<<"\n\n\t4.Notas";
                                        cout<<"\n\n\t5.Cancelar modificacion"<<endl;
                                        cout<<"\t-->";
                                           }
                                        fflush(stdin);
                                        cin.clear();
                                        cin>>opc1;
                                        switch(opc1){//inicio del switch
                                                    system("cls");
                                        case 1:
                                             cout<<"\n\tCual sera el nuevo nombre de "<<alumnos[k].nombre<<" "<<alumnos[k].apellido<<endl;
                                             cout<<"\t-->";
                                             cin>>alumnos[k].nombre;
                                        break;
                                        case 2:
                                             cout<<"\n\tCual sera el nuevo apellido de "<<alumnos[k].nombre<<" "<<alumnos[k].apellido<<endl;
                                             cout<<"\t-->";
                                             cin>>alumnos[k].apellido;
                                        break;
                                        case 3:
                                             cout<<"\n\tCual sera la nueva c"<<char(130)<<"dula de "<<alumnos[k].nombre<<" "<<alumnos[k].apellido<<endl;
                                             cout<<"\t-->";
                                             cin>>alumnos[k].cedula;
                                        break;
                                        case 4:
                                             
                                        do{
                                           system("cls");
                                           ingreso3=false;
                                           if(cambio1==0){
                                                         cambio1++;
                                             cout<<"\n\tEn cual corte desea modificar su nota: "<<endl;
                                             cout<<"\n\t1.Corte 1";
                                             cout<<"\n\t2.Corte 2";
                                             cout<<"\n\t3.Corte 3";
                                             cout<<"\n\t4.Cancelar modificacion de notas";
                                             cout<<"\n\t-->";
                                             }else{
                                                   cout<<"\n\tDesea modificar otra nota: "<<endl;
                                             cout<<"\n\t1.Corte 1";
                                             cout<<"\n\t2.Corte 2";
                                             cout<<"\n\t3.Corte 3";
                                             cout<<"\n\t4.Terminar modificacion de notas";
                                             cout<<"\n\t-->";
                                                   }
                                             
                                             fflush(stdin);
                                             cin.clear();
                                             cin>>opc2;
                                             
                                  switch(opc2){//switch de las notas
                                                 system("cls");         
                                             case 1:
                                                  cout<<"\n\tEl alumno "<<alumnos[k].nombre<<" "<<alumnos[k].apellido;
                                                  cout<<"\n\n\tEn el Corte 1: ";
                                                  cout<<"\n\tNota Actual: "<<alumnos[k].dir_Notas_Corte_1.Nota_Unica;
                                                  
                                                          ingreso1=false;
                                                       cout<<"\n\tValor nuevo de la nota unica: ";
                                                        Verificar_Notas_15(&alumnos[k].dir_Notas_Corte_1.Nota_Unica, &ingreso1);
                                                       
                                                  
                                             break;
                                             case 2:
                                                  
                                                  cout<<"\n\tEl alumno "<<alumnos[k].nombre<<" "<<alumnos[k].apellido;
                                                  cout<<"\n\tEn el Corte 2: ";
                                                  cout<<"\n\t1.Nota uno: "<<alumnos[k].dir_Notas_Corte_2.Nota[0];
                                                  cout<<"\n\t2.Nota dos: "<<alumnos[k].dir_Notas_Corte_2.Nota[1];
                                                  cout<<"\n\t3.Ambas notas";
                                                  cout<<"\n\n\tCual nota desea modificar: ";
                                                  cout<<"\n\t-->";
                                                  cin>>opc3;
                                            switch(opc3){
                                                         system("cls");
                                                         
                                                         
        
                                                  case 1:
                                                       
                                                       cout<<"\n\tValor nuevo de la nota 1: ";
                                                        Verificar_Notas_Todas(&alumnos[k].dir_Notas_Corte_2.Nota[0], &ingreso1);
                                                       
                                                  break;
                                                  
                                                  case 2:
                                                        
                                                       cout<<"\n\tValor nuevo de la nota 2: ";
                                                        Verificar_Notas_Todas(&alumnos[k].dir_Notas_Corte_2.Nota[1], &ingreso1);
                                                       
                                                  break;
                                                  case 3:
                                                       
                                                       cout<<"\n\tValor nuevo de la nota 1: ";
                                                        Verificar_Notas_Todas(&alumnos[k].dir_Notas_Corte_2.Nota[0], &ingreso1);
                                                       
                                                       cout<<"\n\tValor nuevo de la nota 2: ";
                                                        Verificar_Notas_Todas(&alumnos[k].dir_Notas_Corte_2.Nota[1], &ingreso1);
                                                       
                                                  break;
                                                               
                                            }//fin del switch
                                             break;
                                             
                                             
                                             
                                             case 3:
                                                  
                                                  cout<<"\n\tEl alumno "<<alumnos[k].nombre<<" "<<alumnos[k].apellido;
                                                  cout<<"\n\tEn el Corte 3: ";
                                                  cout<<"\n\t1.Nota uno: "<<alumnos[k].dir_Notas_Corte_3.Nota[0];
                                                  cout<<"\n\t2.Nota dos: "<<alumnos[k].dir_Notas_Corte_3.Nota[1];
                                                  cout<<"\n\t3.Nota tres: "<<alumnos[k].dir_Notas_Corte_3.Nota[2];
                                                  cout<<"\n\t4.todas las notas";
                                                  cout<<"\n\n\tCual nota desea modificar: ";
                                                  cout<<"\n\t-->";
                                                  fflush(stdin);
                                                  cin.clear();
                                                  cin>>opc3;
                                                  switch(opc3){
                                                               
                                                       case 1:
                                                                    
                                                       cout<<"\n\tValor nuevo de la nota 1: ";
                                                        Verificar_Notas_15(&alumnos[k].dir_Notas_Corte_3.Nota[0],&ingreso1);
                                                       
                                                               break;
                                                       case 2:
                                                                   ;
                                                       cout<<"\n\tValor nuevo de la nota 2: ";
                                                        Verificar_Notas_15(&alumnos[k].dir_Notas_Corte_3.Nota[1],&ingreso1);
                                                       
                                                               break;
                                                               
                                                       case 3:
                                                                    
                                                       cout<<"\n\tValor nuevo de la nota 3: ";
                                                        Verificar_Notas_15(&alumnos[k].dir_Notas_Corte_3.Nota[2],&ingreso1);
                                                        break;
                                                        
                                                        case 4:
                                                                    cout<<"\n\tValor nuevo de la nota 1: ";
                                                        Verificar_Notas_15(&alumnos[k].dir_Notas_Corte_3.Nota[0],&ingreso1);
                                                        
                                                        cout<<"\n\tValor nuevo de la nota 2: ";
                                                        Verificar_Notas_15(&alumnos[k].dir_Notas_Corte_3.Nota[1],&ingreso1);
                                                        
                                                        cout<<"\n\tValor nuevo de la nota 3: ";
                                                        Verificar_Notas_15(&alumnos[k].dir_Notas_Corte_3.Nota[2],&ingreso1);
                                                        
                                                               break;
                                                               
                                                        default:;
                                                               break;
                                                               
                                                               
                                                               }//fin del switch
                                                               
                                             break;//fin del case 3
                                             case 4:
                                                  ingreso3=true;
                                             break;
                                      
                                                          
                                   }// finalizacion del switch de las notas
                                
                                }while(ingreso3==false); 
                                        break;
                                        case 5:
                                             ingreso2=true;;
                                        break;
                                        default:;
                                        break;
                                        
                                                   
                                                    
                                                    }//fin del switch
                                        
                     }while(ingreso2==false);   //fin del do while        
                                       
                                        }//fin del if del case 2
                                        if(opc==tamanio){
                                        cout<<"\n\tUsted a decidido salir de aqui";
                                        ingreso1=true; 
                                        break;   
                                        }
                                              
                                     
                                     }//fin del for
                          
						  
						  //APARTAR
				
				
				 for(int k=0;k<tamanio;k++){
                              
  				Promedio(alumnos[k].dir_Notas_Corte_1.Nota_Unica , alumnos[k].dir_Notas_Corte_2.Nota[0] ,
  alumnos[k].dir_Notas_Corte_2.Nota[1] , alumnos[k].dir_Notas_Corte_3.Nota[0] , 
  alumnos[k].dir_Notas_Corte_3.Nota[1] , alumnos[k].dir_Notas_Corte_3.Nota[2],cantidad_notas,&alumnos[k].promedio );
	
	}//FIN DEL FOR DE PROMEDIO
  
  
  //APARTTAR            
                             
                }while(ingreso1==false);//fin del caso 2
                break;
                
                
                case 3:
                	do{
                		system("cls");
					ingreso1=false;
                	suma=0;
                	promedio=0;
                     cout<<"\n\tVerificar Promedio";
                     cout<<"\n\t1.Un estudiante en espec"<<char(161)<<"fico";
                     cout<<"\n\t2.Todos los estudiantes";
                     cout<<"\n\t3.Salir de esta opcion";
                     cout<<"\n\t-->";
                     fflush(stdin);
                     cin.clear();
                     cin>>opc;
                     system("cls");
                     switch(opc){
                                 
                               
                                 case 1:
                                      
                                 for(int i=0;i<tamanio;i++){//inicio del for
                             cout<<"\t"<<i+1<<"."<<alumnos[i].nombre<<" "<<alumnos[i].apellido<<endl;
                             
                             }
                             cout<<"\t"<<tamanio+1<<".Regresar al men"<<char(163);
                             cout<<"\n\t-->";
                             fflush(stdin);
                             cin.clear();
                             cin>>opc1;
                             opc1-=1;
                             
                             for(int k=0;k<tamanio;k++){
                                     if(opc1==alumnos[k].comparacion){
                                                                      
                                            cout<<"\n\tUsted a seleccionado a "<<alumnos[k].nombre<<" "<<alumnos[k].apellido<<endl;
                                           cout<<"\n\tSus notas son: "<<endl;
                                           cout<<"\n\tCorte 1:";
                                           cout<<"\n\t\tNota Unica: ";
                                           cout<<alumnos[k].dir_Notas_Corte_1.Nota_Unica;
                                           cout<<"\n\n\tCorte 2:";
                                           cout<<"\n\t\tNota 1: ";
                                           cout<<alumnos[k].dir_Notas_Corte_2.Nota[0];
                                           cout<<"\n\t\tNota 2: ";
                                           cout<<alumnos[k].dir_Notas_Corte_2.Nota[1];
                                           cout<<"\n\n\tCorte 3:";
                                           cout<<"\n\t\tNota 1: ";
                                           cout<<alumnos[k].dir_Notas_Corte_3.Nota[0];
                                           cout<<"\n\t\tNota 2: ";
                                           cout<<alumnos[k].dir_Notas_Corte_3.Nota[1];
                                           cout<<"\n\t\tNota 3: ";
                                           cout<<alumnos[k].dir_Notas_Corte_3.Nota[2];
                                           
                                           alumnos[k].promedio;
                                           
                                        
                                            system("pause");                        
                                }// fin del condicional
                                
								
								 if(opc1==tamanio){
                                        cout<<"\n\tUsted a decidido salir de aqui";
                                        ingreso1=true; 
                                        break;   
                                        }
                             }//fin del for
                                 
                                 break;
                                 case 2:
                                 
                                 for(int k=0;k<tamanio;k++){
                                     
                                                                      
                                            cout<<"\n\n\t"<<alumnos[k].nombre<<" "<<alumnos[k].apellido<<endl;
                                           cout<<"\n\tSus notas son: "<<endl;
                                           cout<<"\n\tCorte 1:";
                                           cout<<"\n\t\tNota Unica: ";
                                           cout<<alumnos[k].dir_Notas_Corte_1.Nota_Unica;
                                           cout<<"\n\n\tCorte 2:";
                                           cout<<"\n\t\tNota 1: ";
                                           cout<<alumnos[k].dir_Notas_Corte_2.Nota[0];
                                           cout<<"\n\t\tNota 2: ";
                                           cout<<alumnos[k].dir_Notas_Corte_2.Nota[1];
                                           cout<<"\n\n\tCorte 3:";
                                           cout<<"\n\t\tNota 1: ";
                                           cout<<alumnos[k].dir_Notas_Corte_3.Nota[0];
                                           cout<<"\n\t\tNota 2: ";
                                           cout<<alumnos[k].dir_Notas_Corte_3.Nota[1];
                                           cout<<"\n\t\tNota 3: ";
                                           cout<<alumnos[k].dir_Notas_Corte_3.Nota[2]<<endl;
                                           
 										cout<<"\n\tEl promedio es: "<<alumnos[k].promedio;
                                 cout<<"\n\t----------------------\n\n";
                            
							 }//fin del for
                             
                             system(" pause >nul ");
                                 break;
                                 
                                 case 3:
                                 	ingreso1=true;
                                 break;
                                 
                                 default:;
                                 break;
                                 
                                 }//fin del switch
                                 
                                 
                                 
                                 }while(ingreso1==false);
                     
                break;
                
                
                
                case 4:
                	
                	do{
                		
					system("cls");
					ingreso1=false;
                     cout<<"\n\n\t1.Verificar el promedio en general";
                     cout<<"\n\t2.Salir de esta opcion";
                     cout<<"\n\t-->";
                     fflush(stdin);
                     cin.clear();
                     cin>>opc;
                     switch(opc){
					 
					 case 1:
					 	suma=0;
					 	for(int a=0;a<tamanio;a++){
					 		
					 		cout<<"\n\t"<<alumnos[a].nombre<<" "<<alumnos[a].apellido<<endl;
					 		cout<<"\n\t\tNota final: "<<alumnos[a].promedio<<endl;
						 }//fin del for
					 	
					 	for(int b=0;b<tamanio;b++){
					 		
					 		suma+=alumnos[b].promedio;
					 		
						 }//fin del for
						 promedio_general=suma/tamanio;
						 cout<<"\n\n\tEl promedio general de todos los estudiantes son: "<<promedio_general;
					 	
						 
					 	system("pause>nul");
						 break;
					 	
					 	
					 	case 2:
						 ingreso1=true;
					 	break;
					 	
                 }//fin del switch
                     
                     }while(ingreso1==false);
                     
                break;
                
                
                
                case 5:
                	
                	do{
                		system("cls");
                		Notas_cortes1[tamanio];
                		ingreso1=false;
					
                     cout<<"\n\tDe cual corte deseas conocer la moda"<<endl;
                     cout<<"\n\t1.Corte 1";
                      cout<<"\n\t2.Corte 2";
                       cout<<"\n\t3.Corte 3";
                        cout<<"\n\t4.Salir de esta opcion";
                        cout<<"-->";
                     	fflush(stdin);
                     	cin.clear();
                     	cin>>opc;
                     	system("cls");
                     	switch(opc){
                     		
                     		case 1://CASO 1
                     		
                     			 Notas_cortes1[tamanio];
                     			for(int i=0;i<tamanio;i++){
                     	
                     	Notas_cortes1[i]=alumnos[i].dir_Notas_Corte_1.Nota_Unica;
                     	
					 }//fin del for
					 cout<<"\n\tnotas del primer corte:\n\n";
					 for(int i=0;i<tamanio;i++){
                     	
                     			cout<<"\n"<<alumnos[i].nombre<<"\n\tNota unica: "<<Notas_cortes1[i]<<endl;
						
                
					 }//fin del for
					 cout<<"\n\tTotal de notas: "<<tamanio;
					 
					 for (int i=0;i<tamanio;i++){//con este for inicializamos todos los valores a 0
					  	
					  	frecuencias[i][0]=0;
					  	frecuencias[i][1]=0;
					  }			//fin del for
					 
					 
					 cout<<endl;
					 
					  
					  for(int i=0;i<tamanio;i++){//con este for determinamos cuantas veces se repite un numero
					  	for(j=0;j<numero_diferente;j++){
					  		if(frecuencias[j][0]==Notas_cortes1[i]){
					  			existe=true;// si la validamos  podemos incrementar las frecuencias
					  			break;
							  }
						  }//fin del for de j
						  if(existe){
						  	frecuencias[j][1]++;
						  	existe=false;
						  }else{
						  	frecuencias[j][0]=Notas_cortes1[i];
						  	frecuencias[j][1]++;
						  	numero_diferente++;
						  }//fin de else
					  }//fin del for externo
					  		  
					 for(int i=0;i<tamanio;i++){//Este for es solo para comprobar que funciona
					  	cout<<"\nEste numero--> "<<frecuencias[i][0]
					  		<<"  Se repite--> "<<frecuencias[i][1];
					  }//fin del for
					 cout<<endl;
					 system("pause");
					 
					 for(int i=0;i<tamanio;i++){//con este for determinamos la frecuencia mayor
					 	if(frecuencias[i][1]>fre_modal_mayor){
					 		fre_modal_mayor=frecuencias[i][1];
						 }//fin del condicional
					 }//fin del for
					 
					/* cout<<"\n\n\tUn numero se repite--> "<<fre_modal_mayor//Este mensaje es opcional
					 	<<" veces, esta es la mayor frecuencia \n\n";*/
                     
                     for(int i=0;i<numero_diferente;i++){
                     	if(frecuencias[i][1]==fre_modal_mayor){
                     		if(contador<=0){
                     			contador++;
                     			cout<<"\n\tla moda es: "<<frecuencias[i][0]<<" Se repite "<<frecuencias[i][1];
							 }else{
							 	contador++;
							 	cout<<"\n\tOtra moda es "<<frecuencias[i][0]<<" Se repite "<<frecuencias[i][1];
							 }//condicional else
						 }
					 }//fin del for
					 
					 switch(contador){
					 	case 1:
					 		cout<<" \n\tSolamente hay un moda "<<endl;
					 	break;
					 	case 2:
					 		cout<<" \n\tAl haber 2 modas se le llama bimodal "<<endl;
					 	break;
					 	default:
					 		cout<<" \n\tAl haber mas de 2 modas se le llama multimodal "<<endl;
					 		break;
					 }
                     system("pause");
					 
                     		break;
                     		
                     		
                     		
                     		
                     		case 2://CASO 2
                     			Notas_cortes2[tamanio*2];
                     			for(int i=0;i<tamanio*2;i++){
                                      if(k==2){
                                               k=0;
                                               j++;
                                               
                                               }
                     						Notas_cortes2[i]=alumnos[j].dir_Notas_Corte_2.Nota[k];
                     						k++;
					 }//fin del for
					 
					 for(int i=0;i<tamanio*2;i++){
					 	cout<<" "<<Notas_cortes2[i];
					 }
					 
					 system("pause");
					
                     		break;
                     		
                     		
                     		
                     		
                     		case 3:;
                     		break;
                     		
                     		
                     		
                     		
                     		case 4:
                     			ingreso1=true;
                     		break;
                     		
                     		
                     		
                     		default:;
                     		break;
						 }
                     }while(ingreso1==false);
                     
                     
                     
               break;
               
               
               
               
               
                case 6:
				
                	
                    
                     for(int i=0;i<tamanio;i++){
                     	
                     	notas_definitivas[i]=alumnos[i].promedio;
                     	
					 }//fin del for
					 
					 for(int i=0;i<tamanio;i++){
                     	
                     	cout<<"\n\tAlumno "<<alumnos[i].nombre<<endl;
                     	cout<<"\tNota definitiva: "<<notas_definitivas[i]<<endl<<endl;
                     	
					 }//fin del for
					 
					 cout<<"\n\ttotal de notas definitivas: "<<tamanio<<endl;
					 	
					  //menor(&tamanio,notas_definitivas);//Para verificar el orden solamente
					
					  
					  for (int i=0;i<tamanio;i++){//con este for inicializamos todos los valores a 0
					  	
					  	frecuencias[i][0]=0;
					  	frecuencias[i][1]=0;
					  }			//fin del for
					  
					 /* for(int i=0;i<tamanio;i++){//Este for es solo para comprobar que funciona
					  	cout<<"\nEste numero--> "<<frecuencias[i][0]
					  		<<"  Se repite--> "<<frecuencias[i][1];
					  }//fin del for*/
					  cout<<endl;
					 
					  
					  for(int i=0;i<tamanio;i++){//con este for determinamos cuantas veces se repite un numero
					  	for(j=0;j<numero_diferente;j++){
					  		if(frecuencias[j][0]==notas_definitivas[i]){
					  			existe=true;// si la validamos  podemos incrementar las frecuencias
					  			break;
							  }
						  }//fin del for de j
						  if(existe){
						  	frecuencias[j][1]++;
						  	existe=false;
						  }else{
						  	frecuencias[j][0]=notas_definitivas[i];
						  	frecuencias[j][1]++;
						  	numero_diferente++;
						  }//fin de else
					  }//fin del for externo
					  		  
					 for(int i=0;i<tamanio;i++){//Este for es solo para comprobar que funciona
					  	cout<<"\nEste numero--> "<<frecuencias[i][0]
					  		<<"  Se repite--> "<<frecuencias[i][1];
					  }//fin del for
					 cout<<endl;
					 system("pause");
					 
					 for(int i=0;i<tamanio;i++){//con este for determinamos la frecuencia mayor
					 	if(frecuencias[i][1]>fre_modal_mayor){
					 		fre_modal_mayor=frecuencias[i][1];
						 }//fin del condicional
					 }//fin del for
					 
					/* cout<<"\n\n\tUn numero se repite--> "<<fre_modal_mayor//Este mensaje es opcional
					 	<<" veces, esta es la mayor frecuencia \n\n";*/
                     
                     for(int i=0;i<numero_diferente;i++){
                     	if(frecuencias[i][1]==fre_modal_mayor){
                     		if(contador<=0){
                     			contador++;
                     			cout<<"\n\tla moda es: "<<frecuencias[i][0]<<" Se repite "<<frecuencias[i][1];
							 }else{
							 	contador++;
							 	cout<<"\n\tOtra moda es "<<frecuencias[i][0]<<" Se repite "<<frecuencias[i][1];
							 }//condicional else
						 }
					 }//fin del for
					 
					 switch(contador){
					 	case 1:
					 		cout<<" \n\tSolamente hay un moda "<<endl;
					 	break;
					 	case 2:
					 		cout<<" \n\tAl haber 2 modas se le llama bimodal "<<endl;
					 	break;
					 	default:
					 		cout<<" \n\tAl haber mas de 2 modas se le llama multimodal "<<endl;
					 		break;
					 }
                     system("pause");
                
                break;
                
                
                
                case 0:
                     cout<<"\n\tUsted a decidido salir del programa.";
                     Sleep(1000);
                     return EXIT_SUCCESS;
                break;             
                }//fin del switch externo
                
                
                
            }while(ingreso==false);//fin del do while
                        
}//fin del main


void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X= x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
      
void Defecto_Normal(){
           int longitud;
           char mensaje2[]="Usted a ingresado un dato incorrecto";
                          longitud=strlen(mensaje2);
                    for(int i=0;i<longitud;i++){
                    cout<<mensaje2[i];
                    Sleep(50);
                    }//fin del for
                    Sleep(1000);
           }
           
void Verificar_Notas_15(float *calificacion, bool *ptr){
     
     
     do{
             *ptr=false;
             fflush(stdin);
             cin.clear();
            cin>>*calificacion;
      if(*calificacion>=0 && *calificacion<21){
                             *ptr=true;
      }else{
          cout<<"\n\tverifique la nota";
          Sleep(1000);
          cout<<"\n\t-->";
          }//fin del condicional
          }while(*ptr==false);
          }
void Verificar_Notas_Todas(float *calificacion, bool *ptr){
          
          do{
             *ptr=false;
             fflush(stdin);
             cin.clear();
            cin>>*calificacion;
             
           if(*calificacion>=0 && *calificacion<21){
                             *ptr=true;
           }else{
          cout<<"\n\tVerifique la nota";
          Sleep(1000);
          cout<<"\n\t-->";
          }//fin del condicional
          }while(*ptr==false);
     
     }
     void Promedio(float nota1,float nota2, float nota3,float nota4,float nota5,float nota6,int tamanio,float *relax ){
     	
		 float promedio;
     	float suma;
     	suma=nota1+ nota2+ nota3+ nota4+ nota5+ nota6;
     	promedio=suma/tamanio;
     	*relax=promedio;
	 }//fin de la funcion promedio
	
	
	
	
		
					 	
void menor(int *T,float n[]){
					
	float ordenacion_menor[*T];
		float aux=0;			 
		 for(int i=0;i<*T;i++){
                     
            ordenacion_menor[i]=n[i];
                     	
		}//fin del for
					 //ingresa datos para ordenarlos
					 
		for(int j=0;j<*T-1;j++){//ESTE FOR ES PARA ORDENAR DE MENOR A MAYOR
			if(ordenacion_menor[j]>ordenacion_menor[j+1]){
			aux=ordenacion_menor[j+1];
				ordenacion_menor[j+1]=ordenacion_menor[j];
				ordenacion_menor[j]=aux;
			}//condicional
		}//ultimo for
					 
			cout<<"\n\n\tOrdenado de menor a mayor es: ";
			for( int a=0;a<*T;a++){
                     	
               	cout<<" "<<ordenacion_menor[a];
                     	
			}//fin del for
				cout<<endl;
} /*AQUI TERMINA LA ORDENACION DE MENOR A MAYOR*/ 
					
	 
	 
	 
