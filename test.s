	.file	"test.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "var is %p\12\0"
.LC1:
	.ascii "var1 is %p\12\0"
.LC2:
	.ascii "size is %d\12\0"
	.text
	.globl	fun
	.def	fun;	.scl	2;	.type	32;	.endef
	.seh_proc	fun
fun:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	24(%rbp), %rax
	leaq	16(%rbp), %rdx
	subq	%rdx, %rax
	sarq	$2, %rax
	movl	%eax, -4(%rbp)
	leaq	.LC0(%rip), %rax
	leaq	16(%rbp), %rdx
	movq	%rax, %rcx
	call	printf
	leaq	24(%rbp), %rax
	leaq	.LC1(%rip), %rcx
	movq	%rax, %rdx
	call	printf
	movl	-4(%rbp), %eax
	leaq	.LC2(%rip), %rcx
	movl	%eax, %edx
	call	printf
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$10, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	fun
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r7) 15.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
