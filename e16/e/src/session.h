/*
 * Copyright (C) 2000-2006 Carsten Haitzler, Geoff Harrison and various contributors
 * Copyright (C) 2004-2006 Kim Woelders
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies of the Software, its documentation and marketing & publicity
 * materials, and acknowledgment shall be given in the documentation, materials
 * and software packages that this Software was used.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef _SESSION_H_
#define _SESSION_H_

/* session.c */
#define EEXIT_EXIT      0
#define EEXIT_ERROR     1
#define EEXIT_LOGOUT    2
#define EEXIT_RESTART   3
#define EEXIT_THEME     4
#define EEXIT_EXEC      5

#define ESESSION_INIT   0
#define ESESSION_START  1
#define ESESSION_STOP   2

void                SessionInit(void);
void                SessionSave(int shutdown);
void                SessionExit(int mode, const char *params);
void                SessionHelper(int when);
void                ProcessICEMSGS(void);
int                 GetSMfd(void);
void                SetSMID(const char *smid);
void                SettingsSession(void);

#endif /* _SESSION_H_ */
