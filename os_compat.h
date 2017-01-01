#ifndef _OS_COMPAT_H_
#define _OS_COMPAT_H_

#ifdef __NetBSD__
long long strtonum(const char *, long long, long long, const char **);
#endif

#ifndef __OpenBSD__
void *reallocarray(void *, size_t, size_t);
#endif

#endif /* _OS_COMPAT_H_ */
