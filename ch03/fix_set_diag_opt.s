	.file	"fix_set_diag_opt.c"
	.text
	.globl	fix_set_diag_opt
	.type	fix_set_diag_opt, @function
fix_set_diag_opt:
.LFB0:
	.cfi_startproc
	movl	$0, %eax
.L2:
	movslq	%eax, %rdx
	movl	%esi, (%rdi,%rdx,4)
	addl	$17, %eax
	cmpl	$272, %eax
	jne	.L2
	rep ret
	.cfi_endproc
.LFE0:
	.size	fix_set_diag_opt, .-fix_set_diag_opt
	.ident	"GCC: (Ubuntu 7.3.0-16ubuntu3) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
