	.file	"cread.c"
	.text
	.globl	cread
	.type	cread, @function
cread:
.LFB0:
	.cfi_startproc
	testq	%rdi, %rdi
	je	.L3
	movq	(%rdi), %rax
	ret
.L3:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	cread, .-cread
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
