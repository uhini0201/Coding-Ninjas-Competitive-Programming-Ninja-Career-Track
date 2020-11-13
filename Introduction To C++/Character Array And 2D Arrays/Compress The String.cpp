/*
Time complexity: O(N)
Space complexity: O(1)
where N is the length of the input string
*/
void stringCompression(char input[]) {
    int outputIndex = 0;
    int count = 1;
    for (int i = 0; input[i] != '\0'; ++i) {
        if(input[i] == input[i - 1]) {
        	++count;
        } else {
            if (count > 1) {
                input[outputIndex++] = (char)(count + '0');
                count = 1;
            }
        input[outputIndex++] = input[i];
        }
    }
    if (count > 1) {
    	input[outputIndex++] = (char)(count + '0');
    }
    input[outputIndex++] = '\0';
}
