//buffers and init theme
int buffer1[6];
int buffer1i = 0;
int buffer2[2];
int buffer2i = 0;
int buffer3[2];
int buffer3i = 2;
int buffer4[3];
int buffer4i = 0;
int buffer5[2];
int buffer5i = 2;

//add token to buffer
void buffer_add(int buffer[], int *index, int tokens[], int token_number){
	for (int i = 0; i < token_number; ++i){
		buffer[*index+i] = tokens[i];		
	}
	*index += token_number;
}

//get token from buffer
int* buffer_minus(int buffer[], int *index, int token_number){
	//4 is size of int
	int mySize = token_number * 4;
	//add memory to our buffer
	int tokens[] = (int*) malloc(mySize);
	for (int i = 0; i < token_number; ++i){
		tokens[i] = buffer[i];
	}
	for (int i = 0; i < token_number; ++i){
		buffer[i] = buffer[i+1];
	}
	*index -= number;
	return tokens;
}


void a(){
	int *TokensFromBuffer2 = buffer_minus(buffer2, &buffer2i, 1);
	int *TokensFromBuffer1 = buffer_minus(buffer1, &buffer1i, 3);
	int *token = addtoA(TokensFromBuffer2 , TokensFromBuffer1);
	buffer_add(buffer3, &buffer3i, token, 1);
}

void b(){
	int *TokensFromBuffer2 = buffer_minus(buffer2, &buffer2i, 2);
	int *TokensFromBuffer5 = buffer_minus(buffer5, &buffer5i, 2)
	int *tokens = addtoB(TokensFromBuffer2, TokensFromBuffer5);
	buffer_add(buffer2, &buffer2i, {tokens[0][0], tokens[0][1]}, 2);
	buffer_add(buffer4, &buffer4i, {tokens[2][0], tokens[2][1], tokens[2][2]}, 3);
	buffer_add(buffer5, &buffer5i, {tokens[1][0], tokens[1][1]},2);
}

void c(){
	int *TokensFromBuffer4 = buffer_minus(buffer4, &buffer4i, 1)
	int *tokens = addtoC(TokensFromBuffer4);
	buffer_add(buffer1, &buffer1i, tokens, 2);
}

int main(){
	while(true){
		b();
		c();
		c();
		c();
		a();
		a();
	}
	return 0;
}



