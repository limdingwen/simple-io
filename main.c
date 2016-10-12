// Hello world without using stdio.

void print(char* msg, long length) {
	asm("movq $4, %%rax\n\t"
		"movq $1, %%rbx\n\t"
		"movq %0, %%rcx\n\t"
		"movq %1, %%rdx\n\t"
		"int $0x80"
		:
		: "r" (msg), "r" (length)
		: "%rax", "%rbx", "%rcx", "%rdx");
}

int main() {
	print("Hello world!\n", 13);
}
