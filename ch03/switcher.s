	.file	"switcher.c"
	.text
	.globl	switcher
	.type	switcher, @function
switcher:
.LFB0:
	.cfi_startproc
	cmpq	$7, %rdi
	ja	.L2
	leaq	.L4(%rip), %r8
	movslq	(%r8,%rdi,4), %rax
	addq	%r8, %rax
	jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L4:
	.long	.L3-.L4
	.long	.L2-.L4
	.long	.L5-.L4
	.long	.L2-.L4
	.long	.L6-.L4
	.long	.L7-.L4
	.long	.L2-.L4
	.long	.L5-.L4
	.text
.L6:
	movq	%rdi, %rsi
	jmp	.L2
.L7:
	movq	%rsi, %rdx
	xorq	$15, %rdx
.L3:
	leaq	112(%rdx), %rsi
.L2:
	movq	%rsi, (%rcx)
	ret
.L5:
	addq	%rdx, %rsi
	salq	$2, %rsi
	jmp	.L2
	.cfi_endproc
.LFE0:
	.size	switcher, .-switcher
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
