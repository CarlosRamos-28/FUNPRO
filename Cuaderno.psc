Algoritmo Cuaderno
	pH <- 7
	esNeutro <- pH = 7
	Escribir "¿La disolución es neutra?"
	Escribir esNeutro
	
	discriminante <- 5
	esCompleja <- discriminante < 0
	Escribir "La ecuación cuadrática tiene solución compleja" 
	Escribir esCompleja
	
	anguloAlfa <- 90
	anguloBeta <-90
	anguloGamma <-110
	anguloDelta <-70
	suma <- anguloAlfa + anguloBeta + anguloDelta + anguloGamma
	esCuadrilatero <- suma = 360
	Escribir "La suma de sus angulos internos es 360"
	Escribir esCuadrilatero
	
	cantCaras <- 3
	cantAristas <- 2
	cantVertices <- 1
	operacion <- cantCaras - cantAristas + cantVertices
	cumpleEuler <- operacion = 2
	Escribir "Es un poliedro convexo"
	Escribir cumpleEuler
	
	longitud_de_onda <- 483
	esAzul <- longitud_de_onda > 460 y longitud_de_onda < 482
	Escribir "La onda de luz es de color azul"
	Escribir esAzul
	
	ladoAB <- 5
	ladoBC <- 5
	ladoCA <- 5
	esEquilatero <- ladoAB = ladoBC y ladoCA = ladoBC
	Escribir "El triángulo es equilátero"
	Escribir esEquilatero
	
	ladoDE <- 5.4
	ladoEF <- 5
	ladoFE <- 5.2
	esEscaleno <- ladoDE <> ladoEF y ladoFE <> ladoEF
	Escribir "El triángulo es escaleno"
	Escribir esEscaleno
	
	ladoGH <- 8
	ladoHI <- 2
	ladoGI <- 1
	teorema <- ladoGH + ladoHI > ladoGI y ladoHI < lagoGH + ladoGI y ladoGH < ladoHI + ladoGI
	Escribir "Se cumple el teorema de la desigualdad del triángulo" 
	Escribir teorema
	
	
	
	
	
	
	
	
	
	
	
FinAlgoritmo
