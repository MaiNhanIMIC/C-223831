int get_len_str(char* str)
{
	int index = 0;
	while (str[index] != 0)
	{
		index++;
	}
	return index;
}

char* search_str(char* str, char* key)
{
	int str_len = get_len_str(str);
	int key_len = get_len_str(key);
	for (int i = 0; i < str_len; i++)
	{
		int j = 0;
		for (; j < key_len; j++)
		{
			if (str[i + j] != key[j])
				break;
		}
		if (j >= key_len)
			return str + i;
	}
	return 0;
}