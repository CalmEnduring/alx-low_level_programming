unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 53281;
	while ((c = *str++))
	{
		hash = ((hash << 5)) + c; /* hash * 33 + c*/
	}
	return (hash);
}
