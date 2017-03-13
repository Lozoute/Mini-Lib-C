BITS 64

;; CODE
SECTION	.text

global	memset:function

memset:
	push		rbp
	mov		rbp,		rsp

	mov		rax,		rdi
	cmp		rdi,		0x0
	je		EXIT
	cmp		rdx,		0x0
	je		EXIT
	xor		rcx,		rcx
	jmp		SET

	SET:		;SET LABEL
	cmp		rcx,		rdx
	je		EXIT
	mov		[rdi],		sil
	inc		rdi
	inc		rcx
	jmp		SET

	EXIT:		;EXIT LABEL
	leave
	ret
