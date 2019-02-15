#Function to read test case inputs for the API from test_cases.xls

import xlrd

loc =('/home/monalisa/Python-3.6.0/My_TestFrame/wrapper_trial/bitwise/Test_Cases.xlsx')

#wb = xlrd.open_workbook(loc)
#sheet = wb.sheet_by_index(0)

		
class Excel_Parser (object) :
	def __init__(self, loc) :
		self.wb = xlrd.open_workbook(loc)
		self.sheet = self.wb.sheet_by_index(0)
 
	def read_cel_val(self, row, col) : 
		num = self.sheet.cell_value(row, col)
		print(num)
		return int(num)
