#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	*this = copy;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

// Getters
std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

// Setters


// Member Functions
bool ShrubberyCreationForm::checkIfFileExist(std::string filename)
{
	std::ifstream file(filename.c_str());

	return file.good();
}


bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	if (AForm::execute(executor))
	{
		std::string filename = this->getTarget() + "_shrubbery";
		std::ofstream outfile(filename.data());
		outfile << "                     ; ; ;" << std::endl;
		outfile << "                   ;        ;  ;     ;;    ;" << std::endl;
		outfile << "                ;                 ;         ;  ;" << std::endl;
		outfile << "                                ;" << std::endl;
		outfile << "                             ;                ;;" << std::endl;
		outfile << "               ;          ;            ;              ;" << std::endl;
		outfile << "               ;            ';,        ;               ;" << std::endl;
		outfile << "               ;              'b      *" << std::endl;
		outfile << "                ;              '$    ;;                ;;" << std::endl;
		outfile << "               ;    ;           $:   ;:               ;" << std::endl;
		outfile << "            ;;      ;  ;;      *;  @):        ;   ; ;" << std::endl;
		outfile << "                          ;     :@,@):   ,;**:'   ;" << std::endl;
		outfile << "             ;      ;,         :@@*: ;;**'      ;   ;" << std::endl;
		outfile << "                       ';o;    ;:(@';@*'  ;" << std::endl;
		outfile << "               ;  ;       'bq,;;:,@@*'   ,*      ;  ;" << std::endl;
		outfile << "                          ,p$q8,:@)'  ;p*'      ;" << std::endl;
		outfile << "                   ;     '  ; '@@Pp@@*'    ;  ;" << std::endl;
		outfile << "                    ;  ; ;;    Y7'.'     ;  ;" << std::endl;
		outfile << "                              :@):." << std::endl;
		outfile << "                             .:@:'." << std::endl;
		outfile << "                           .::(@:." << std::endl;
		outfile.close();
		std::cout << "File " << this->getTarget() << " created." << std::endl;
	} else {
		throw AForm::FormNotSigned();
	}
	return true;
  }
