#include "ifdstreambuf.ih"

streamsize IFdStreambuf::xsgetn(char *dest, streamsize n)
{
	int nread = 0;

	while (n)
	{
		if (!in_avail())
			if (underflow() == EOF)
				break;

		int avail = in_avail();
		if (avail > n)
			avail = n;
		memcpy(dest + nread, gptr(), avail);
		gbump(avail);
		nread += avail;
		n -= avail;
	}
	cout << "xsgetn\n";
	return nread;
}