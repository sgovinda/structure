	.file	"array_queue.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN10ArrayQueueC2Ei,"axG",@progbits,_ZN10ArrayQueueC5Ei,comdat
	.align 2
	.weak	_ZN10ArrayQueueC2Ei
	.type	_ZN10ArrayQueueC2Ei, @function
_ZN10ArrayQueueC2Ei:
.LFB972:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cltq
	movabsq	$2287828610704211968, %rdx
	cmpq	%rdx, %rax
	ja	.L2
	salq	$2, %rax
	jmp	.L3
.L2:
	movq	$-1, %rax
.L3:
	movq	%rax, %rdi
	call	_Znam
	movq	-8(%rbp), %rdx
	movq	%rax, 8(%rdx)
	movq	-8(%rbp), %rax
	movl	$0, 20(%rax)
	movq	-8(%rbp), %rax
	movl	20(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE972:
	.size	_ZN10ArrayQueueC2Ei, .-_ZN10ArrayQueueC2Ei
	.weak	_ZN10ArrayQueueC1Ei
	.set	_ZN10ArrayQueueC1Ei,_ZN10ArrayQueueC2Ei
	.section	.text._ZN10ArrayQueueD2Ev,"axG",@progbits,_ZN10ArrayQueueD5Ev,comdat
	.align 2
	.weak	_ZN10ArrayQueueD2Ev
	.type	_ZN10ArrayQueueD2Ev, @function
_ZN10ArrayQueueD2Ev:
.LFB975:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L4
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	_ZdaPv
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE975:
	.size	_ZN10ArrayQueueD2Ev, .-_ZN10ArrayQueueD2Ev
	.weak	_ZN10ArrayQueueD1Ev
	.set	_ZN10ArrayQueueD1Ev,_ZN10ArrayQueueD2Ev
	.section	.rodata
.LC0:
	.string	" Empty queue\n"
.LC1:
	.string	"\t"
.LC2:
	.string	"\n"
.LC3:
	.string	"head - "
.LC4:
	.string	"tail - "
	.text
	.align 2
	.globl	_ZN10ArrayQueue10PrintArrayERSo
	.type	_ZN10ArrayQueue10PrintArrayERSo, @function
_ZN10ArrayQueue10PrintArrayERSo:
.LFB980:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-40(%rbp), %rax
	movl	16(%rax), %edx
	movq	-40(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jne	.L7
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L6
.L7:
	movq	-40(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L9
.L10:
	movq	-40(%rbp), %rax
	movq	8(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$.LC1, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-20(%rbp), %eax
	leal	1(%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movl	%edx, -20(%rbp)
.L9:
	movl	-20(%rbp), %eax
	leal	1(%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movq	-40(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jne	.L10
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-40(%rbp), %rax
	movl	20(%rax), %ebx
	movq	-40(%rbp), %rax
	movl	16(%rax), %r12d
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%r12d, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L6:
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE980:
	.size	_ZN10ArrayQueue10PrintArrayERSo, .-_ZN10ArrayQueue10PrintArrayERSo
	.section	.rodata
	.align 8
.LC5:
	.string	"Queue is Full. Cannot Enqueue - "
	.text
	.align 2
	.globl	_ZN10ArrayQueue7EnqueueEi
	.type	_ZN10ArrayQueue7EnqueueEi, @function
_ZN10ArrayQueue7EnqueueEi:
.LFB981:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movq	-8(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jne	.L12
	movl	$.LC5, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L11
.L12:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_ZN10ArrayQueue7EnqueueEi, .-_ZN10ArrayQueue7EnqueueEi
	.section	.rodata
	.align 8
.LC6:
	.string	"Queue is Empty Cannot Dequeue \n"
	.text
	.align 2
	.globl	_ZN10ArrayQueue7DequeueEv
	.type	_ZN10ArrayQueue7DequeueEv, @function
_ZN10ArrayQueue7DequeueEv:
.LFB982:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	16(%rax), %edx
	movq	-24(%rbp), %rax
	movl	20(%rax), %eax
	cmpl	%eax, %edx
	jne	.L15
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$-1, %eax
	jmp	.L16
.L15:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	20(%rax), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	20(%rax), %eax
	leal	1(%rax), %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movq	-24(%rbp), %rax
	movl	%edx, 20(%rax)
	movl	-4(%rbp), %eax
.L16:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE982:
	.size	_ZN10ArrayQueue7DequeueEv, .-_ZN10ArrayQueue7DequeueEv
	.globl	_Z15test_ArrayQueueR10ArrayQueue
	.type	_Z15test_ArrayQueueR10ArrayQueue, @function
_Z15test_ArrayQueueR10ArrayQueue:
.LFB983:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$133, -4(%rbp)
	jmp	.L18
.L19:
	subl	$7, -4(%rbp)
.L18:
	cmpl	$11, -4(%rbp)
	jg	.L19
	movq	-24(%rbp), %rax
	movl	$_ZSt4cout, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue10PrintArrayERSo
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE983:
	.size	_Z15test_ArrayQueueR10ArrayQueue, .-_Z15test_ArrayQueueR10ArrayQueue
	.section	.rodata
.LC7:
	.string	"Dequeued item - "
	.text
	.globl	main
	.type	main, @function
main:
.LFB984:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA984
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	leaq	-48(%rbp), %rax
	movl	$6, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZN10ArrayQueueC1Ei
.LEHE0:
	leaq	-48(%rbp), %rax
	movl	$20, %esi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN10ArrayQueue7EnqueueEi
	leaq	-48(%rbp), %rax
	movl	$30, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7EnqueueEi
	leaq	-48(%rbp), %rax
	movl	$40, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7EnqueueEi
	leaq	-48(%rbp), %rax
	movl	$50, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7EnqueueEi
	leaq	-48(%rbp), %rax
	movl	$60, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7EnqueueEi
	leaq	-48(%rbp), %rax
	movl	$_ZSt4cout, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue10PrintArrayERSo
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7DequeueEv
	movl	%eax, %ebx
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7DequeueEv
	movl	%eax, %ebx
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7DequeueEv
	movl	%eax, %ebx
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rax
	movl	$_ZSt4cout, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue10PrintArrayERSo
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN10ArrayQueue7DequeueEv
	movl	%eax, %ebx
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rax
	movl	$_ZSt4cout, %esi
	movq	%rax, %rdi
	call	_ZN10ArrayQueue10PrintArrayERSo
.LEHE1:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN10ArrayQueueD1Ev
	movl	$0, %eax
	jmp	.L24
.L23:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN10ArrayQueueD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume
.LEHE2:
.L24:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE984:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA984:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE984-.LLSDACSB984
.LLSDACSB984:
	.uleb128 .LEHB0-.LFB984
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB984
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L23-.LFB984
	.uleb128 0
	.uleb128 .LEHB2-.LFB984
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE984:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB995:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L25
	cmpl	$65535, -8(%rbp)
	jne	.L25
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L25:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE995:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN10ArrayQueue10PrintArrayERSo, @function
_GLOBAL__sub_I__ZN10ArrayQueue10PrintArrayERSo:
.LFB996:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE996:
	.size	_GLOBAL__sub_I__ZN10ArrayQueue10PrintArrayERSo, .-_GLOBAL__sub_I__ZN10ArrayQueue10PrintArrayERSo
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN10ArrayQueue10PrintArrayERSo
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
