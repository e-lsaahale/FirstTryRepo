#include <stdio.h>

int galoon(int area){
	int galoonreq;
	
	galoonreq=area/115;
	
	printf("Number of Paint Required: %d galoon", galoonreq);
}

int hours(int area){
	int hoursoflabor;
	
	hoursoflabor = (area/115)*8;
	
	printf("\nHours of Labor Required: %d hours", hoursoflabor);
}

int charges(int area){
	int laborcharges;
	
	laborcharges=((area/115)*8)*20;
	
	printf("\nLabor Charges : %d.00 $",laborcharges);
}

int totalcost(int area, int price){
	int total;
	
	total=((area/115)*price)+(((area/115)*8)*20);

	printf("\nTotal Cost of The Paint Job : %d.00$",total);
}

int main(){
	int area;
	int price;
	
	
	printf("Enter Area of The Wall: ");
	scanf("%d",&area);
	
	printf("Enter The Price of The Paint: ");
	scanf("%d", &price);
	printf("\n\n");
	printf("~~Calculation~~\n");
	
	galoon(area);
	hours(area);
	charges(area);
	totalcost(area,price);
	
	
	return 0;
}
