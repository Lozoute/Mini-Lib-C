BITS 64

;; CODE
SECTION	.text

global	strcasecmp:function

strcasecmp:
	push		rbp
	mov		rbp,		rsp

	xor		rax,		rax
	cmp		rdi,		0x0
	je		EXIT_NO_DIFF
	cmp		rsi,		0x0
	je		EXIT_NO_DIFF
	jmp		COMPARE

	COMPARE:	;COMPARE LABEL
	push		rdi
	call		my_toupper
	mov		rbx,		rax
	mov		rdi,		rsi
	call		my_toupper
	mov		rcx,		rax
	pop		rdi
	inc		rdi
	inc		rsi
	cmp		bl,		cl
	je		CHECK_COMPARE
	jmp		EXIT_DIFF

	CHECK_COMPARE:	;CHECK_COMPARE LABEL
	cmp		bl,		0x0
	jne		COMPARE
	jmp		EXIT_NO_DIFF

	EXIT_NO_DIFF:	;EXIT_NO_DIFF LABEL
	xor		rax,		rax
	leave
	ret

	EXIT_DIFF:	;EXIT_DIFF LABEL
	sub		bl,		cl
	movsx		rax,		bl
	leave
	ret

my_toupper:
	push		rbp
	mov		rbp,		rsp

	mov		al,		BYTE [rdi]
	cmp		al,		0x41
	jae		ABOVE_OR_EQUAL_A
	leave
	ret

	ABOVE_OR_EQUAL_A:	;ABOVE_OR_EQUAL_A LABEL
	cmp		al,		0x5A
	jbe		TOUPPER
	leave
	ret

	TOUPPER:		;TOUPPER LABEL
	add		al,		0x20
	leave
	ret
