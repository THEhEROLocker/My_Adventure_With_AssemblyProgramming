.global sort

.text

sort:
#   Parameters
#   rdi: address of the array
#   rsi: count for length of the array

#   $rbx: count variable 
#
#   Variarbxe Initilization

	movq $0, %r8
	xorq %rbx, %rbx
	xorq %rcx, %rcx
	xorl %edx, %edx
	xorl %r9d, %r9d
	xorl %eax, %eax

	Loop1:

		movq $1,%rcx
		movq $0,%rbx

		Loop2:
			movl (%rdi,%rbx,4), %edx
			cmpl (%rdi,%rcx,4), %edx
			jl NoSwap

			movl (%rdi,%rbx,4), %r9d
			movl (%rdi,%rcx,4),%eax
			movl %eax, (%rdi,%rbx,4)
			movl %r9d, (%rdi,%rcx,4)

			NoSwap:
			inc %rbx
			inc %rcx

		cmp %rsi, %rcx
		jl Loop2

	inc %r8
	cmp %rsi, %r8
	jl Loop1

	movl $0, %eax

ret
