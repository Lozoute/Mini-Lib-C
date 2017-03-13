BITS 64

extern malloc
extern free
extern memcpy

;; CODE
SECTION .text

global	memmove:function

memmove:
	push		rbp
	mov		rbp,		rsp

	;; We Save The Original Dest For Later
	push		rdi

	;; If Size Is Null, We Do Not Bother : We Quit
	cmp		rdx,		0x0
	je		EXIT

	;; We Check For NULL Pointers
	cmp		rdi,		0x0
	je		EXIT
	cmp		rsi,		0x0
	je		EXIT

	;; We Malloc A Buffer Of -Third Parameter- Size
	mov		rdi,		rdx
	push		rsi
	push		rdx
	call		malloc		wrt ..plt
	pop		rdx
	pop		rsi
	cmp		rax,		0x0
	je		EXIT

	;; We Call Memcpy With New Buffer As Destination
	mov		rdi,		rax
	push		rdx
	call		memcpy		wrt ..plt
	pop		rdx

	;; We Put The New Buff As Source, And ReSet Dest
	mov		rsi,		rax
	pop		rdi
	push		rsi
	call		memcpy		wrt ..plt
	pop		rdi

	;; Finally, We Free The Buffer And We Leave
	push		rax
	call		free		wrt ..plt
	jmp		EXIT


	EXIT:		; EXIT LABEL
	pop		rax
	leave
	ret
