import os
import zipfile

def unzipper():
	# Please fill in the directory 
	directory = input('File/Folder Location: ')
	if directory == '':
		pass
	else:
		os.chdir(directory)

	# The name of the file you inted to unzip
	file_name = input('File/Folder Name: ')

	# Removing the file extension from the file name
	name = file_name.split('.')[0]

	# Unzipping process
	with zipfile.ZipFile(f'{directory}/{file_name}', 'r') as zip_ref:
		zip_ref.extractall(directory)

	print(f'\a{name} successfully unzipped to {directory}')

unzipper()
