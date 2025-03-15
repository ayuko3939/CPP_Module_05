/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:24:40 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 16:28:19 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

// ===================== Constructor & Destructor =====================

// private
ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", signGrade, excuteGrade), _target("Default")
{
	// std::cout << "ShrubberyCreationForm default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", signGrade, excuteGrade), _target(target)
{
	// std::cout << "ShrubberyCreationForm default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
: AForm(src), _target(src._target)
{
	// std::cout << "ShrubberyCreationForm " << src._name << " copy constructor was called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm " << _name << " destructor was called" << std::endl;
}

// ============================= Operator =============================

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	// std::cout << "ShrubberyCreationForm " << src._name << " copy assignment operator called" << std::endl;
	if (&src != this)
	{
		AForm::operator=(src);
		_target = src._target;
	}
	return (*this);
}

// ============================== Getter ==============================

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

// ======================== Protected function ========================

void ShrubberyCreationForm::beExecuted() const
{
	std::string filename = (_target + "_shrubbery");

	std::ofstream fout(filename.c_str());
	if (!fout.is_open())
	{
		std::cerr << RED << "Error : open outfile" << END << std::endl;
		return ;
	}
	fout << _shrubbery << std::endl;
	fout.close();
}

const std::string ShrubberyCreationForm::_shrubbery =
"\n"
"              &&&    &&  &&              &&&   &&  &&   &&         &&&   &&  &&  &&&\n"
"           && &\\/&\\|& ()|/ @, &&      && &\\/&\\|& ()|/ @, &&      && &\\/&\\|& ()|/ @, &&\n"
"        && &\\/(/&/&||/& /_/_)&       && &\\/(/&/&||/& /_/_)&     && &\\/(/&/&||/& /_/_)&\n"
"        &() &\\/&|()|/&\\/ '%\" &      &() &\\/&|()|/&\\/ '%\" &       &() &\\/&|()|/&\\/ '%\" &\n"
"       &_\\_&&_\\ |& |&&/&__%_/_&    &_\\_&&_\\ |& |&&/&__%_/_&     &_\\_&&_\\ |& |&&/&__%_/_&\n"
"    &&   && & &| &| /& & % ()&& &      && & &| &| /& & % ()&&   && & &| &| /& & % ()&\n"
"       ()&_---()&\\&\\|&&-&&--%-()~     ()&_---()&\\&\\|&&-&&--%   ()&_---()&\\&\\|&&-&&\n"
"             &&   \\|||                     &&   \\|||                     \\|||/\n"
"                   |||                          \\|||                      |||\n"
"                   |||                          |||                        |||\n"
"                   |||                          |||                        |||\n"
"             , -=-~  .-^- _              , -=-~  .-^- _              , -=-~  .-^- _\n"
"\n";
