
; wrapper for flat assembler
; Based on flat assembler by Tomasz Grysztar

format ELF64

public fasm_get_version

section '.text' executable

include '.\SOURCE\VERSION.INC'

_fasm_version db 'flat assembler version ', VERSION_STRING, 0

fasm_get_version:
  lea rax, [_fasm_version]
  ret
