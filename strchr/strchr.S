BITS 64

;; CODE
SECTION	.text

global	strchr:function

strchr:
	push		rbp
	mov		rbp,		rsp

	cmp		rdi,		0x0
	je		EXIT_FAILURE
	jmp		COMPARE

	COMPARE:	;COMPARE LABEL
	cmp		BYTE [rdi],	sil
	je		EXIT
	cmp		BYTE [rdi],	0x0
	je		EXIT_FAILURE
	inc		rdi
	jmp		COMPARE

	EXIT:		;EXIT LABEL
	mov		rax,		rdi
	leave
	ret

	EXIT_FAILURE:	;EXIT_FAILURE LABEL
	xor		rax,		rax
	leave
	ret
