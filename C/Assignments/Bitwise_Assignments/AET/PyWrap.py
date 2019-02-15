#Interface code in Python

import ctypes
_Bitwise_Ops =ctypes.CDLL('/home/avinash/svn_wc/cr21_sy.avinash/C/Assignments/Bitwise_Assignments/libshared.so')

#Arguements of the bitwise functions
_Bitwise_Ops.bit_swap.argtypes = (ctypes.c_void_p, ctypes.c_int, ctypes.c_int)
_Bitwise_Ops.bit_swap_num.argtypes = (ctypes.c_void_p, ctypes.c_void_p, ctypes.c_int, ctypes.c_int)
_Bitwise_Ops.bit_copy.argtypes = (ctypes.c_void_p, ctypes.c_void_p, ctypes.c_int, ctypes.c_int, ctypes.c_int)
_Bitwise_Ops.even_bit_toggle.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.odd_bit_toggle.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.left_rotate_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.left_rotate_n_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.right_rotate_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.right_rotate_n_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.count_set_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.count_clear_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.count_leading_set_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.count_leading_clear_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.count_trailing_set_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.count_trailing_clear_bits.argtypes = (ctypes.c_void_p,)
_Bitwise_Ops.setbits.argtypes = (ctypes.c_void_p, ctypes.c_int, ctypes.c_int, ctypes.c_void_p)
_Bitwise_Ops.invert.argtypes = (ctypes.c_void_p, ctypes.c_int, ctypes.c_int)
_Bitwise_Ops.integer_valid.argtypes = (ctypes.c_int, )
_Bitwise_Ops.pos_validation.argtypes = (ctypes.c_int, )

#Return type of the bitwise function
_Bitwise_Ops.bit_swap.restype = ctypes.c_uint
_Bitwise_Ops.bit_swap_num.restype = ctypes.c_uint
_Bitwise_Ops.bit_copy.restype = ctypes.c_uint
_Bitwise_Ops.even_bit_toggle.restype = ctypes.c_uint
_Bitwise_Ops.odd_bit_toggle.restype = ctypes.c_uint
_Bitwise_Ops.left_rotate_bits.restype = ctypes.c_uint
_Bitwise_Ops.left_rotate_n_bits.restype = ctypes.c_uint
_Bitwise_Ops.right_rotate_bits.restype = ctypes.c_uint
_Bitwise_Ops.right_rotate_n_bits.restype = ctypes.c_uint
_Bitwise_Ops.count_set_bits.restype = ctypes.c_uint
_Bitwise_Ops.count_clear_bits.restype = ctypes.c_uint
_Bitwise_Ops.count_leading_set_bits.restype = ctypes.c_uint
_Bitwise_Ops.count_trailing_set_bits.restype = ctypes.c_uint
_Bitwise_Ops.count_trailing_clear_bits.restype = ctypes.c_uint
_Bitwise_Ops.count_leading_clear_bits.restype = ctypes.c_uint
_Bitwise_Ops.setbits.restype = ctypes.c_uint
_Bitwise_Ops.invert.restype = ctypes.c_uint
_Bitwise_Ops.integer_valid.restype = ctypes.c_uint
_Bitwise_Ops.pos_validation.restype = ctypes.c_uint

#:_Bitwise_Ops.func_name.argtypes = ()
global _Bitwise_Ops
global result

#Start of wrapper functions for bitwise operations
def bit_swap(num, s_pos, d_pos) :
	print("inside wrapper function")
	print("Numbers", num, s_pos, d_pos)
	result = _Bitwise_Ops.bit_swap(num, s_pos, d_pos)
	return int(result)

def bit_swap_num(dest, src, s_pos, d_pos) :
	return int(_Bitwise_Ops.bit_swap_num(dest, src, s_pos, d_pos))

def bit_copy(snum, dnum, n, s, d) :
	return int(_Bitwise_Ops.bit_copy(snum, dnum, n, s, d))

def even_bit_toggle(num) :
	return int(_Bitwise_Ops.even_bit_toggle(num))

def odd_bit_toggle(num) :
	return int(_Bitwise_Ops.odd_bit_toggle(num))

def left_rotate_bits(num) :
	return int(_Bitwise_Ops.left_rotate_bits(num))

def right_rotate_bits(num) :
	return int(_Bitwise_Ops.right_rotate_bits(num))

def left_rotate_n_bits(num, n) :
	return int(_Bitwise_Ops.left_rotate_n_bits(num, n))

def right_rotate_n_bits(num, n) :
	return int(_Bitwise_Ops.right_rotate_n_bits(num, n))

def count_set_bits(num) :
	return int(_Bitwise_Ops.count_set_bits(num))

def count_clear_bits(num) :
	return int(_Bitwise_Ops.count_clear_bits(num))

def count_leading_set_bits(num) :
	return int(_Bitwise_Ops.count_leading_set_bits(num))

def count_leading_clear_bits(num) :
	return int(_Bitwise_Ops.count_leading_clear_bits(num))

def count_trailing_set_bits(num) :
	return int(_Bitwise_Ops.count_trailing_set_bits(num))

def count_trailing_clear_bits(num) :
	return int(_Bitwise_Ops.count_trailing_clear_bits(num))

def setbits(src, dest, pos, num) :
	return int(_Bitwise_Ops.setbits(src, dest, pos, num))

def invert(src, pos, num) :
	return int(_Bitwise_Ops.invert(src, pos, num))

def integer_valid(src) :
	return int(_Bitwise_Ops.integer_valid(src))

def pos_validation(src) :
	return int(_Bitwise_Ops.pos_validation(src))
#End of bitwise wrapper functions


