BITS 64

extern strncmp
extern strlen

;; CODE
SECTION	.text

global	strstr:function

strstr:
	push		rbp
	mov		rbp,		rsp

	xor		rax,		rax
	cmp		rdi,		0x0
	je		EXIT
	cmp		rsi,		0x0
	je		EXIT
	push		rdi
	mov		rdi,		rsi
	call		strlen		wrt ..plt
	mov		rdx,		rax
	pop		rdi
	jmp		COMPARE

	COMPARE:	;COMPARE LABEL
	push		rdi
	push		rsi
	push		rdx
	call		strncmp		wrt ..plt
	pop		rdx
	pop		rsi
	pop		rdi
	cmp		rax,		0x0
	je		EXIT
	cmp		BYTE [rdi],	0x0
	je		EXIT_NOT_FOUND
	inc		rdi
	jmp		COMPARE

	EXIT_NOT_FOUND:	;EXIT_NOT_FOUND LABEL
	xor		rax,		rax
	leave
	ret

	EXIT:		;EXIT LABEL
	mov		rax,		rdi
	leave
	ret
