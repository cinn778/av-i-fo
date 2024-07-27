
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

void Inicio() {
    cout << "\n\n Estas perdido en un bosque misterioso. Hay dos caminos frente a ti.\n";
    cout << "\n\n1. Tomar el camino de la derecha.\n";
    cout << "\n\n2. Tomar el camino de la izquierda.\n";
}

void caminoDerecha() {
    cout << "\n\n Te encuentras con un rio. Puedes:\n";
    cout << "\n\n1. Intentar cruzar el rio.\n";
    cout << "\n\n2. Buscar un puente.\n";
}

void cruzarRio() {
    cout << "\n\ Estas nadando cuando de repente ves una figura casi en el fondo. Puedes:\n";
    cout << "\n\n1. Seguir nadando al otro lado.\n";
    cout << "\n\n2. Ir a ver.\n";
}

void seguirNad() {
    cout << "\n\n Llegas al otro lado del rio y encuentras una casa. Puedes:\n";
    cout << "\n\n1. Ingresar a la casa.\n";
    cout << "\n\n2. Rodearla.\n";
}

void muerte1() {
    cout << "\n\nMORISTE :(\n";
    cout << "\n\nIngresaste a la casa donde se encontraba un hombre que al verte se asusto y te disparo.\n";
}

void puente() {
    cout << "\n\nCuando encontraste el puente estaba todo roto. Puedes:\n";
    cout << "\n\n1. Intentar pasar igual.\n";
    cout << "\n\n2. Resignarse a cruzar el rio.\n";
}

void puente2() {
    cout << "\n\nCuando por fin logras llegar al otro lado te das cuenta que quedaste muy lejos de donde estabas. Puedes:\n";
    cout << "\n\n1. Ir hacia donde estabas.\n";
    cout << "\n\n2. Ir hacia el otro lado.\n";
}

void cuevaMar() {
    cout << "\n\nAl llegar te das cuenta que era la sombra de una cueva. Puedes:\n";
    cout << "\n\n1. Ingresar.\n";
    cout << "\n\n2. Seguir nadando.\n";
}

void muerte2() {
    cout << "\n\nMORISTE :(\n";
    cout << "\n\nNo podías respirar en la cueva y moriste ahogado.\n";
}

void rodeo() {
    cout << "\n\nEliges rodear la casa, en el fondo de esta te encuentras un tacho de agua. Puedes:\n";
    cout << "\n\n1. Tomar del agua.\n";
    cout << "\n\n2. Ignorar y seguir caminando.\n";
}

void muerte3() {
    cout << "\n\nMORISTE :(\n";
    cout << "\n\nNo sabemos qué tenia realmente ese liquido pero bebible no era.\n";
}

void seguirCam() {
    cout << "\n\nGANASTE!!! :)\n";
    cout << "\n\nDespues de aproximadamente dos horas de seguir caminando por fin puedes ver la luz de la ciudad y ya puedes aliviarte porque termina el bosque.\n";
}

void caminoIzquierda() {
    cout << "\n\nTe encuentras con una cueva. Puedes:\n";
    cout << "\n\n1. Entrar en la cueva.\n";
    cout << "\n\n2. Rodear la cueva.\n";
}

void cueva() {
    cout << "\n\nAl ingresar a la cueva ves que hay un oso dormido pero del otro lado de la cueva se ve luz. Puedes:\n";
    cout << "\n\n1. Salir de la cueva.\n";
    cout << "\n\n2. Caminar despacio cerca del oso para llegar al otro lado.\n";
}

void oso() {
    cout << "\n\nTratas de caminar lo más despacio posible tratando de no despertarlo. Al llegar al otro lado te das cuenta que la luz solo era el reflejo del sol en unas piedras.\n";
    cout << "\n\n1. Salir de la cueva.\n";
}

void muerte4() {
    cout << "\n\nMORISTE :(\n";
    cout << "\n\nEl oso no te escucho entrar pero definitivamente te escucho salir.\n";
}

void montana() {
    cout << "\n\nUna vez que rodeas la cueva llegas a la cima de una pequeña montaña y a lo lejos puedes ver una casa justo despues de un rio. Puedes:\n";
    cout << "\n\n1. Caminar hacia el rio.\n";
    cout << "\n\n2. Elegir otro camino.\n";
}

void agua() {
    cout << "\n\n'Tal vez elegir otro camino fue mala idea' piensas despues de caminar dos horas bajo el rayo del sol cuando de repente ves un barril de agua. Puedes:\n";
    cout << "\n\n1. Tomar del barril.\n";
    cout << "\n\n2. Ignorarlo y seguir caminando.\n";
}

void cas2() {
    cout << "\n\nTe encuentras con una casa muy linda entre tantos arboles. Puedes:\n";
    cout << "\n\n1. Rodear la casa.\n";
    cout << "\n\n2. Entrar a la casa.\n";
}

void entrarCas() {
    cout << "\n\nGANASTE!!!  :)\n";
    cout << "\n\nDentro de la casa se encontraba una buena pareja que te ayuda a salir del bosque.\n";
}

void muerte() {
    cout << "\n\nMORISTE :(\n";
    cout << "\n\nRodear la casa no fue buena idea cuando la pasaste se sintio un olor a comida casera, lamentablemente te terminas perdiendo más en el bosque y tienes que intentar pasar la noche en lo cual fallas.\n";
}

int main() {
	setlocale(LC_ALL, "spanish"); 
system( "Title Aventura en el bosque." );
system("Color 7d");

    int eleccion;
    int opcion;
    bool repetir = true;

    do {
        system("cls");
        
        cout << "\n\n -------¡Bienvenido a nuestra aventura!-------\n";
        cout << "\n\n En esta nueva aventura nuestro personaje se ha perdido en un bosque y necesita que lo ayudes a salir de el. Te animas? \n";
        cout << "\n\n --------------------------------------------------------------------------------------------" << endl;
        cout << "\n\n1. Empezar nueva partida" << endl;
        cout << "\n\n0. SALIR" << endl;

        cout << "\n\nIngrese una opcion: ";
        cin >> opcion;
system("cls");
        switch (opcion) {
            case 1:
                Inicio();
                cout << "\n\nIngrese una opcion: ";
                cin >> eleccion;
system("cls");
                if (eleccion == 1) {
                    caminoDerecha();
                    cout << "\n\nIngrese una opcion: ";
                    cin >> eleccion;
system("cls");
                    if (eleccion == 1) {
                        cruzarRio();
                        cout << "\n\nIngrese una opcion: ";
                        cin >> eleccion;
system("cls");
                        if (eleccion == 1) {
                            seguirNad();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");
                            if (eleccion == 1) {
                                muerte1();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
                                
                            } else if (eleccion == 2) {
                                rodeo();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte3();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                    
                                } else if (eleccion == 2) {
                                    seguirCam();
                                }
                            }
                        } else if (eleccion == 2) {
                            cuevaMar();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");

                            if (eleccion == 1) {
                                muerte2();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
                            
                            } else if (eleccion == 2) {
                               seguirNad();
                               cout<<"\n\nIngrese una opcion: ";
                               cin>> eleccion;
                               system("cls");
                               if (eleccion == 1) {
                                muerte1();
                                
                            } else if (eleccion == 2) {
                                rodeo();
                                cout << "\n\nIngrese una opcion: ";
                                
                                cin >> eleccion;
                                system("cls");

                                if (eleccion == 1) {
                                    muerte3();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                    
                                } else if (eleccion == 2) {
                                    seguirCam();
                                }
                            }
                            }
                        }
                    } else if (eleccion == 2) {
                        puente();
                        cout << "\n\nIngrese una opcion: ";
                        cin >> eleccion;
system("cls");
                        if (eleccion == 1) {
                            puente2();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");
                            if (eleccion == 1) {
                                seguirNad();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte1();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                } else if (eleccion == 2) {
                                    rodeo();
                                    cout << "\n\nIngrese una opcion: ";
                                    cin >> eleccion;
system("cls");
                                    if (eleccion == 1) {
                                        muerte3();
                                        cout<< "\n\nPresione cualquier letra para volver a empezar";
                                    } else if (eleccion == 2) {
                                        seguirCam();
                                    }
                                }
                            } else if (eleccion == 2) {
                                agua();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte3();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                } else if (eleccion == 2) {
                                    cas2();
                                    cout << "\n\nIngrese una opcion: ";
                                    cin >> eleccion;
system("cls");
                                    if (eleccion == 1) {
                                        muerte();
                                        cout<< "\n\nPresione cualquier letra para volver a empezar";
                                    } else if (eleccion == 2) {
                                        entrarCas();
                                    }
                                }
                            }
                        }
                        else if (eleccion == 2){
                        	cruzarRio();
                        	cout << "\n\nIngrese una opcion: ";
                        cin >> eleccion;
system("cls");
                        if (eleccion == 1) {
                            seguirNad();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");
                            if (eleccion == 1) {
                                muerte1();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
                            } else if (eleccion == 2) {
                                rodeo();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte3();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                } else if (eleccion == 2) {
                                    seguirCam();
                                }
                            }
                        } else if (eleccion == 2) {
                            cuevaMar();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");
                            if (eleccion == 1) {
                                muerte2();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
                            } else if (eleccion == 2) {
                               seguirNad();
                               cout<<"\n\nIngrese una opcion: ";
                               cin>> eleccion;
                               system("cls");
                               if (eleccion == 1) {
                                muerte1();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
                            } else if (eleccion == 2) {
                                rodeo();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte3();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                } else if (eleccion == 2) {
                                    seguirCam();
                                }
                            }
                            }
                        }
						}
                    }
                } else if (eleccion == 2) {
                    caminoIzquierda();
                    cout << "\n\nIngrese una opcion: ";
                    cin >> eleccion;
system("cls");
                    if (eleccion == 1) {
                        cueva();
                        cout << "\n\nIngrese una opcion: ";
                        cin >> eleccion;
system("cls");
                        if (eleccion == 1) {
                            montana();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");
                            if (eleccion == 1) {
                                seguirNad();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte1();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                } else if (eleccion == 2) {
                                    rodeo();
                                    cout << "\n\nIngrese una opcion: ";
                                    cin >> eleccion;
system("cls");
                                    if (eleccion == 1) {
                                        muerte3();
                                    } else if (eleccion == 2) {
                                        seguirCam();
                                    }
                                }
                            } else if (eleccion == 2) {
                                agua();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte3();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                } else if (eleccion == 2) {
                                    entrarCas();
                                }
                            }
                        } else if (eleccion == 2) {
                            oso();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");
                            if (eleccion == 1) {
                                muerte4();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
                            }
                        }
                    } else if (eleccion == 2) {
                        montana();
                        cout << "\n\nIngrese una opcion: ";
                        cin >> eleccion;
system("cls");
                        if (eleccion == 1) {
                            seguirNad();
                            cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
system("cls");
                            if (eleccion == 1) {
                                muerte1();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
                            } else if (eleccion == 2) {
                                rodeo();
                                cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
system("cls");
                                if (eleccion == 1) {
                                    muerte3();
                                    cout<< "\n\nPresione cualquier letra para volver a empezar";
                                } else if (eleccion == 2) {
                                    seguirCam();
                                }
                            }
                        }else if (eleccion == 2){
                        	agua();
                        	cout << "\n\nIngrese una opcion: ";
                            cin >> eleccion;
                            system("cls");
                            if (eleccion == 1){
                            	muerte3();
                                cout<< "\n\nPresione cualquier letra para volver a empezar";
							}
							else if(eleccion == 2){
								cas2();
								cout << "\n\nIngrese una opcion: ";
                                cin >> eleccion;
                                system("cls");
								if (eleccion == 1){
									muerte();
									cout<< "\n\nPresione cualquier letra para volver a empezar";
								}
								else if (eleccion == 2){
									entrarCas();
								}
								 else {
                    cout << "Opción no válida.\n";
                }

							}
						}
                    }
                } else {
                    cout << "Opción no válida.\n";
                }

                system("pause>nul");
                break;
            case 0:
                cout << "\n\nTerminando el juego.";
                repetir = false;
                system("cls");
                break;
            default:
                cout << "Opción no válida. Intente nuevamente.\n";
                system("pause>nul");
                break;
        }
    } while (repetir);

    return 0;
}

