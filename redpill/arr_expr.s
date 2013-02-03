	.file	"arr_expr.c"
	.text
	.globl	expr
	.type	expr, @function
expr:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$48, %esp
	movl	$0, -8(%ebp)
	movl	$12, -48(%ebp)
	movl	-4(%ebp), %eax
	movl	$12, -48(%ebp,%eax,4)
	leal	-48(%ebp), %eax
	addl	$8, %eax
	movl	%eax, -8(%ebp)
	movl	-4(%ebp), %eax
	subl	$1, %eax
	leal	0(,%eax,4), %edx
	leal	-48(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%ebp)
	movl	-4(%ebp), %eax
	leal	0(,%eax,8), %edx
	leal	-48(%ebp), %eax
	addl	%edx, %eax
	movl	$12, (%eax)
	movl	-4(%ebp), %eax
	sall	$2, %eax
	sarl	$2, %eax
	movl	%eax, -8(%ebp)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	expr, .-expr
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
