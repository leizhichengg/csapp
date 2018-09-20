	.file	"fix_prod_ele.c"
	.text
	.globl	fix_prod_ele
	.type	fix_prod_ele, @function
fix_prod_ele:
.LFB0:
	.cfi_startproc
	movl	$0, %eax
	movl	$0, %r8d
	jmp	.L2
.L3:
	movq	%rdx, %r10
	salq	$6, %r10
	addq	%rdi, %r10
	movq	%r8, %r9
	salq	$6, %r9
	addq	%rsi, %r9
	movl	(%r9,%rcx,4), %r9d
	imull	(%r10,%r8,4), %r9d
	addl	%r9d, %eax
	addq	$1, %r8
.L2:
	cmpq	$15, %r8
	jle	.L3
	rep ret
	.cfi_endproc
.LFE0:
	.size	fix_prod_ele, .-fix_prod_ele
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
