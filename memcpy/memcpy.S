BITS 64

;; CODE
SECTION .text

global	memcpy:function

memcpy:
	push		rbp
	mov		rbp,		rsp

	mov		rax,		rdi
	cmp		rdi,		0x0
	je		EXIT
	cmp		rsi,		0x0
	je		EXIT
	xor		rcx,		rcx
	jmp		COPY

	COPY:		; COPY LABEL
	cmp		rcx,		rdx
	je		EXIT
	mov		r8b,		BYTE [rsi]
	mov		[rdi],		r8b
	inc		rdi
	inc		rsi
	inc		rcx
	jmp		COPY

	EXIT:		; EXIT LABEL
	leave
	ret
