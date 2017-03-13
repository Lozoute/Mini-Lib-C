BITS 64

extern strchr

;; CODE
SECTION	.text

global	strpbrk:function

strpbrk:
	push		rbp
	mov		rbp,		rsp

	xor		rax,		rax
	xor		r8,		r8
	cmp		rdi,		0x0
	je		EXIT_NOT_FOUND
	cmp		rsi,		0x0
	je		EXIT_NOT_FOUND
	mov		rdx,		rdi
	mov		rdi,		rsi
	jmp		FIND

	FIND:		;FIND LABEL
	cmp		BYTE [rdx],	0x0
	je		EXIT_NOT_FOUND
	push		rdi
	xor		rsi,		rsi
	mov		sil,		BYTE [rdx]
	call		strchr		wrt ..plt
	pop		rdi
	cmp		rax,		0x0
	jne		EXIT
	inc		r8
	inc		rdx
	jmp		FIND

	EXIT_NOT_FOUND:	;EXIT_NOT_FOUND LABEL
	xor		rax,		rax
	leave
	ret

	EXIT:		;EXIT LABEL
	mov		rax,		rdx
	leave
	ret
