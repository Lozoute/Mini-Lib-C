BITS 64

;; CODE
SECTION	.text

global	strlen:function

strlen:
	push		rbp
	mov		rbp,		rsp

	xor		rax,		rax
	cmp		rdi,		0x0
	je		EXIT
	jmp		COMPARE

	COMPARE:	;COMPARE LABEL
	cmp		BYTE [rdi],	0x0
	je		EXIT
	inc		rax
	inc		rdi
	jmp		COMPARE

	EXIT:		;EXIT LABEL
	leave
	ret
