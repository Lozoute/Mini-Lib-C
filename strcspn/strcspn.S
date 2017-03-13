BITS 64

extern strchr

;; CODE
SECTION	.text

global	strcspn:function

strcspn:
	push		rbp
	mov		rbp,		rsp

	xor		rax,		rax
	xor		r8,		r8
	cmp		rdi,		0x0
	je		EXIT
	cmp		rsi,		0x0
	je		EXIT
	mov		rdx,		rdi
	mov		rdi,		rsi
	jmp		FIND

	FIND:		;FIND LABEL
	cmp		BYTE [rdx],	0x0
	je		EXIT
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

	EXIT:		;EXIT LABEL
	mov		rax,		r8
	leave
	ret
