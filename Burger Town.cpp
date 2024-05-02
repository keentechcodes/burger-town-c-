#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

void menu();
void order();

int main(void){
	
	char username[10], password[8], x;
	int i;
	cout<<"---------------------------------"<<endl;
	cout<<"--------------LOGIN--------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout << "Username:";
	cin >> username;
	cout << "Password:";
		
	for (i = 0;;){
	x = getch();
	
	if((x >='a' && x <= 'z') || (x >='A' && x <='Z') || (x >='0' && x <= '9')){
		password[i] = x;
		i++;
		cout << "*";
		}
		
	else if(x =='\b' && i >= 1){
		cout << "\b \b";
		i--;
		}
		
	else if(x =='\r'){
		password[i]='\0';
		break;
		}
}

	
	if (!strcmp(username, "Keenan") && !strcmp(password, "pa55w0rd")){
	cout << "\nAccess Granted, Welcome!\n";
	system("PAUSE");	
	system("CLS");
	menu();
	order();
	}
	
	else if(!strcmp(username, "Thomas") && !strcmp(password, "Lizares")){
	cout << "\nAcccess Granted, Welcome!\n";
	system("PAUSE");
	system("CLS");
	menu();
	order();
	}
	
	else if(!strcmp(username, "Burger") && !strcmp(password, "Town69")){
	cout << "\nAcccess Granted, Welcome!\n";
	system("PAUSE");	
	system("CLS");
	menu();
	order();
	}

else{
	cout << "\nAccess Denied...";
}
}
void menu(){
   	cout<<"                        |\ /| /|_/|"<<endl;
	cout<<"                      |\||-|\||-/|/|"<<endl;  
	cout<<"                       \\|\|//||///"<<endl;  
	cout<<"      _..----.._       |\/\||//||||"<<endl;  
	cout<<"    .'     o    '.     |||\\|/\\ ||"<<endl;  
	cout<<"   /   o       o  \    | './\_/.' |"<<endl;  
	cout<<"  |o        o     o|   |          |"<<endl;  
	cout<<"  /'-.._o     __.-'\   |          |"<<endl;  
	cout<<"  \      `````     /   |          |"<<endl;  
	cout<<"  |``--........--'`|    '.______.'"<<endl;  
	cout<<"   \              /"<<endl;  
	cout<<"    `'----------'`"<<endl;  
	cout<<"---------------------------------------------------\n"<<endl;
	cout<<"--------------WELCOME TO BURGER TOWN!--------------\n"<<endl;
	cout<<"---------------------------------------------------\n"<<endl;
	
	cout<<"			---MENU---						\n";
	cout<<"			-BURGERS-						\n";
	cout<<"(1)141 Special (Cheeseburger)		-	P125\n";
	cout<<"(2)141 Deluxe (Double Cheeseburger)	-	P155\n";
	cout<<"(3)The 75th (Quarter pounder burger)	-	P145\n";
	cout<<"(4)Gulag Shower (Fish Fillet Burger)	-	P155\n";
	
	cout<<"\n			-PIZZAS-						\n";
	cout<<"(5)Bacon Machine Pizza			-	P250\n";
	cout<<"(6)Foley's Cheese Pizza			-	P255\n";
	cout<<"(7)Pepperoni Pizza			-	P250\n";
	cout<<"(8)J. Allen's Hawaiian Pizza 		-	P285\n";
	
	cout<<"\n			-MAINS-						\n";
	cout<<"(9)Shepherd's Steak			-	P175\n";
	cout<<"(10)Nikolai's Rib-eye			-	P165\n";
	cout<<"(11)Dunn's Chicken and Rice		-	P110\n";
	cout<<"(12)Wade's demise (Grilled Pork Chops)	-	P130\n";
	cout<<"(13)Gary Sanderson's Spaghetti 		-	P85\n";
	cout<<"(14)8 pcs Chicken Nuggets		-	P105\n";
	
	cout<<"\n			-ADD-ONS-						\n";
	cout<<"(15)Extra rice				-	P25\n";
	cout<<"(16)Fries				-	P35\n";

	cout<<"\n			-DRINKS-						\n";
	cout<<"(17)Bottled Water			-	P20\n";
	cout<<"(18)Iced Tea				-	P35\n";
	cout<<"(19)Lemonade				-	P30\n";
	cout<<"(20)Chocolate Milkshake			-	P95\n";
	
}
void order(){
	int option, count=0, choice[100], quantity[100], discount;
	float total, payment, change, temporary[100];
	
	cout<<"---------------------------------------------------\n";
	cout<<"		    -OPTIONS-						\n";
	cout<<"---------------------------------------------------\n";
	cout<<"(1) Order\n";
	cout<<"(2) Exit\n";
	
while (option !=1 && option !=2){
	cout << "Enter an Option:";
	cin >> option;
}
	if (option == 1){
	
	while (choice[count]!= 21){
	cout << "\nChoice (Item Number):";
	cin >> choice[count];

	
	if (choice[count] == 1){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 125;
		temporary[count] = quantity[count] * 125;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";	
		count += 1;		
	}
		else if (choice[count] == 2){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 155;
		temporary[count] = quantity[count] * 155;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 3){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 145;
		temporary[count] = quantity[count] * 145;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 4){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 155;
		temporary[count] = quantity[count] * 155;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 5){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 250;
		temporary[count] = quantity[count] * 250;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 6){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 255;
		temporary[count] = quantity[count] * 255;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 7){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 250;
		temporary[count] = quantity[count] * 250;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 8){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 285;
		temporary[count] = quantity[count] * 285;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 9){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 175;
		temporary[count] = quantity[count] * 175;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 10){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 165;
		temporary[count] = quantity[count] * 165;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 11){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 110;
		temporary[count] = quantity[count] * 110;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 12){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 130;
		temporary[count] = quantity[count] * 130;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 13){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 85;
		temporary[count] = quantity[count] * 85;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 14){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 105;
		temporary[count] = quantity[count] * 105;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 15){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 25;
		temporary[count] = quantity[count] * 25;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 16){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 35;
		temporary[count] = quantity[count] * 35;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 17){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 20;
		temporary[count] = quantity[count] * 20;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 18){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 35;
		temporary[count] = quantity[count] * 35;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 19){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 30;
		temporary[count] = quantity[count] * 30;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
		else if (choice[count] == 20){
		cout << "Quantity:";
		cin >> quantity[count];
		total += quantity[count] * 95;
		temporary[count] = quantity[count] * 95;
		cout << "Total: P" << temporary[count] << "\n";
		cout << "(21)Confirm Order\n";		
		count += 1;
	}
}

	cout << "\n ORDERS\n";
	cout << "Item Number		Quantity		Price\n";
	
	while (count > 0){
		count -= 1;
		cout << choice[count] << "\t\t\t" << quantity[count] << "\t\t\tP";
		std::cout << std::fixed << std::setprecision(2) << temporary[count];
		cout << "\n";
	}
 	
	cout << "\nTotal						P";
	std::cout << std::fixed << std::setprecision(2) << total;
	cout << "\n\nDo You Have a Discount?\n";
	cout << "(1) Seniord Citizen Discount (20%)\n";
	cout << "(2) Others (10%)\n";
	cout << "(3) None\n";

	while (discount < 1 || discount > 3){
		cout << "Discount Option#:";
		cin >> discount;
	}
	
	if(discount == 1){
		total = total*0.80;
		cout << "\TOTAL(with discount): P";
		std::cout << std::fixed << std::setprecision(2) << total;
	}
		
	else if(discount == 2){
		total = total*0.90;
		cout << "\nTOTAL(with discount): P";
		std::cout << std::fixed << std::setprecision(2) << total;
	}
			
	else if(discount == 3){
		total = total*1;
	cout << "\nTOTAL: P";
		std::cout << std::fixed << std::setprecision(2) << total;
	}


	while (payment < total) {
		cout << "\nCASH: P";
		cin >> payment;
    }
    
    if (payment >= total){
		change = payment - total;
		cout << "\nCHANGE: P";
		std::cout << std::fixed << std::setprecision(2) << change;
		cout << "\n\nThank You and Have a Good Day!\n\n";
		system("PAUSE");
		}

}
}
