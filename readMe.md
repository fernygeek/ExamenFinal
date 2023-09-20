/*  Copyright (C) 2K23, patmic_trainer
 *  pat_mic@hotmail.com
 *  Version 2.0
 */

## POLIRETOS:

Es hora de saber hasta donde puedes llegar, para lo cual debes cumplir con:

- Al iniciar el programa se debe presentar su nombre.apellido y numero de c�dula
- Si su último digito de la c�dula es par   => Crear procedimientos para cada serie
- Si su �ltimo digito de la c�dula es impar => Crear funciones para cada serie  
- Solicitar el numero de t�rminos/niveles/palabra a generar y pasarlo como par�metro
- El nombre de cada procedimiento/funcion debe ser su apellidoSerie##


>> Series numericas:

	S1:  0 1 1 2 3 5 8 13 ...      
	
    S2:  1 0 3 0 5 0 7 0 9 ...
	
    S3:  0/1  1/3  1/5  2/7  3/9   5/11  8/13  13/15 ...
	
    S4:  0/2  1/4  1/6  2/8  3/10  5/12  8/14  13/16 ...
	
    S5:  2	 3	 5 	 7	 11	 13	 17	 19	 23	 29	 31	...
	
	S6:  1  4   9   16  25  36  49  64 ....

    S7:  1  4  7  10  13  16  19  22  25  ...
	
    S8:  3, 8, 13, 18, 23, 28, 33, 38, ...
	
    S9:  2, 4, 8, 16, 32, 64, 128, 256, ...
	
    S10: 3, 9, 27, 81, 243, 729, 2187, ...

    S12: 2  6   12  20  36  42  56  72  ...


>> Series de caracteres: 

   	S1:  + - + - + - + ...      

    S2:  + + ++ +++ +++++ ++++++++ +++++++++++++ ...

    S3:  ++	 +++ +++++ +++++++ +++++++++++ +++++++++++++ ...

	S4:  +  -  *  /  +  -  *  / +  -  *  /  ...

    S5:  \  |  /    -   |   \  |  /    -   |    \  |  /    -   |  ....

    S6:  a  b   c   d   e   f   g   h   ...

    S6:  a  +   c   -   e   +   g   -   ...

    S7:  aa   bbbb  cccccc  dddddddd    ...

    S8:  a  bbb  ccccc  ddddddd eeeeeeeee...

    S9:  a  b  c  dd  eee  fffff  gggggggg ...    


>> Figuras: se debe pedir niveles

    F1:     * * * * *
            *       *
            *       *  
            *       *
            * * * * *

    F2:     * + * + *
            +       +
            *       *   
            +       +
            * + * + *

    F3:     *            
            * *          
            * * *        
            * * * *       
            * * * * *    

    F4:             *  
                  * *       
                * * *       
              * * * *     
            * * * * *
    
	F5:	
		 *********
		  *******
		   *****
		    ***
		     *

	F6:
		     *
		    ***
		   *****
		  *******
		 *********
		 ...

	F7: 
            ___
                |___
                    |___
                        |___
                            |___
    
    F8:
                            ___
                        ___|
                    ___|
                ___|
            ___|

	F9:
                            ___   
                        ___|   |___
                    ___|	   	|___
                ___|		   		|___
            ___|			   			|___

	F10:
            _+_
                |_-_
                    |_+_
                        |_-_
                            |_+_
                                |

    F11:
            | _ 
               | _ _
                    | _ _ _
                           | _ _ _ _
                                    | _ _ _ _ _
                   
	F12:
            ...
            123456789
            12345678
            1234567
            123456
            12345
            1234
            123
            12
            1

	F13:
            1
            12
            123
            1234
            12345
            123456
            1234567
            12345678
            123456789
            ...

    F14:
                        1
                      1    1
                    1    2    1
                  1    3    3    1
               1    4    6    4    1
             1   5   10    10    5   1
            ....

	F15: 
            1
            1	1
            1	2	1
            1   3   3    1
            1   4   6    4    1
            1   5   10   10   5   1
            ....
    
    F16:
            +				+
                -		-
                    +
                -		-
            +				+
            ....

    F17:
            1				1
                0		0
                    1
                0		0
            1				1
            ....

    F18:
            2
            1   2
            1   3   2
            1   4   5   2
            1   5   9   7  2
            1   6   14  16  9  2
            ....
        
    F19:
            *
            +   *
            +   3   *
            +   4   5   *
            +   5   9   7  *
            +   6   14  16  9  *
            ....


>> Cadena de caracteres:

	C01)    Pedir una frase y contador las vocales. 
            Ejemplo, frase: ballena
                    salida: tiene 3 vocales

	C02)    Pedir una frase y contador las letras.  
            Ejemplo, frase : ballena
                    salida: tiene 4 letras

	C03)    Pedir una frase y una vocal, eliminar la vocal ingresada de la frase. 
            Ejemplo, frase: ballena azul  
                    vocal : a
                    salida: b ll n   z l

	C04)    Pedir una frase y una letra, eliminar la letra ingresada de la frase. 
            Ejemplo, frase: ballena azul  
                    letra : l
                    salida: ba  ena azu 

	C05)    Pedir una frase y presentarla inverida con las vocales en mayusculas. 
            Ejemplo, frase: ballena
                    salida: AnEllAb 

	C06)    Pedir una frase y presentarla inverida con las letras en mayusculas. 
            Ejemplo, frase: ballena
                    salida: aNeLLaB 
	
	C07)    Pedir una frase y presentarla en mayusculas y sin la J
            Ejemplo, frase: mujeres
                    salida: MUERES 

	C08)    Anagramas de palabras. 
            Se forman cuando se utilizan todas las letras de una palabra pero modificando el orden.
            Mostrar una palabra de un conjunto y solicita que ingrese el Anagramas de esa palabra.
            Si falla a la tercera mostrar la respuesta
                Ejemplo, palabra : delira
                         salida  : lidera 
            conjunto = {delira � lidera, Ballena: llenaba, Alondra � Ladrona, Espa�a � apa�es, Enrique � quieren}

    C09)   Ingresa una frase y convertir una leta a mayusculas y otra a minisculas
            Ejemplo, frase : di mi nombre
                    salida : Di Mi NoMbRe

>> Arrays

    A01)    Crear una array para cada palabra de su nombre e ingrese el porcentaje de carga para cada palabra.
            Ejemplo:    Pancracia Carmeliana Altamirano Perez 
            
            Ingrese el porcentaje de carga: 100 75 50 25
            Pancracia Carmeliana Altamirano Perez 

            [==============>] 100% Pancracia
            [==========>    ]  75% Carmeli
            [=======>       ]  50% Altam
            [===>           ]  25% Pe

    A02)    Crear una matriz solicitando el tama�o y caracter para almacenar la iniciales de su nombre y apellido y presentar la matriz
            Ejemplo:    Mi nombre es Patricio Paccha => PP    
            Ingrese el tama�o: 5
            Ingrese caracter : *

            *****   *****      
            *   *   *   *      
            *****   *****      
            *       *                   
            *       *  


    A03)    Dibujar un plano de coordenadas positivo y graficar X = 2Y usando como caracteres las letras de su nombre
            Ejemplo:    patmic

            6 |            c
            5 |          i
            4 |        m
            3 |      t
            2 |    a
            1 |  p
            0 |______________________
            

    A04)    Crear un matriz donde y forme un X con su nombre y apellido

            P                           P
                a                   a
                    t           c
                        r   c
                        h   i
                    a           c
                                    i
                                        o

    A05)    Crear un matriz cuadrada del tama�o de su nombre, colocar cada letra de sus nombres completos de forma randomica/aleatorio.
            En el caso que conincidan las posiciones poner un *. 
            Para visulizar el proceso usar un delay 

            P                           P
                a                   a
                M   *   i   h   c   e   l
                        r   c
                        h   i
            A   n   *   a   *   *   a   r
                                    i
                                        o










--------------------------

>> EXTRAS, Usar el delay para animar

	a) Desplazar a la derecha la "o" en la misma linea el numero de espacios que ingrese el usuario
	e) Desplazar a la Izquierda la "o" en la misma linea el numero de espacios que ingrese el usuario
	i) usar los signos \|/-| para simular un movimiento rotacional de carga 0% hasta 100% 
	o) Cargar su nombre completo letra a letra en la misma linea 0% hasta 100% considerando la tama�o de su nombre. 
		Ejemplo:
		 					0%
		 Patricio       	50%
		 Patricio Paccha    100%
	u) Desplazar la figura a la derecha 
	   \|||/
 	   (> <)       
    ooO-(_)-Ooo 