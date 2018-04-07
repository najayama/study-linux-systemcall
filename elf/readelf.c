#include <stdio.h>
#include <elf.h>

int main(){
    FILE *fp;
    Elf64_Ehdr elfhdr;

    fp = fopen("simple.out", "r");

    if(fp == NULL){
        printf("Error in fopen");
        return 0;
    }


    fread(&elfhdr.e_ident, sizeof(unsigned char), EI_NIDENT, fp);
    fread(&elfhdr.e_type, sizeof(Elf64_Quarter), 1, fp);
    fread(&elfhdr.e_machine, sizeof(Elf64_Quarter), 1, fp);
    fread(&elfhdr.e_version, sizeof(Elf64_Half), 1, fp);
    fread(&elfhdr.e_entry, sizeof(Elf64_Addr), 1, fp);
    fread(&elfhdr.e_phoff, sizeof(Elf64_Off), 1, fp);
    fread(&elfhdr.e_shoff, sizeof(Elf64_Off), 1, fp);
    fread(&elfhdr.e_flags, sizeof(Elf64_Half), 1, fp);
    fread(&elfhdr.e_ehsize, sizeof(Elf64_Quarter), 1, fp);
    fread(&elfhdr.e_phentsize, sizeof(Elf64_Quarter), 1, fp);
    fread(&elfhdr.e_phnum, sizeof(Elf64_Quarter), 1, fp);
    fread(&elfhdr.e_shentsize, sizeof(Elf64_Quarter), 1, fp);
    fread(&elfhdr.e_shnum, sizeof(Elf64_Quarter), 1, fp);
    fread(&elfhdr.e_shstrndx, sizeof(Elf64_Quarter), 1, fp);

  //  fread(&elfhdr.e_, sizeof(Elf64_), 1, fp);





    return 0;
}



