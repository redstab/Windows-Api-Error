#include "error.h"

int main()
{
	std::locale::global(std::locale("sv"));

	windows_error s(67);

	std::cout << windows_error(6) << std::endl << s << std::endl;
}
