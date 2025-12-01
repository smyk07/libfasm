/*
 * libfasm - C Library interface to FASM assembler.
 * Based on flat assembler by Tomasz Grysztar
 *
 * Licensed under the FASM license (see LICENSE file)
 */

#ifndef FASM_H
#define FASM_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Version Information
 */

/*
 * Get FASM version string. Implemented in WRAPPER.ASM
 *
 * @return flat assembler version string
 */
extern const char *fasm_get_version(void);

/*
 * Get libfasm wrapper version. Implemented in libfasm.c
 *
 * @return wrapper version string
 */
extern const char *libfasm_get_version(void);

#ifdef __cplusplus
}
#endif

#endif /* FASM_H */
