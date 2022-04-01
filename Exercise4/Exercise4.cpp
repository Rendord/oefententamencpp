#include <iostream>
// No other includes are needed (nor approved ;) )

int sizeOfString(char* array) {
	int sum = 0;
	for (int i = 0; i < sizeof(array); i++) {
		if (array[i] == '\0') {
			break;
		}
		sum++;
	}
	return sum;
}

void append(char* body, char* tail) {
	int size = sizeOfString(body) + sizeOfString(tail) + 1;
	std::cout << sizeOfString(body) << " " << sizeOfString(tail) << std::endl;
	std::cout << size << std::endl;
	char* newbody = new char[size];
	int tracker = 0;
	for (int i = 0; i < sizeOfString(body); i++) {
		newbody[tracker] = body[i];
		tracker++;
		std::cout << newbody << std::endl;
	}
	for (int i = 0; i < sizeOfString(tail); i++) {
		newbody[tracker] = tail[i];
		tracker++;
		std::cout << newbody << std::endl;
	}
	body = newbody;
	std::cout << newbody << std::endl;
	delete newbody;

	
}


int main()
{
    
    char body1[16] = "test";
    char tail1[] = "ing...";
    append(body1, tail1);
    std::cout << body1 << std::endl; // "testing..."
	/*
    char body2[16] = "";
    char tail2[] = "Tail";
    append(body2, tail2);
    std::cout << body2 << std::endl; // "Tail"

    char body3[16] = "Body";
    char tail3[] = "";
    append(body3, tail3);
    std::cout << body3 << std::endl; // "Body"

    char body4[16] = "";
    char tail4[] = "";
    append(body4, tail4);
    std::cout << body4 << std::endl; // ""

    char body5[16] = "te";
    char tail5[] = "sting...";
    append(body5, tail5);
    std::cout << body5 << std::endl; // "testing..."
    */
}
