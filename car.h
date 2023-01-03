#ifndef CAR_H_
#define CAR_H_

/*Inkluderingsdirektiv*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/********************************************************************************
* enum car_transmission: Enumration av v�xell�dan
********************************************************************************/
enum car_transmission {
	AUTOMATIC,
	MANUAL
};

/********************************************************************************
* struct car: Strukt som inneh�ller bilens olika attribut.
********************************************************************************/
struct car 
{
	const char* brand;
	const char* model;
	const char* color;
	unsigned int year_of_launch;
	enum car_transmission transmission;

	void (*change_color)(struct car*, char* new_colour);
	void (*change_transmission)(struct car*);
	void (*print)(struct car*, FILE* ostream);
};


/********************************************************************************
* file_read: l�ser av en textfil och skriver ut i terminalen.
********************************************************************************/
void file_read(const char* filepath);

/********************************************************************************
* car_delete:  tar bort bil.
********************************************************************************/
void car_delete(struct car** c);

/********************************************************************************
* car_clear: nollst�ller bil
********************************************************************************/
void car_clear(struct car* c);

/********************************************************************************
* car_change_color: byter f�rgen p� bilen.
********************************************************************************/
void car_change_color(struct car* c, char* new_color);

/********************************************************************************
* car_init: intierar bil.
********************************************************************************/
void car_init(struct car* c, char* brand, char* model, char* color, unsigned int year_of_launch, enum car_transmission transmission);

/********************************************************************************
* car_print: skriver ut inneh�llet f�r  bil.
********************************************************************************/
void car_print(struct car* c, FILE* ostream);

/********************************************************************************
* car_new:  Retunerar en pekare till n�sta bilen.
********************************************************************************/
struct car* car_new(char* brand, char* model, char* color, unsigned int year_of_launch, enum car_transmission transmission);

/********************************************************************************
* car_change_transmission: byter v�xell�da p� bilen.
********************************************************************************/
void car_change_transmission(struct car* c);


#endif /* CAR_H_ */