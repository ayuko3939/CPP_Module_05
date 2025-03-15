/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:24:40 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:39:28 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
  private:
	std::string	_target;
	static const std::string _shrubbery;
	ShrubberyCreationForm();

  protected:
	void beExecuted() const;

  public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

	const std::string &getTarget() const;

	static const int	signGrade = 145;
	static const int	excuteGrade = 137;
};

#endif