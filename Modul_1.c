#include <stdio.h>

struct dataObat{
	char code[7], name[50], disease[50];
	int stock, price;
}obat[25] = {
			 {"DIZ001", "Paramex", "Dizziness", 120, 14000}, 
			 {"FLU001", "Panadol", , "Flu & Fever", 57, 8000}, 
			 {"DIA001", "Diatabs", "Diarrhea", 10, 6500}, 
			 {"DIA002", "Diapet", "Diarrhea", 18, 6000}
			};

int sell(struct dataObat arr[]);
int addStock(struct dataObat arr[]);
void display(struct dataObat arr[]);

int main(){
	
	int i;
	for(i = 0; i < 94; i++)
		printf("-");		
	printf("\n");	
	printf("| %-5s | %-15s | %-20s | %-15s | %-10s | %-10s |\n", "No.", "Medicine Code", "Medicine Name", "Disease", "Stock", "Price");
	
	for(i = 0; i < 94; i++)
		printf("-");
	printf("\n");
	
	for(i = 0; i < 4; i++){
		printf("| %-5d | %-15s | %-20s | %-15s | %-10d | %-10d |\n", i, obat[i].code, obat[i].name, obat[i].disease, obat[i].stock, obat[i].price)
	}
			
}
