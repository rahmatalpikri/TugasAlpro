#include <stdio.h> 
 #include <stdlib.h> 
  
 int main() { 
     // Inisialisasi PIN awal 
     int pin = 1945; 
     // Inisialisasi saldo awal 
     float balance = 500000; 
     // Inisialisasi variabel-variabel lain yang dibutuhkan 
     int choice, login_attempt = 0; 
     int transfer_account_number; 
     float transfer_amount, top_up_dana, top_up_gopay,top_up_shope_pay,top_up_ovo,top_up_e_wallet,
  withdrawal_amount; 
  
     // Loop while untuk mengulang login hingga maksimal 3 kali percobaan 
     while (login_attempt < 3) { 
         // Meminta pengguna memasukkan PIN 
         int input_pin; 
         printf("Enter PIN: "); 
         scanf("%d", &input_pin); 
          
         // Jika PIN benar, tampilkan menu opsi 
         if (input_pin == pin) { 
             printf("Login successful!\n"); 
             while (1) { 
                 printf("\nATM Menu\n"); 
                 printf("1. Check Balance\n"); 
                 printf("2. Deposit\n"); 
                 printf("3. Withdraw\n"); 
                 printf("4. Transfer\n"); 
                 printf("5. Top Up\n"); 
                 printf("6. Logout\n"); 
                 printf("Enter your choice: "); 
                 scanf("%d", &choice); 
                  
                 // Switch case untuk setiap opsi pada menu 
                 switch (choice) { 
                     case 1: 
                         printf("Your current balance is: %.2f\n", balance); 
                         break; 
                     case 2: 
                         printf("Enter amount to deposit: "); 
                         float deposit_amount; 
                         scanf("%f", &deposit_amount); 
                         balance += deposit_amount; 
                         printf("Deposit successful. Your new balance is: %.2f\n", balance); 
                         break; 
                     case 3: 
                         printf("Enter amount to withdraw: "); 
                         scanf("%f", &withdrawal_amount); 
                         if (withdrawal_amount > balance) { 
                             printf("Insufficient funds.\n"); 
                         } else { 
                             balance -= withdrawal_amount; 
                             printf("Withdrawal successful. Your new balance is: %.2f\n", balance); 
                         } 
                         break; 
                     case 4: 
                         printf("Enter account number to transfer: "); 
                         scanf("%d", &transfer_account_number); 
                         printf("Enter amount to transfer: "); 
                         scanf("%f", &transfer_amount); 
                         if (transfer_amount > balance) { 
                             printf("Insufficient funds.\n"); 
                         } else { 
                             balance -= transfer_amount; 
                             printf("Transfer successful. Your new balance is: %.2f\n", balance); 
                         } 
                         break; 
                     case 5: 
                         printf("Top up menu\n"); 
                         printf("1. Top up Dana\n"); 
                         printf("2. Top up Gopay\n"); 
                         printf("3. Top up shope pay\n");  
                         printf("4. Top up ovo\n");
                         printf("5. Top up E-wallet\n");
                         printf("Enter your choice: "); 
                         int top_up_choice; 
                         scanf("%d", &top_up_choice); 
                         switch (top_up_choice) { 
                             case 1: 
                                 printf("Enter amount to top up: "); 
                                 scanf("%f", &top_up_dana); 
                                 printf("Enter PIN: "); 
                                 scanf("%d", &pin); 
                                 printf("Top up successful. Your new balance is: %.2f\n", balance -= top_up_dana); 
                                 break; 
                             case 2: 
                                 printf("Enter amount to top up: "); 
                                 scanf("%f", &top_up_gopay); 
                                 printf("Enter PIN: "); 
                                 scanf("%d", &pin); 
                                 printf("Top up successful. Your new balance is: %.2f", balance -= top_up_gopay); 
  
                       case 3: 
                                  printf("Enter amount to top up: "); 
                                 scanf("%f", &top_up_shope_pay); 
                                 printf("Enter PIN: "); 
                                 scanf("%d", &pin); 
                                 printf("Top up successful. Your new balance is: %.2f", balance -= top_up_shope_pay); 
                                 printf("Top up successful. Your new balance is: %.2f\n", balance); 
                                 break; 
                             default: 
                                 printf("Invalid option.\n"); 
                                 break; 
                                 
                                   case 4: 
                                 printf("Enter amount to top up: "); 
                                 scanf("%f", &top_up_ovo); 
                                 printf("Enter PIN: "); 
                                 scanf("%d", &pin); 
                                 printf("Top up successful. Your new balance is: %.2f\n", balance -= top_up_ovo); 
                                 break; 
                                 
                                    case 5: 
                                 printf("Enter amount to top up: "); 
                                 scanf("%f", &top_up_e_wallet);
                                 printf("Enter PIN: "); 
                                 scanf("%d", &pin); 
                                 printf("Top up successful. Your new balance is: %.2f\n", balance -= top_up_e_wallet); 
                                 break; 
                         } 
                         break; 
                     case 6: 
                         // Keluar dari menu dan kembali ke menu login 
                         printf("Logout successful.\n"); 
                         login_attempt = 3; 
                         break; 
                     default: 
                         printf("Invalid option.\n"); 
                         break; 
                 } 
             } 
         } else { 
             // Jika PIN salah, tampilkan pesan error dan tingkatkan jumlah percobaan 
             printf("Invalid PIN. Please try again.\n"); 
             login_attempt++; 
         } 
     } 
     // Jika sudah 3 kali percobaan login dan masih gagal, keluar dari program 
     if (login_attempt == 3) { 
         printf("Too many failed attempts. ATM locked.\n"); 
     } 
     return 0; 
 }