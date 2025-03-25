#include <iostream>
#include <fstream>

double function(double N)
{
	return (3.0 / 4.0) * N - (7.0 / 4.0);
	
}

int main()
{
	std::ofstream outFile("result.txt");
    std::ifstream fstr("data.txt");
	if(fstr.fail())
	{
		std::cerr << "File not found" << std::endl;
		return 1;
	}
	double val;
	double media = 0.0;
	unsigned int i = 1;
	outFile << "#" << "N Mean" << std::endl;
	while(fstr >> val)
	{
				media += function(val);
				double mean = media/i;
				outFile << i << " " << std::scientific << mean << std::endl;
				i++;
	}
	fstr.close();
	return 0;
}
