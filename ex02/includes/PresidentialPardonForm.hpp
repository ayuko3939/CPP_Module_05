/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:25:03 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:39:17 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
  private:
	std::string	_target;
	PresidentialPardonForm();

  protected:
	void beExecuted() const;

  public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	~PresidentialPardonForm();
	
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

	const std::string &getTarget() const;
	
	static const int	signGrade = 25;
	static const int	excuteGrade = 5;
};

#endif