#include <iostream>
#include <fstream>

int parseFile(const char filename[]) {
    std::ifstream inputfile;
	std::ofstream outputfile;
	char o;
	int sum = 0;
	outputfile.open("output.txt");
    inputfile.open(filename);
	inputfile.get(o);
	while (!inputfile.eof()) {
		if (!isdigit(o)) {
			outputfile.put(o);
		}
		else {
			sum += o - '0';
		}
		std::cout.put(o);
		inputfile.get(o);
	}
	std::cout << std::endl;
	inputfile.close();
	outputfile.close();
	return sum;

}

int main()
{
	//parseFile("input.txt");
    std::cout << parseFile("input.txt") << std::endl;
    
}
