#include <iostream>
#include <vector>

int solution(std::vector<int> coordinates) {
    int size = coordinates.size();
    int cnt = 0;
    
    for (int i = 0; i < size - 2; i++) {
        for (int j = i + 1; j < size - 1; j++) {
            for (int k = j + 1; k < size; k++) {
                int b = coordinates[i];
                int n = coordinates[j];
                int m = coordinates[k];
                
                int min = abs(b - n);
                
                if (b - min == m || b + min / 2 == m || n + min == m) {
                    cnt++;
                }
            }
        }
    }
    
    return cnt;
}
