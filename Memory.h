#ifndef MEMORY_H
#define MEMORY_H

#define MEMORY_SIZE 256

void memory_init(void);
void memory_write(int address, int value);
int memory_read(int address);
void memory_dump(void);

#endif
