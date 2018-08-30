	.file	"arith.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
.LFB0:
	.cfi_startproc
	xorq	%rsi, %rdi
	leaq	(%rdx,%rdx,2), %rdx
	movq	%rdx, %rax
	salq	$4, %rax
	andl	$252645135, %edi
	subq	%rdi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
