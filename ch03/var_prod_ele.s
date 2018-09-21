	.file	"var_prod_ele.c"
	.text
	.globl	var_prod_ele
	.type	var_prod_ele, @function
var_prod_ele:
.LFB0:
	.cfi_startproc
	testq	%rdi, %rdi
	jle	.L4
	salq	$2, %rcx
	imulq	%rdi, %rcx
	addq	%rcx, %rsi
	leaq	0(,%rdi,4), %r9
	leaq	(%rdx,%r8,4), %r8
	movl	$0, %edx
	movl	$0, %eax
.L3:
	movl	(%rsi,%rdx,4), %ecx
	imull	(%r8), %ecx
	addl	%ecx, %eax
	addq	$1, %rdx
	addq	%r9, %r8
	cmpq	%rdx, %rdi
	jne	.L3
	rep ret
.L4:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	var_prod_ele, .-var_prod_ele
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
