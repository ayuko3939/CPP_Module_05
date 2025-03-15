/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:09:19 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:38:50 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
  private:

  public:
	Intern();
	Intern(const Intern &src);
	~Intern();

	AForm *makeForm(std::string formName, std::string formTarget);
	
	Intern &operator=(const Intern &src);
};

#endif