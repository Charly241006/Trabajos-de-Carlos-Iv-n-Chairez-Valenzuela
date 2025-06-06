Proceso sin_titulo
	//Carlos Ivan Chairez Valenzuela//
	//Número de control 24040981"
	
	definir nombre Como Caracter;
	Definir gol, gan, per, emp, totalgan, Maxpuntos, totalpart, totalpuntos como entero;
	Definir porce, porcetotal como real;
	Escribir "¿Cuál es el nombre del equipo?";
	Leer nombre;
	Escribir "¿Cuantos partidos han jugado?";
	Leer totalpart;
	Escribir "¿Cuantos partidos han ganado?";
	Leer gan;
	Escribir "¿Cuantos partidos han empatado?";
	Leer emp;
	Escribir "¿Cuantos partidos han perdido?";
	Leer per;
	totalgan<-gan*3;
	Maxpuntos<-totalpart*3;
	totalpuntos<-totalgan+emp;
	Porce<-((totalpuntos*100)/Maxpuntos);
	porcetotal<-trunc(porce)/1;
	Escribir "Hola equipo ", nombre;
	Escribir "Tu total de partidos son ", totalpart;
	Escribir "Tus puntos totales son ", totalpuntos;
	Escribir "El maximo de puntos posibles son ",Maxpuntos;
	Escribir "El porcentaje de puntos que tienes es de ",porcetotal, "% de los posibles puntos";
FinProceso
