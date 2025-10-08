// Level 4 Challenges
bool level4_challenge1() {
    std::cout << "\nChallenge 1: Enter a number, then use a pointer to print its value and address.\n";
    int num;
    std::cin >> num;
    int *ptr = &num;
    std::cout << "Value: " << *ptr << ", Address: " << ptr << "\n";
    return true; // Simplified for demo purposes
}

bool level4_challenge2() {
    std::cout << "\nChallenge 2: Dynamically allocate an array and initialize it with values.\n";
    int size = 5;
    int *arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    delete[] arr;
    return true; // Simplified for demo purposes
}

bool level4_challenge3() {
    std::cout << "\nChallenge 3: Print array elements using pointer arithmetic.\n";
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << "\n";
    return true; // Simplified for demo purposes
}

bool level4() {
    displayStoryAndObjective(
        "The Hidden Network: Trace and disrupt the hacker's hidden network.",
        "Complete at least two out of three challenges to proceed."
    );

    int successCount = 0;
    successCount += level4_challenge1() ? 1 : 0;
    successCount += level4_challenge2() ? 1 : 0;
    successCount += level4_challenge3() ? 1 : 0;

    return successCount >= 2;
}

// Level 5 Challenges
bool level5_challenge1() {
    std::cout << "\nChallenge 1: Define a class `Detective` and print its name.\n";
    // Example code is simplified and automatically run for demo
    return true;
}

bool level5_challenge2() {
    std::cout << "\nChallenge 2: Extend the `Detective` class with methods for setting and getting the rank.\n";
    // Example code is simplified and automatically run for demo
    return true;
}

bool level5_challenge3() {
    std::cout << "\nChallenge 3: Create a derived class `SeniorDetective` that inherits from `Detective` and adds a new method.\n";
    // Example code is simplified and automatically run for demo
    return true;
}

bool level5() {
    displayStoryAndObjective(
        "The Mysterious Data: Analyze the data structure used by the hacker.",
        "Complete at least two out of three challenges to proceed."
    );

    int successCount = 0;
    successCount += level5_challenge1() ? 1 : 0;
    successCount += level5_challenge2() ? 1 : 0;
    successCount += level5_challenge3() ? 1 : 0;

    return successCount >= 2;
}

// Level 6 Challenges
bool level6_challenge1() {
    std::cout << "\nChallenge 1: Read from a file and print its contents.\n";
    // Example code is simplified and automatically run for demo
    return true;
}

bool level6_challenge2() {
    std::cout << "\nChallenge 2: Sort a list of numbers using bubble sort.\n";
    // Example code is simplified and automatically run for demo
    return true;
}

bool level6_challenge3() {
    std::cout << "\nChallenge 3: Perform binary search on a sorted array.\n";
    // Example code is simplified and automatically run for demo
    return true;
}

bool level6() {
    displayStoryAndObjective(
        "The Final Algorithm: Solve the ultimate puzzle to catch the hacker.",
        "Complete at least two out of three challenges to proceed."
    );

    int successCount = 0;
    successCount += level6_challenge1() ? 1 : 0;
    successCount += level6_challenge2() ? 1 : 0;
    successCount += level6_challenge3() ? 1 : 0;

    return successCount >= 2;
}

int main() {
    std::cout << "Welcome to Code Detective: The Mystery of the Cyber City\n";

    // Track player progress
    int level = 1;

    while (level <= 6) {
        bool success = false;
        switch (level) {
            case 1:
                success = level1();
                break;
            case 2:
                success = level2();
                break;
            case 3:
                success = level3();
                break;
            case 4:
                success = level4();
                break;
            case 5:
                success = level5();
                break;
            case 6:
                success = level6();
                break;
        }

        if (success) {
            std::cout << "Congratulations! You've completed level " << level << ".\n";
            level++;
        } else {
            std::cout << "Level " << level << " failed. Try again.\n";
        }
    }

    std::cout << "You've completed all available levels. Stay tuned for more cases!\n";
    return 0;
}
