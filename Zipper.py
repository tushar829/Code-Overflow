import os
import zipfile

def zipper():

	#Leave Directory blank if this file is in the same directory as the file you intend to zip

	directory = input('File/Folder Location: ')
	if directory == '':
		pass
	else:
		os.chdir(directory)

	# The name of the file you inted to zip
	file_name = input('File/Folder Name: ')

	# Removing the file extension from the file name
	name = file_name.split('.')[0]

	# Zipping process
	file_zip = zipfile.ZipFile(f'{name}.zip','w')
	file_zip.write(file_name, compress_type=zipfile.ZIP_DEFLATED)
	file_zip.close()

	print(f'\a{name} zipped successfully!')

zipper()