/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:18:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 14:25:04 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// ===================== Constructor & Destructor =====================

AForm::AForm()
: _name("default"), _isSigned(false), _signGrade(LOWEST_GRADE), _excuteGrade(LOWEST_GRADE)
{
	// std::cout << INDIGO << "AForm default constructor was called" << END << std::endl;
}

AForm::AForm(std::string name, int signGrade, int excuteGrade)
: _name(name), _isSigned(false), _signGrade(signGrade), _excuteGrade(excuteGrade)
{
	// std::cout << INDIGO << "AForm " << _name << " constructor was called" << END << std::endl;
	if (signGrade < HIGHEST_GRADE || excuteGrade < HIGHEST_GRADE)
		throw (AForm::GradeTooHighException());
	else if (signGrade > LOWEST_GRADE || excuteGrade > LOWEST_GRADE)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm &src)
: _name(src._name), _isSigned(false), _signGrade(src._signGrade), _excuteGrade(src._excuteGrade)
{
	// std::cout << INDIGO << "AForm " << src._name << " copy constructor was called" << END << std::endl;
}

AForm::~AForm()
{
	// std::cout << INDIGO << "AForm " << _name << " destructor was called" << END << std::endl;
}

// ============================= Operator =============================

AForm &AForm::operator=(const AForm &src)
{
	// std::cout << INDIGO << "AForm " << src._name << " copy assignment operator called" << END << std::endl;
	if (&src != this)
	{
		_isSigned = src._isSigned;
	}
	return (*this);
}

// ============================== Getter ==============================

const std::string &AForm::getName() const
{
	return (_name);
}

bool AForm::getSignStatus() const
{
	return (_isSigned);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getExcuteGrade() const
{
	return (_excuteGrade);
}

// ========================== Public function =========================

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (_isSigned == true)
		throw AForm::AlreadySignedException();
	else if (_signGrade < bureaucrat.getGrade())
		throw AForm::GradeTooLowException();
	else
		_isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (getSignStatus() == false)
		throw (NotSignedException());
	else if (getExcuteGrade() < executor.getGrade())
		throw (GradeTooLowException());
	else
		this->beExecuted();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("too high grade!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("too low grade!");
}

const char *AForm::AlreadySignedException::what() const throw()
{
	return ("this form is already signed!");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("this form is not signed!");
}
// =============================== other ==============================

std::ostream &operator<<(std::ostream &os, const AForm &p)
{
	os << "Form name        : " << p.getName() << "\n"
	   << "sign status      : " << (p.getSignStatus() ? "signed" : "yet") << "\n"
	   << "grade for sign   : " << p.getSignGrade() << "\n"
	   << "grade for excute : " << p.getExcuteGrade() << "\n";
	return (os);
}
