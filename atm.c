91#include <stdio.h>

int checkPin() {
    int pin, tries = 0;

    while (tries < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == 0000) {
            return 1;
        } else {
            printf("Wrong PIN! Try again.\n");
            tries++;
        }
    }

    printf("Too many attempts! Card blocked.\n");
    return 0;
}

void checkBalance(int balance) {
    printf("\nYour Balance: ₹%d\n", balance);
}

int withdraw(int balance) {
    int amount;
    int limit = 80000;  

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
    }
    else if (amount > limit) {
        printf("You can only withdraw up to ₹%d at a time!\n", limit);
    }
    else if (amount > balance) {
        printf("Insufficient balance!\n");
    }
    else {
        balance -= amount;
        printf("Please collect your cash.\n");
        printf("Remaining Balance: ₹%d\n", balance);
    }

    return balance;
}

int deposit(int balance) {
    int amount;
    int limit = 200000;  

    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
    }
    else if (amount > limit) {
        printf("You can only deposit up to ₹%d at a time!\n", limit);
    }
    else {
        balance += amount;
        printf("Amount Deposited Successfully!\n");
        printf("New Balance: ₹%d\n", balance);
    }

    return balance;
}

int main() {
    int balance = 500000;
    int choice;

    printf("==== ATM MACHINE ====\n");

    if (!checkPin()) {
        return 0;
    }

    while (1) {
        printf("\n==== MENU ====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            checkBalance(balance);
        }
        else if (choice == 2) {
            balance = withdraw(balance);
        }
        else if (choice == 3) {
            balance = deposit(balance);
        }
        else if (choice == 4) {
            printf("Thank you for using ATM!\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
      