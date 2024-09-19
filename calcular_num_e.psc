Algoritmo calcular_num_e
	i <- 0
	suma <-0
	factorial<-1
	Mientras i<10 Hacer
		Escribir i
		si i =0 Entonces
			suma <- suma + 1
		SiNo
			
			suma <- suma + 1/factorial
			factorial<- factorial * i
		FinSi
		i <- i + 1
		
	FinMientras
	Escribir "la suma es " suma
	
FinAlgoritmo
