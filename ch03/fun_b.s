	.file	"fun_b.c"
	.text
	.globl	fun_b
	.type	fun_b, @function
fun_b:
.LFB0:
	.cfi_startproc
	movl	$64, %edx
	movl	$0, %eax
	jmp	.L2
.L3:
	addq	%rax, %rax
	movq	%rdi, %rcx
	andl	$1, %ecx
	orq	%rcx, %rax
	subq	$1, %rdx
.L2:
	testq	%rdx, %rdx
	jne	.L3
	rep ret
	.cfi_endproc
.LFE0:
	.size	fun_b, .-fun_b
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
