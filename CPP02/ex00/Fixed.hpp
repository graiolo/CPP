/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:40:34 by graiolo           #+#    #+#             */
/*   Updated: 2023/07/28 22:10:43 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
	
	public:
		Fixed ( void );
		Fixed ( const Fixed &init);
		~Fixed (void );

		Fixed&	operator=(const Fixed &raw);

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
};

#endif //fixed