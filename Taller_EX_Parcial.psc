Algoritmo Taller_EX_Parcial
	Escribir "Ingrese la unidad de medida de la temperatura (c C, F f, K k):"
	Leer temp
	validar_temp <- temp = "c" o temp = "C" o temp = "F" o temp = "f" o temp = "K" o temp = "k"

	si validar_temp = Verdadero Entonces
		si temp = "c" o temp = "C" Entonces
			Escribir "Ingrese la temperatura"   // trabaja con temp en centigrado
			Leer temp_num
			si temp_num < 200 y temp_num > 0 Entonces
				Escribir "Ingrese la presion (atm):"
				Leer presion
				si presion > 0 Entonces
					Escribir "Ingrese el tipo de gas H h, N n, A a, M m:"
					Leer tipo_gas
					si tipo_gas = "H" o tipo_gas = "h" o tipo_gas = "N" o tipo_gas = "n" o tipo_gas = "A" o tipo_gas = "A" o tipo_gas = "M" o tipo_gas = "m" Entonces
						// datos dependiendo del gas
						si tipo_gas = "H" o tipo_gas = "h" Entonces
							densidad <- 0.09
							grados_de_libertad <- 5
						SiNo
							si tipo_gas = "N" o tipo_gas = "n" 
								densidad <- 1.25
								grados_de_libertad <- 5
							SiNo
								si tipo_gas = "A" o tipo_gas = "A" 
									densidad <- 1.8
									grados_de_libertad <- 3
								SiNo // tipo M o m
									densidad <- 0.769
									grados_de_libertad <- 6
								FinSi
							FinSi
						FinSi
						
						//temperatura a kelvin (otra vez)
						temp_kelvin <- temp_num + 273.15
						
						// calculo presion 
						presion <- presion * 101325
						
						// calculo masa molar
						masa_molar <- ( 8.317 * temp_kelvin * densidad ) / presion
						
						//coeficiente de dilatación adiabática
						dilatacion <- (grados_de_libertad + 2) / grados_de_libertad
						
						// velocidad de la luz
						vel_luz <- raiz( (dilatacion * 8.317 * temp_kelvin )/ masa_molar)
						vel_luz <- vel_luz/1000
						// muestra outputs
						Escribir "Para el gas: " tipo_gas
						Escribir "------------------------"
						Escribir "El coeficiente de dilatación adiabática es: " dilatacion
						Escribir " La masa molar es: " masa_molar " kg/mol"
						Escribir " La velocidad del sonido es: " vel_luz " kg/s"
		
					SiNo
						Escribir "El tipo de gas es incorrecto"
					FinSi
				SiNo
					Escribir "La presion debe ser positiva"
				FinSi
			SiNo
				Escribir "La temperatura no se encuentra en el rango [0;200]"
			FinSi
		SiNo
			si temp = "F" o temp = "f" Entonces // trabaja en farrenheith
				Escribir "Ingrese la temperatura" 
				Leer temp_num 
				
				// calculo de farenheit a centigrados
				temp_num <- (temp_num - 32 ) * 5 / 9
				
				si temp_num < 200 y temp_num > 0 Entonces
					Escribir "Ingrese la presion (atm):"
					Leer presion
					si presion > 0 Entonces
						Escribir "Ingrese el tipo de gas H h, N n, A a, M m:"
						Leer tipo_gas
						si tipo_gas = "H" o tipo_gas = "h" o tipo_gas = "N" o tipo_gas = "n" o tipo_gas = "A" o tipo_gas = "A" o tipo_gas = "M" o tipo_gas = "m" Entonces
							// datos dependiendo del gas
							si tipo_gas = "H" o tipo_gas = "h" Entonces
								densidad <- 0.09
								grados_de_libertad <- 5
							SiNo
								si tipo_gas = "N" o tipo_gas = "n" 
									densidad <- 1.25
									grados_de_libertad <- 5
								SiNo
									si tipo_gas = "A" o tipo_gas = "A" 
										densidad <- 1.8
										grados_de_libertad <- 3
									SiNo // tipo M o m
										densidad <- 0.769
										grados_de_libertad <- 6
									FinSi
								FinSi
							FinSi
							
							//temperatura a kelvin (otra vez)
							temp_kelvin <- temp_num + 273.15
							
							// calculo presion 
							presion <- presion * 101325
							
							// calculo masa molar
							masa_molar <- ( 8.317 * temp_kelvin * densidad ) / presion
							
							//coeficiente de dilatación adiabática
							dilatacion <- (grados_de_libertad + 2) / grados_de_libertad
							
							// velocidad de la luz
							vel_luz <- raiz( (dilatacion * 8.317 * temp_kelvin )/ masa_molar)
							vel_luz <- vel_luz/1000
							// muestra outputs
							Escribir "Para el gas: " tipo_gas
							Escribir "------------------------"
							Escribir "El coeficiente de dilatación adiabática es: " dilatacion
							Escribir " La masa molar es: " masa_molar " kg/mol"
							Escribir " La velocidad del sonido es: " vel_luz " kg/s"
	
						SiNo
							Escribir "El tipo de gas es incorrecto"

						FinSi
					SiNo
						Escribir "La presion debe ser positiva"
					FinSi
				SiNo
					Escribir "La temperatura no se encuentra en el rango [0;200]"
				FinSi
			SiNo // trabaja en Kelvin
				Escribir "Ingrese la temperatura" 
				Leer temp_num
				
				//calculo de kelvin a centigrados
				temp_num <- temp_num -  273.15
				
				si temp_num < 200 y temp_num > 0 Entonces
					Escribir "Ingrese la presion (atm):"
					Leer presion
					si presion > 0 Entonces
						Escribir "Ingrese el tipo de gas H h, N n, A a, M m:"
						Leer tipo_gas
						si tipo_gas = "H" o tipo_gas = "h" o tipo_gas = "N" o tipo_gas = "n" o tipo_gas = "A" o tipo_gas = "A" o tipo_gas = "M" o tipo_gas = "m" Entonces
							// datos dependiendo del gas
							si tipo_gas = "H" o tipo_gas = "h" Entonces
								densidad <- 0.09
								grados_de_libertad <- 5
							SiNo
								si tipo_gas = "N" o tipo_gas = "n" 
									densidad <- 1.25
									grados_de_libertad <- 5
								SiNo
									si tipo_gas = "A" o tipo_gas = "A" 
										densidad <- 1.8
										grados_de_libertad <- 3
									SiNo // tipo M o m
										densidad <- 0.769
										grados_de_libertad <- 6
									FinSi
								FinSi
							FinSi
							
							//temperatura a kelvin (otra vez)
							temp_kelvin <- temp_num + 273.15
							
							// calculo presion 
							presion <- presion * 101325
							
							// calculo masa molar
							masa_molar <- ( 8.317 * temp_kelvin * densidad ) / presion
							
							//coeficiente de dilatación adiabática
							dilatacion <- (grados_de_libertad + 2) / grados_de_libertad
							
							// velocidad de la luz
							vel_luz <- raiz( (dilatacion * 8.317 * temp_kelvin )/ masa_molar)
							vel_luz <- vel_luz/1000
							// muestra outputs
							Escribir "Para el gas: " tipo_gas
							Escribir "------------------------"
							Escribir "El coeficiente de dilatación adiabática es: " dilatacion
							Escribir " La masa molar es: " masa_molar " kg/mol"
							Escribir " La velocidad del sonido es: " vel_luz " kg/s"
							
						SiNo
							Escribir "El tipo de gas es incorrecto"
						FinSi
					SiNo
						Escribir "La presion debe ser positiva"
					FinSi
				SiNo
					Escribir "La temperatura no se encuentra en el rango [0;200]"
					
				FinSi
			FinSi
		FinSi
	SiNo
		Escribir "La unidad de medida de la temperatura no es correcta."
		
	FinSi
	

FinAlgoritmo








