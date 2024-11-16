// 9086: 문자열

#include <iostream>

int main() {   
    int T;

    std::cin >> T;

    while (T--) {
        char word[1000], start, end;
        std::cin >> word;

        start = word[0];

        for (int j=0; word[j] != '\0'; ++j) {
            if (word[j+1] == '\0') end = word[j];
        }

        std::cout << start << end << "\n";
    }

    return 0;
}

#include <string>

int main() {
    int T;
    std::cin >> T;

    while(T--) {
        
    }



    return 0;
}