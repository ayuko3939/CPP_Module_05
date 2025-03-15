/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:28:38 by ohasega           #+#    #+#             */
/*   Updated: 2024/12/21 18:39:13 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

// Color Paretto
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define INDIGO "\033[38;5;025m"
# define LIGHTGREEN "\033[38;5;082m"
# define END "\033[0m"

class AForm;

class Bureaucrat
{
  private:
	const std::string	_name;
	int			_grade;

  public:
	Bureaucrat();
	Bureaucrat(std::string name , int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();
	
	Bureaucrat &operator=(const Bureaucrat &src);

	void setGrade(int grade);
	const std::string &getName() const;
	int getGrade() const;
	
	void upGrade(int i);
	void downGrade(int i);
	void signForm(AForm &form) const;
	void executeForm(AForm const & form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &p);

#endif