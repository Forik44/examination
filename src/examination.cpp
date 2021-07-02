#include <iostream>

#include "Array.h"

using namespace std;

class File
{
public:
	File(char name[100], char expansion[10], int size)
	{
		_name = name;
		_expansion = expansion;
		_size = size;
	}
	char* _name;
	char* _expansion;
	int _size;
};

class Conductor
{
public:
	Conductor(Array<File>& files)
	{
		_files = files;
	}
	void sortForName()
	{
		for (size_t i = 0; i < _files.size(); i++)
		{
			for (size_t j = i; j < _files.size(); j++)
			{
				if (_files[i]._name > _files[j]._name)
				{
					auto tmp = _files[i];
					_files[i] = _files[j];
					_files[j] = tmp;
				}

			}
		}
	}
	void rsortForName()
	{
		for (size_t i = 0; i < _files.size(); i++)
		{
			for (size_t j = i; j < _files.size(); j++)
			{
				if (_files[i]._name < _files[j]._name)
				{
					auto tmp = _files[i];
					_files[i] = _files[j];
					_files[j] = tmp;
				}

			}
		}
	}

	void sortForExpention()
	{
		for (size_t i = 0; i < _files.size(); i++)
		{
			for (size_t j = i; j < _files.size(); j++)
			{
				if (_files[i]._expansion > _files[j]._expansion)
				{
					auto tmp = _files[i];
					_files[i] = _files[j];
					_files[j] = tmp;
				}

			}
		}
	}
	void rsortForExpention()
	{
		for (size_t i = 0; i < _files.size(); i++)
		{
			for (size_t j = i; j < _files.size(); j++)
			{
				if (_files[i]._expansion < _files[j]._expansion)
				{
					auto tmp = _files[i];
					_files[i] = _files[j];
					_files[j] = tmp;
				}

			}
		}
	}
	void sortForSize()
	{
		for (size_t i = 0; i < _files.size(); i++)
		{
			for (size_t j = i; j < _files.size(); j++)
			{
				if (_files[i]._size > _files[j]._size)
				{
					auto tmp = _files[i];
					_files[i] = _files[j];
					_files[j] = tmp;
				}
				
			}
		}
	}
	void rsortForSize()
	{
		for (size_t i = 0; i < _files.size(); i++)
		{
			for (size_t j = i; j < _files.size(); j++)
			{
				if (_files[i]._size < _files[j]._size)
				{
					auto tmp = _files[i];
					_files[i] = _files[j];
					_files[j] = tmp;
				}

			}
		}
	}
	Array<File> getVec()
	{
		return _files;
	}
private:
	Array<File> _files;
};

void Print(Array<File> vec)
{
	for (auto el : vec)
	{
		cout << "Имя: " << el._name << " Расширение: " << el._expansion << " Размер: " << el._size << endl;
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	char name[100] = "Abricos";
	char exp[15] = "pdf";
	File file1(name, exp, 1000);
	char name2[100] = "Quick";
	char exp2[15] = "jpeg";
	File file2(name2, exp2, 1000);
	char name3[100] = "Bvzlomat'";
	char exp3[15] = "bat";
	File file3(name3, exp3, 1000);

	Array<File> vec;

	Print(vec);
	/*Conductor con(vec);*/
	con.sortForName();
	vec = con.getVec();
	cout << "Сортировка по имени:\n " << endl;
	Print(vec);
	con.rsortForName();
	vec = con.getVec();
	cout << "Сортировка по имени реверсивная:\n " << endl;
	Print(vec);
	con.sortForExpention();
	vec = con.getVec();
	cout << "Сортировка по расширению:\n " << endl;
	Print(vec);
	con.rsortForExpention();
	vec = con.getVec();
	cout << "Сортировка по расширению реверсивная:\n " << endl;
	Print(vec);
	con.sortForSize();
	vec = con.getVec();
	cout << "Сортировка по размеру: \n" << endl;
	Print(vec);
	con.rsortForSize();
	vec = con.getVec();
	cout << "Сортировка по размеру реверсивная: \n"<< endl;
	Print(vec);

}

