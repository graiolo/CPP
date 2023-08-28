/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:40:34 by graiolo           #+#    #+#             */
/*   Updated: 2023/08/01 01:44:45 by graiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 12;
	
	public:
		Fixed ( void );
		Fixed ( const int raw);
		Fixed ( const float raw);
		Fixed ( const Fixed &raw);
	
		~Fixed (void );

		Fixed&	operator=(const Fixed &raw);

		bool	operator>(const Fixed &raw);
		bool	operator<(const Fixed &raw);
		bool	operator>=(const Fixed &raw);
		bool	operator<=(const Fixed &raw);
		bool	operator==(const Fixed &raw);
		bool	operator!=(const Fixed &raw);

		Fixed	operator+(const Fixed &raw);
		Fixed	operator-(const Fixed &raw);
		Fixed	operator*(const Fixed &raw);
		Fixed	operator/(const Fixed &raw);

		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed&	operator++();
		Fixed&	operator--();

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		static Fixed&	min( Fixed &first, Fixed &second);
		static const Fixed&	min( const Fixed &first, const Fixed &second);
		static Fixed&	max( Fixed &first, Fixed &second);
		static const Fixed&	max( const Fixed &first, const Fixed &second);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &raw);

#endif //fixed