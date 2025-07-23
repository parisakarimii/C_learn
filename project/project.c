#include <stdio.h>
#include <string.h>

#define MAX_USERS 5

// ساختار اطلاعات کاربر
typedef struct {
    char cardNumber[20];
    char pin[20];
    double balance;
} User;

// آرایه‌ای از کاربران
User users[MAX_USERS] = {
    {"1234567890123456", "1234", 1000.0},
    {"9876543210987654", "5678", 2000.0},
    {"1111222233334444", "4321", 500.0},
    {"5555666677778888", "8765", 3000.0},
    {"9999000011112222", "1122", 1500.0}
};

// تابع ورود به سیستم
int login(int *userIndex) {
    char cardNumber[20], pin[20];

    printf("Enter card number: ");
    scanf("%s", cardNumber);
    printf("Enter PIN: ");
    scanf("%s", pin);

    // جستجو برای اعتبارسنجی شماره کارت و PIN
    for (int i = 0; i < MAX_USERS; i++) {
        if (strcmp(users[i].cardNumber, cardNumber) == 0 && strcmp(users[i].pin, pin) == 0) {
            *userIndex = i;
            return 1; // ورود موفق
        }
    }
    return 0; // ورود ناموفق
}

// تابع نمایش موجودی
void checkBalance(int userIndex) {
    printf("Your current balance is: %.2f\n", users[userIndex].balance);
}

// تابع برداشت پول
void withdrawMoney(int userIndex) {
    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);

    if (amount > users[userIndex].balance) {
        printf("Insufficient funds.\n");
    } else {
        users[userIndex].balance -= amount;
        printf("You have withdrawn %.2f. Your new balance is: %.2f\n", amount, users[userIndex].balance);
    }
}

// تابع واریز پول
void depositMoney(int userIndex) {
    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);

    users[userIndex].balance += amount;
    printf("You have deposited %.2f. Your new balance is: %.2f\n", amount, users[userIndex].balance);
}

// تابع تغییر PIN
void changePin(int userIndex) {
    char newPin[20];
    printf("Enter new PIN: ");
    scanf("%s", newPin);

    strcpy(users[userIndex].pin, newPin);
    printf("Your PIN has been changed successfully.\n");
}

int main() {
    int userIndex = -1;
    int choice;
    int loggedIn = 0;

    printf("Welcome to the ATM System\n");

    // ورود کاربر
    if (login(&userIndex)) {
        loggedIn = 1;
        printf("Login successful. Welcome, user %d!\n", userIndex + 1);
    } else {
        printf("Invalid card number or PIN.\n");
        return 0;
    }

    while (loggedIn) {
        // نمایش منو
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Change PIN\n");
        printf("5. Logout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(userIndex);
                break;
            case 2:
                withdrawMoney(userIndex);
                break;
            case 3:
                depositMoney(userIndex);
                break;
            case 4:
                changePin(userIndex);
                break;
            case 5:
                loggedIn = 0;
                printf("You have logged out.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
