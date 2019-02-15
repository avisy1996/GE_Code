#APIs for invoking C functions through Python Interface "PyWrap"

import PyWrap
import Read_InPut  
Excel_Obj =Read_InPut.Excel_Parser('/home/avinash/svn_wc/cr21_sy.avinash/C/Assignments/Bitwise_Assignments/AET/Test_Cases.xlsx')

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	s_pos = Excel_Obj.read_cel_val(row, 3)
	d_pos = Excel_Obj.read_cel_val(row, 4)
	print(s_num, s_pos, d_pos)
	result = PyWrap.bit_swap(s_num, s_pos, d_pos)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	d_num = Excel_Obj.read_cel_val(row, 2)
	s_pos = Excel_Obj.read_cel_val(row, 3)
	d_pos = Excel_Obj.read_cel_val(row, 4)
	print(d_num, s_num, s_pos, d_pos)
	result = PyWrap.bit_swap_num(d_num, s_num, s_pos, d_pos)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	d_num = Excel_Obj.read_cel_val(row, 2)
	s_pos = Excel_Obj.read_cel_val(row, 3)
	d_pos = Excel_Obj.read_cel_val(row, 4)
	num = Excel_Obj.read_cel_val(row, 5)
	print(d_num, s_num, num, s_pos, d_pos)
	result = PyWrap.bit_copy(s_num, d_num, num, s_pos, d_pos)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	d_num = Excel_Obj.read_cel_val(row, 2)
	s_pos = Excel_Obj.read_cel_val(row, 3)
	num = Excel_Obj.read_cel_val(row, 5)
	print(d_num, s_num, num, s_pos)
	result = PyWrap.setbits(d_num, s_num, s_pos, num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	s_pos = Excel_Obj.read_cel_val(row, 3)
	num = Excel_Obj.read_cel_val(row, 5)
	print(s_num, s_pos, num)
	result = PyWrap.invert(s_num, s_pos, num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	num = Excel_Obj.read_cel_val(row, 5)
	print(s_num, num)
	result = PyWrap.right_rotate_n_bits(s_num, num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	num = Excel_Obj.read_cel_val(row, 5)
	print(s_num, num)
	result = PyWrap.left_rotate_n_bits(s_num, num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.even_bit_toggle(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.odd_bit_toggle(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.left_rotate_bits(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.right_rotate_bits(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.count_set_bits(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.count_clear_bits(s_num)
	print(result)
	row += 1
	
row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.count_leading_clear_bits(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.count_trailing_clear_bits(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.count_leading_set_bits(s_num)
	print(result)
	row += 1

row = 1
while(row < Excel_Obj.sheet.nrows) :
	s_num = Excel_Obj.read_cel_val(row, 1)
	print(s_num)
	result = PyWrap.count_trailing_set_bits(s_num)
	print(result)
	row += 1

result = PyWrap.integer_valid(src)

result = PyWrap.pos_validation(src)	
