// I am studying Programming language C in Peking University
#include <iostream>
using namespace std;
char maxAns[105], minAns[105];
int maxLen = -1, minLen = 105;
char t[20205];

int main()
{
    while (scanf("%20204s", t) != EOF) {
        char* word = strtok(t, ",");

        while (word != NULL) {
            int len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(maxAns, word);
            }
            if (len < minLen) {
                minLen = len;
                strcpy(minAns, word);
            }
            word = strtok(NULL, ",");
        }
    }
    printf("%s\n%s\n", maxAns, minAns);
    
    return 0;
}