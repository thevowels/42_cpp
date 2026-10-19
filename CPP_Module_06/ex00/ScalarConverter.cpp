#include "ScalarConverter.hpp"

typedef void	(*PrintFunc)(const std::string &);

ScalarConverter::ScalarConverter()
{
	std::cout << "Scalar Converter Default Constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
	std::cout << "Scaler Converter Copy Constructor" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Scalar Converter Default Destructor" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	std::cout << "SCaler Converter copy constructor" << std::endl;
	(void)other;
	return (*this);
}

static bool	isPseudo(const std::string &str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf"
		|| str == "+inf" || str == "nan")
		return (true);
	return (false);
}

// this doesn't means char datatype but (ascii, not numeric)
static bool	isChar(const std::string &str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return (true);
	return (false);
}

static bool	isInt(const std::string &str)
{
	size_t	start_index;
	size_t	strLength;

	start_index = 0;
	strLength = str.length();
	if (strLength == 0)
		return (false);
	if (str[0] == '+' || str[0] == '-')
		start_index = 1;
	if (strLength == start_index)
		return (false);
	while (start_index < strLength)
	{
		if (str[start_index] < '0' || str[start_index] > '9')
			return (false);
		start_index++;
	}
	return (true);
}
static bool	checkDot(const std::string &str, size_t strLength)
{
	size_t	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '.')
		return (false);
	while (i < strLength)
	{
		if (str[i] == '.')
			break ;
		i++;
	}
	if (i == strLength)
		return (false);
	else
		i++;
	if (str[i] == 'f' || str[i] == 'F')
		return (false);
	while (i < strLength)
	{
		if (str[i] == '.')
			return (false);
		i++;
	}
	return (true);
}

static bool	isFloat(const std::string &str)
{
	size_t	strLength;
	size_t	i;

	strLength = str.length();
	i = 0;
	if (strLength < 4)
		return (false);
	if (str[strLength - 1] != 'f' && str[strLength - 1] != 'F')
		return (false);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (i < strLength - 1)
	{
		if (std::isdigit(str[i]) || str[i] == '.')
			i++;
		else
			return (false);
	}
	return (checkDot(str, strLength));
}

static bool	isDouble(const std::string &str)
{
	size_t	strLength;
	size_t	i;
	size_t	dotCount;

	strLength = str.length();
	i = 0;
	dotCount = 0;
	if (strLength < 3)
		return (false);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '.' || str[strLength - 1] == '.')
		return (false);
	while (i < strLength)
	{
		if (!(std::isdigit(str[i]) || str[i] == '.'))
			return (false);
		if (str[i] == '.')
		{
			if (dotCount > 0)
				return (false);
			dotCount += 1;
		}
		i++;
	}
	return (true);
}

static e_type	detectType(const std::string &str)
{
	if (isPseudo(str))
		return (TYPE_PSEUDO);
	if (isChar(str))
		return (TYPE_CHAR);
	if (isInt(str))
		return (TYPE_INT);
	if (isFloat(str))
		return (TYPE_FLOAT);
	if (isDouble(str))	
		return (TYPE_DOUBLE);
	return (TYPE_INVALID);
}


static void	charLine(const double d)
{
	if (d < CHAR_MIN || d > CHAR_MAX || std::isnan(d))
		std::cout << "char: impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		if(std::isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}

static void	intLine(const double d)
{
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
}

static void floatLine(const double d)
{
	std::cout<< "float: " << std::fixed<< std::setprecision(1) << static_cast<float>(d) << 'f'<< std::endl;
}

static void doubleLine(const double d)
{
	std::cout << "double: " <<std::fixed << std::setprecision(1)<<  d << std::endl;
}
static void printNumeric(const std::string &str)
{
	double	d = std::strtod(str.c_str(), NULL);
	charLine(d);
	intLine(d);
	floatLine(d);
	doubleLine(d);
}
static void	printChar(const std::string &str)
{
	char	c;
	double	d;

	c = str[0];
	d = static_cast<double>(c);
	intLine(d);
	floatLine(d);
	doubleLine(d);
}

// static void	printInt(const std::string &str)
// {
// 	double	val;

// 	val = std::strtod(str.c_str(), NULL);
// 	charLine(val);
// 	intLine(val);
// 	floatLine(val);
// 	doubleLine(val);
// }

// static void	printFloat(const std::string &str)
// {
// 	double	val;

// 	val = std::strtod(str.c_str(), NULL);
// 	charLine(val);
// 	intLine(val);
// 	floatLine(val);
// 	doubleLine(val);
// }

// static void	printDouble(const std::string &str)
// {
// 	double	val;

// 	val = std::strtod(str.c_str(), NULL);
// 	charLine(val);
// 	intLine(val);
// 	floatLine(val);
// 	doubleLine(val);
// }

static void	printPseudo(const std::string &str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}
static void	printInvalid(void)
{
	std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(const std::string &str)
{
	e_type parsedType = detectType(str);
	// PrintFunc printers[6] = {&printChar, &printInt, &printFloat, &printDouble,
	// 	&printPseudo, &printInvalid};
	if(parsedType == TYPE_PSEUDO)
		printPseudo(str);
	else if(parsedType == TYPE_INVALID)
		printInvalid();
	else if(parsedType == TYPE_CHAR)
		printChar(str);
	else
		printNumeric(str);
		
}