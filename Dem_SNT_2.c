#include <stdio.h>

int main() {
	char s[20], comp[4] = {'2','3','5','7'}, freq[4] = {};
	scanf("%s", &s);

	int i = 0;
	while (s[i] != '\0') {
		for (int j=0; j<4; ++j) {
			if (s[i] == comp[j]) {
				freq[j]++;
				break;
			}
		}
		++i;
	}
	for (int i=0; i<4; ++i) {
		if (freq[i] > 0) printf("%c %d\n", comp[i], freq[i]);
	}
	return 0;
}