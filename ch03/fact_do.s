	.file	"fact_do.c"
	.text
	.globl	fact_fo
	.type	fact_fo, @function
fact_fo:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
.L2:
	imulq	%rdi, %rax
	subq	$1, %rdi
	cmpq	$1, %rdi
	jg	.L2
	rep ret
	.cfi_endproc
.LFE0:
	.size	fact_fo, .-fact_fo
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
