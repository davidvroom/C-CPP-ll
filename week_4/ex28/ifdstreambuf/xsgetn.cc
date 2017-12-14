#include "ifdstreambuf.ih"

streamsize IFdStreambuf::xsgetn(char *dest, streamsize n)
{
	if (n == 0)
		return 0;

	int nBuffer = in_avail(); // number of retrievable chars in buffer

	if (nBuffer > n)	      // more chars in buffer than requested
		nBuffer = n;
							  // copy what's available in own buffer
	memcpy(dest, gptr(), nBuffer);
	gbump(nBuffer);           // update pointer
							  // try to read some more from FD
	int nFile = read(d_fd, dest + nBuffer, n - nBuffer);

	return nBuffer + nFile;
}
