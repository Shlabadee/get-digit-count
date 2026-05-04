#include <stdint.h>

unsigned int get_i32_count(int32_t n)
{
	uint32_t x = (n < 0) ? -(uint32_t)n : (uint32_t)n;

	if (x >= UINT32_C(100000))
	{
		if (x >= UINT32_C(10000000))
		{
			if (x >= UINT32_C(1000000000))
				return 10;

			if (x >= UINT32_C(100000000))
				return 9;

			return 8;
		}
		else
		{
			if (x >= UINT32_C(1000000))
				return 7;

			return 6;
		}
	}
	else
	{
		if (x >= UINT32_C(100))
		{
			if (x >= UINT32_C(10000))
				return 5;

			if (x >= UINT32_C(1000))
				return 4;

			return 3;
		}
		else
		{
			if (x >= UINT32_C(10))
				return 2;

			return 1;
		}
	}
}

unsigned int get_i64_count(int64_t n)
{
	uint64_t x = (n < 0) ? -(uint64_t)n : (uint64_t)n;

	if (x >= UINT64_C(10000000000))
	{
		if (x >= UINT64_C(100000000000000))
		{
			if (x >= UINT64_C(10000000000000000))
			{
				if (x >= UINT64_C(1000000000000000000))
					return 19;

				if (x >= UINT64_C(100000000000000000))
					return 18;

				return 17;
			}
			else
			{
				if (x >= UINT64_C(1000000000000000))
					return 16;

				return 15;
			}
		}
		else
		{
			if (x >= UINT64_C(1000000000000))
			{
				if (x >= UINT64_C(10000000000000))
					return 14;

				return 13;
			}
			else
			{
				if (x >= UINT64_C(100000000000))
					return 12;

				if (x >= UINT64_C(10000000000))
					return 11;

				return 10;
			}
		}
	}
	else
	{
		if (x >= UINT64_C(100000))
		{
			if (x >= UINT64_C(10000000))
			{
				if (x >= UINT64_C(1000000000))
					return 10;

				if (x >= UINT64_C(100000000))
					return 9;

				return 8;
			}
			else
			{
				if (x >= UINT64_C(1000000))
					return 7;

				return 6;
			}
		}
		else
		{
			if (x >= UINT64_C(100))
			{
				if (x >= UINT64_C(10000))
					return 5;

				if (x >= UINT64_C(1000))
					return 4;

				return 3;
			}
			else
			{
				if (x >= UINT64_C(10))
					return 2;

				return 1;
			}
		}
	}
}

unsigned int get_u64_count(uint64_t x)
{
	if (x >= UINT64_C(10000000000))
	{
		if (x >= UINT64_C(100000000000000))
		{
			if (x >= UINT64_C(10000000000000000))
			{
				if (x >= UINT64_C(10000000000000000000))
					return 20;

				if (x >= UINT64_C(1000000000000000000))
					return 19;

				if (x >= UINT64_C(100000000000000000))
					return 18;

				return 17;
			}
			else
			{
				if (x >= UINT64_C(1000000000000000))
					return 16;

				if (x >= UINT64_C(100000000000000))
					return 15;

				return 14;
			}
		}
		else
		{
			if (x >= UINT64_C(1000000000000))
			{
				if (x >= UINT64_C(10000000000000))
					return 14;

				return 13;
			}
			else
			{
				if (x >= UINT64_C(100000000000))
					return 12;

				if (x >= UINT64_C(10000000000))
					return 11;

				return 10;
			}
		}
	}
	else
	{
		if (x >= UINT64_C(100000))
		{
			if (x >= UINT64_C(10000000))
			{
				if (x >= UINT64_C(1000000000))
					return 10;

				if (x >= UINT64_C(100000000))
					return 9;

				return 8;
			}
			else
			{
				if (x >= UINT64_C(1000000))
					return 7;

				return 6;
			}
		}
		else
		{
			if (x >= UINT64_C(100))
			{
				if (x >= UINT64_C(10000))
					return 5;

				if (x >= UINT64_C(1000))
					return 4;

				return 3;
			}
			else
			{
				if (x >= UINT64_C(10))
					return 2;

				return 1;
			}
		}
	}
}
