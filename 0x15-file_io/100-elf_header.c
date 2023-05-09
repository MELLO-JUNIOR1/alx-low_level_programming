#include "main.h"
#include <elf.h>

#define BUFFER_SIZE 1024

void print_error(const char *msg)
{
fprintf(stderr, "Error: %s\n", msg);
}

void print_elf_header(const Elf64_Ehdr *header)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) 
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "unknown");
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "unknown");
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
if (argc != 2) 
{
print_error("Usage: elf_header elf_filename");
return 98;
}

int fd = open(argv[1], O_RDONLY);
if (fd < 0) 
{
print_error("Failed to open file");
return 98;
}

Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));
if (bytes_read != sizeof(header)) 
{
print_error("Failed to read ELF header");
close(fd);
return 98;
}

if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) 
{
print_error("Not an ELF file");
close(fd);
return 98;
}

print_elf_header(&header);
close(fd);
return 0;
}
