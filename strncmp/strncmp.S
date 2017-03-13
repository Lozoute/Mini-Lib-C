BITS 64

;; CODE
SECTION	.text

global	strncmp:function

strncmp:
	push		rbp
	mov		rbp,		rsp

	xor		rax,		rax
	cmp		rdi,		0x0
	je		EXIT_NO_DIFF
	cmp		rsi,		0x0
	je		EXIT_NO_DIFF
	jmp		COMPARE

	COMPARE:	;COMPARE LABEL
	cmp		rdx,		0x0
	je		EXIT_NO_DIFF
	mov		bl,		BYTE [rdi]
	mov		cl,		BYTE [rsi]
	inc		rdi
	inc		rsi
	dec		rdx
	cmp		bl,		cl
	je		CHECK_COMPARE
	jmp		EXIT_DIFF

	CHECK_COMPARE:	;CHECK_COMPARE LABEL
	cmp		bl,		0x0
	jne		COMPARE
	jmp		EXIT_NO_DIFF

	EXIT_NO_DIFF:	;EXIT_NO_DIFF LABEL
	leave
	ret

	EXIT_DIFF:	;EXIT_DIFF LABEL
	sub		bl,		cl
	movsx		rax,		bl
	leave
	ret
