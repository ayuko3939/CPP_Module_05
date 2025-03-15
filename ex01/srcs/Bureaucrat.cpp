/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:28:38 by ohasega           #+#    #+#             */
/*   Updated: 2024/12/15 14:21:03 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ===================== Constructor & Destructor =====================

Bureaucrat::Bureaucrat()
: _name("default"), _grade(LOWEST_GRADE)
{
	// std::cout << INDIGO << "Bureaucrat default constructor was called" << END << std::endl;
}

Bureaucrat::Bureaucrat(std::string name , int grade)
: _name(name), _grade(LOWEST_GRADE)
{
	// std::cout << INDIGO <<  "Bureaucrat " << _name << " constructor was called" << END <<  std::endl;
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
: _name(src._name), _grade(src._grade)
{
	// std::cout << INDIGO <<  "Bureaucrat " << src._name << " copy constructor was called" << END <<  std::endl;

}

Bureaucrat::~Bureaucrat()
{
	// std::cout << INDIGO <<  "Bureaucrat " << _name << " destructor was called" << END <<  std::endl;
}

// ============================= Operator =============================

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	// std::cout << INDIGO <<  "Bureaucrat " << src._name << " copy assignment operator called" << END <<  std::endl;
	if (&src != this)
	{
		_grade = src._grade;
	}
	return (*this);
}

// ============================== Setter ==============================

void Bureaucrat::setGrade(int grade)
{
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade = grade;
}

// ============================== Getter ==============================

const std::string &Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

// ========================== Public function =========================

void Bureaucrat::upGrade(int i)
{
	if (_grade - i < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	else
		_grade -= i;
}

void Bureaucrat::downGrade(int i)
{
	if (_grade + i > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade += i;
}

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << GREEN << _name << " signed " << form.getName() << "." << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED <<  _name << " couldn't sign " << form.getName()
		<< " because " << e.what() << END << std::endl;
	}
}

// ============================= Exception ============================

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("This grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("This grade is too low!");
}

// =============================== other ==============================

std::ostream &operator<<(std::ostream &os, const Bureaucrat &p)
{
	os << p.getName() << ", bureaucrat grade " << p.getGrade() << ".";
	return (os);
}
