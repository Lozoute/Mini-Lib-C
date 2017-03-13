BITS 64

extern strlen

;; CODE
SECTION	.text

global	rindex:function

rindex:
	push		rbp
	mov		rbp,		rsp

	cmp		rdi,		0x0
	je		EXIT_NOT_FOUND
	push		rdi
	call		strlen		wrt ..plt
	mov		rbx,		rax
	pop		rdi
	jmp		COMPARE

	COMPARE:	;COMPARE LABEL
	cmp		rbx,		0x0
	jl		EXIT_NOT_FOUND
	cmp		BYTE [rdi + rbx], sil
	je		EXIT
	dec		rbx
	jmp		COMPARE

	EXIT_NOT_FOUND:	;EXIT_NOT_FOUND LABEL
	xor		rax,		rax
	leave
	ret

	EXIT:		;EXIT LABEL
	mov		rax,		rdi
	add		rax,		rbx
	leave
	ret
