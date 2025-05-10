#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm(cpy) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy) {
    this->_target = cpy._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	this->AForm::execute(executor);
    ofstream file((this->_target + "_shrubbery").c_str());

    file << "              _{\\ _{\\{\\/}/}/}__\n"
            "             {/{/\\}{/{/\\}(\\}{/\\} _\n"
            "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
            "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
            "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
            "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
            "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
            "      _{\\{/{\\{/{/\\}\\})\\}{/\\}\n"
            "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
            "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
            "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
            "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
            "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
            "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
            "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
            "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
            "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
            "              {){/ {\\/}{\\/} \\}\\}\n"
            "              (_)  \\.-'.-/\n"
            "          __...--- |'-.-'| --...__\n"
            "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
            " -\"    ' .  . '    |.'-._| '  . .  '   \n"
            " .  '-  '    .--'  | '-.'|    .  '  . '\n"
            "          ' ..     |'-_.-|\n"
            "  .  '  .       _.-|-._ -|-._  .  '  .\n"
            "              .'   |'- .-|   '.\n"
            "  ..-'   ' .  '.   `-._.-   .'  '  - .\n"
            "   .-' '        '-..-'     '  .\n"
            "        .      ~,\n"
            "    .       .   |\\   .    ' '-.\n" << endl;
    file.close();
    
}