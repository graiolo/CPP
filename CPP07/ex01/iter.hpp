#ifndef ITER_HPP
# define ITER_HPP

template<typename P, typename T, typename F>
void	iter(P *pointer, T len, F fun) {
	if (!pointer)
		return ;
	for (T i = 0; i < len; i++)
		fun(pointer[i]);
}

#endif